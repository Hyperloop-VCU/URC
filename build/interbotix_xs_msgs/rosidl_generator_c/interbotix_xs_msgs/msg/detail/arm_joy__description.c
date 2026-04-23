// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:msg/ArmJoy.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/msg/detail/arm_joy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__msg__ArmJoy__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x66, 0x35, 0x1f, 0xd9, 0xad, 0x72, 0x70,
      0xf3, 0x6c, 0xce, 0xb5, 0x17, 0xea, 0x62, 0x68,
      0xf2, 0xc6, 0xd6, 0x1c, 0x39, 0x8f, 0x02, 0x52,
      0xea, 0xf2, 0xd8, 0xb6, 0x54, 0x79, 0x96, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interbotix_xs_msgs__msg__ArmJoy__TYPE_NAME[] = "interbotix_xs_msgs/msg/ArmJoy";

// Define type names, field names, and default values
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_x_cmd[] = "ee_x_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_y_cmd[] = "ee_y_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_z_cmd[] = "ee_z_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_roll_cmd[] = "ee_roll_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_pitch_cmd[] = "ee_pitch_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__waist_cmd[] = "waist_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__gripper_cmd[] = "gripper_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__pose_cmd[] = "pose_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__speed_cmd[] = "speed_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__speed_toggle_cmd[] = "speed_toggle_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__gripper_pwm_cmd[] = "gripper_pwm_cmd";
static char interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__torque_cmd[] = "torque_cmd";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__msg__ArmJoy__FIELDS[] = {
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_x_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_y_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_z_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_roll_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__ee_pitch_cmd, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__waist_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__gripper_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__pose_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__speed_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__speed_toggle_cmd, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__gripper_pwm_cmd, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__ArmJoy__FIELD_NAME__torque_cmd, 10, 10},
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
interbotix_xs_msgs__msg__ArmJoy__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__msg__ArmJoy__TYPE_NAME, 29, 29},
      {interbotix_xs_msgs__msg__ArmJoy__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used specifically in the interbotix_xsarm_joy package\n"
  "#\n"
  "# Maps raw 'joy' commands to more specific ones to control an Interbotix manipulator\n"
  "\n"
  "# enum values that define the joystick controls for the robot\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the motion of the virtual 'ee_gripper_link' or end effector using the modern_robotics_ik engine\n"
  "# Position Control\n"
  "int8 EE_X_INC = 1\n"
  "int8 EE_X_DEC = 2\n"
  "int8 EE_Y_INC = 3\n"
  "int8 EE_Y_DEC = 4\n"
  "int8 EE_Z_INC = 5\n"
  "int8 EE_Z_DEC = 6\n"
  "\n"
  "# Orientation Control\n"
  "int8 EE_ROLL_CCW = 7\n"
  "int8 EE_ROLL_CW = 8\n"
  "int8 EE_PITCH_UP = 9\n"
  "int8 EE_PITCH_DOWN = 10\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the motion of independent joints on the Arm or send predefined robot poses\n"
  "# Waist Joint Control\n"
  "int8 WAIST_CCW = 11\n"
  "int8 WAIST_CW = 12\n"
  "\n"
  "# Gripper Control\n"
  "int8 GRIPPER_RELEASE = 13\n"
  "int8 GRIPPER_GRASP = 14\n"
  "\n"
  "# Pose Control\n"
  "int8 HOME_POSE = 15\n"
  "int8 SLEEP_POSE = 16\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Customize configurations for the Interbotix Arm\n"
  "# Inc/Dec Joint speed\n"
  "int8 SPEED_INC = 17\n"
  "int8 SPEED_DEC = 18\n"
  "\n"
  "# Quickly toggle between a fast and slow speed setting\n"
  "int8 SPEED_COARSE = 19\n"
  "int8 SPEED_FINE = 20\n"
  "\n"
  "# Inc/Dec Gripper pressure\n"
  "int8 GRIPPER_PWM_INC = 21\n"
  "int8 GRIPPER_PWM_DEC = 22\n"
  "\n"
  "# Torque On/Off all servos\n"
  "int8 TORQUE_ON = 23\n"
  "int8 TORQUE_OFF = 24\n"
  "\n"
  "#########################################################################################################\n"
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
  "# Misc. Configs\n"
  "int8 speed_cmd\n"
  "int8 speed_toggle_cmd\n"
  "int8 gripper_pwm_cmd\n"
  "int8 torque_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__msg__ArmJoy__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__msg__ArmJoy__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1920, 1920},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__msg__ArmJoy__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__msg__ArmJoy__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
