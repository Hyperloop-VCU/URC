// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:msg/LocobotJoy.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/msg/detail/locobot_joy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__msg__LocobotJoy__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0x4e, 0xf6, 0xee, 0x6d, 0x84, 0x78, 0xef,
      0x3a, 0x26, 0x04, 0x62, 0xf2, 0xc7, 0xae, 0x73,
      0x5a, 0xad, 0x35, 0x2d, 0x5e, 0x14, 0xa6, 0xa5,
      0xbd, 0xd6, 0x41, 0x2d, 0x5b, 0xf3, 0xa3, 0xd3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interbotix_xs_msgs__msg__LocobotJoy__TYPE_NAME[] = "interbotix_xs_msgs/msg/LocobotJoy";

// Define type names, field names, and default values
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__base_x_cmd[] = "base_x_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__base_theta_cmd[] = "base_theta_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__base_reset_odom_cmd[] = "base_reset_odom_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__pan_cmd[] = "pan_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__tilt_cmd[] = "tilt_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_x_cmd[] = "ee_x_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_y_cmd[] = "ee_y_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_z_cmd[] = "ee_z_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_roll_cmd[] = "ee_roll_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_pitch_cmd[] = "ee_pitch_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__waist_cmd[] = "waist_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__gripper_cmd[] = "gripper_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__pose_cmd[] = "pose_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__speed_cmd[] = "speed_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__speed_toggle_cmd[] = "speed_toggle_cmd";
static char interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__gripper_pwm_cmd[] = "gripper_pwm_cmd";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__msg__LocobotJoy__FIELDS[] = {
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__base_x_cmd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__base_theta_cmd, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__base_reset_odom_cmd, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__pan_cmd, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__tilt_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_x_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_y_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_z_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_roll_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__ee_pitch_cmd, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__waist_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__gripper_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__pose_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__speed_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__speed_toggle_cmd, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__LocobotJoy__FIELD_NAME__gripper_pwm_cmd, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__msg__LocobotJoy__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__msg__LocobotJoy__TYPE_NAME, 33, 33},
      {interbotix_xs_msgs__msg__LocobotJoy__FIELDS, 16, 16},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used specifically in the interbotix_xslocobot_joy package\n"
  "#\n"
  "# Maps raw 'joy' commands to more specific ones to control an Interbotix LoCoBot\n"
  "\n"
  "# enum values that define the joystick controls for the robot\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Reset base odometry\n"
  "int8 RESET_ODOM = 1\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the pan-and-tilt mechanism\n"
  "int8 PAN_CCW = 2\n"
  "int8 PAN_CW = 3\n"
  "int8 TILT_UP = 4\n"
  "int8 TILT_DOWN = 5\n"
  "int8 PAN_TILT_HOME = 6\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the motion of the virtual 'ee_gripper_link' or end effector using the modern_robotics_ik engine\n"
  "# Position Control\n"
  "int8 EE_X_INC = 7\n"
  "int8 EE_X_DEC = 8\n"
  "int8 EE_Y_INC = 9\n"
  "int8 EE_Y_DEC = 10\n"
  "int8 EE_Z_INC = 11\n"
  "int8 EE_Z_DEC = 12\n"
  "\n"
  "# Orientation Control\n"
  "int8 EE_ROLL_CCW = 13\n"
  "int8 EE_ROLL_CW = 14\n"
  "int8 EE_PITCH_UP = 15\n"
  "int8 EE_PITCH_DOWN = 16\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the motion of independent joints on the Arm or send predefined robot poses\n"
  "# Waist Joint Control\n"
  "int8 WAIST_CCW = 17\n"
  "int8 WAIST_CW = 18\n"
  "\n"
  "# Gripper Control\n"
  "int8 GRIPPER_RELEASE = 19\n"
  "int8 GRIPPER_GRASP = 20\n"
  "\n"
  "# Pose Control\n"
  "int8 HOME_POSE = 21\n"
  "int8 SLEEP_POSE = 22\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Customize configurations for the Interbotix Arm\n"
  "# Inc/Dec Joint speed\n"
  "int8 SPEED_INC = 23\n"
  "int8 SPEED_DEC = 24\n"
  "\n"
  "# Quickly toggle between a fast and slow speed setting\n"
  "int8 SPEED_COARSE = 25\n"
  "int8 SPEED_FINE = 26\n"
  "\n"
  "# Inc/Dec Gripper pressure\n"
  "int8 GRIPPER_PWM_INC = 27\n"
  "int8 GRIPPER_PWM_DEC = 28\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the motion of the Kobuki base\n"
  "float64 base_x_cmd\n"
  "float64 base_theta_cmd\n"
  "int8 base_reset_odom_cmd\n"
  "\n"
  "# Control the motion of the camera pan-and-tilt mechanism\n"
  "int8 pan_cmd\n"
  "int8 tilt_cmd\n"
  "\n"
  "# Control the motion of the Interbotix Arm\n"
  "int8 ee_x_cmd\n"
  "int8 ee_y_cmd\n"
  "int8 ee_z_cmd\n"
  "int8 ee_roll_cmd\n"
  "int8 ee_pitch_cmd\n"
  "\n"
  "# Independent Joint/Pose Control\n"
  "int8 waist_cmd\n"
  "int8 gripper_cmd\n"
  "int8 pose_cmd\n"
  "\n"
  "# Arm Configs\n"
  "int8 speed_cmd\n"
  "int8 speed_toggle_cmd\n"
  "int8 gripper_pwm_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__msg__LocobotJoy__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__msg__LocobotJoy__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2420, 2420},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__msg__LocobotJoy__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__msg__LocobotJoy__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
