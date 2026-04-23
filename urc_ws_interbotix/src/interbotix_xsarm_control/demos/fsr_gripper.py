#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from interbotix_xs_modules.xs_robot.arm import InterbotixManipulatorXS
from std_msgs.msg import Int32MultiArray




class GripperNode(Node):
    def __init__(self):
        super().__init__('gripper_node')
        queue_size = 10
        self.fsr_values = {}
        self.bot = InterbotixManipulatorXS(
            robot_model="wx250",
            group_name="arm",
            gripper_name="gripper"
        )

        self.fsr_sub = self.create_subscription(
            Int32MultiArray,          # message type
            '/urc/hand/fsr',          # topic name
            self.fsr_callback,        # callback function
            queue_size                # QoS depth
        )

    def fsr_callback(self, msg):
        fsr_values = msg.data
        if not fsr_values:
            return
        
        if (fsr_values[0] >= 10):
            self.open()
        else:
            self.close() 
    
    

    def open(self):
        self.bot.gripper.open()

    def close(self):
        self.bot.gripper.close()

def main():
    rclpy.init()
    node = GripperNode()

    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()