// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/msg/detail/hex_joy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__msg__HexJoy__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0xb4, 0xac, 0x60, 0x07, 0x66, 0x0a, 0xdd,
      0xad, 0x4a, 0x34, 0x74, 0x39, 0xbb, 0x15, 0x94,
      0x72, 0x7a, 0x57, 0x2c, 0x6e, 0xbf, 0xc3, 0xaa,
      0xdd, 0xec, 0x3f, 0x33, 0x7a, 0xb1, 0xd9, 0xb0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interbotix_xs_msgs__msg__HexJoy__TYPE_NAME[] = "interbotix_xs_msgs/msg/HexJoy";

// Define type names, field names, and default values
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__world_x_cmd[] = "world_x_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__world_y_cmd[] = "world_y_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__world_yaw_cmd[] = "world_yaw_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_x_cmd[] = "place_x_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_y_cmd[] = "place_y_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_z_cmd[] = "place_z_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_roll_cmd[] = "place_roll_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_pitch_cmd[] = "place_pitch_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__pose_cmd[] = "pose_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__move_type_cmd[] = "move_type_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__gait_toggle_cmd[] = "gait_toggle_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__leg_toggle_cmd[] = "leg_toggle_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__stance_cmd[] = "stance_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__reboot_cmd[] = "reboot_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__set_home_pose_cmd[] = "set_home_pose_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__speed_cmd[] = "speed_cmd";
static char interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__speed_toggle_cmd[] = "speed_toggle_cmd";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__msg__HexJoy__FIELDS[] = {
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__world_x_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__world_y_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__world_yaw_cmd, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_x_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_y_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_z_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_roll_cmd, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__place_pitch_cmd, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__pose_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__move_type_cmd, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__gait_toggle_cmd, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__leg_toggle_cmd, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__stance_cmd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__reboot_cmd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__set_home_pose_cmd, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__speed_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__HexJoy__FIELD_NAME__speed_toggle_cmd, 16, 16},
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
interbotix_xs_msgs__msg__HexJoy__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__msg__HexJoy__TYPE_NAME, 29, 29},
      {interbotix_xs_msgs__msg__HexJoy__FIELDS, 17, 17},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used specifically in the interbotix_xshexapod_joy package\n"
  "#\n"
  "# Maps raw 'joy' commands to more specific ones to control an Interbotix hexapod\n"
  "\n"
  "# enum values that define the joystick controls for the robot\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Command Options to move the Hexapod in the 'world' or in 'place'\n"
  "# World Control\n"
  "int8 WORLD_X_INC = 1\n"
  "int8 WORLD_X_DEC = 2\n"
  "int8 WORLD_Y_INC = 3\n"
  "int8 WORLD_Y_DEC = 4\n"
  "int8 WORLD_YAW_CCW = 5\n"
  "int8 WORLD_YAW_CW = 6\n"
  "\n"
  "# In Place Control\n"
  "int8 PLACE_X_INC = 7\n"
  "int8 PLACE_X_DEC = 8\n"
  "int8 PLACE_Y_INC = 9\n"
  "int8 PLACE_Y_DEC = 10\n"
  "int8 PLACE_Z_INC = 11\n"
  "int8 PLACE_Z_DEC = 12\n"
  "int8 PLACE_ROLL_CCW = 13\n"
  "int8 PLACE_ROLL_CW = 14\n"
  "int8 PLACE_PITCH_UP = 15\n"
  "int8 PLACE_PITCH_DOWN = 16\n"
  "\n"
  "# Move Type\n"
  "int8 MOVE_HEXAPOD = 17\n"
  "int8 MOVE_LEG = 18\n"
  "\n"
  "# Pose Control\n"
  "int8 HOME_POSE = 19\n"
  "int8 SLEEP_POSE = 20\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Customize configurations for the Interbotix Hexapod\n"
  "\n"
  "# Cycle through the various gaits when in 'move_hexapod' mode\n"
  "int8 GAIT_NEXT = 21\n"
  "int8 GAIT_PREVIOUS = 22\n"
  "\n"
  "# Cycle through the legs when in 'move_leg' mode\n"
  "int8 LEG_NEXT = 23\n"
  "int8 LEG_PREVIOUS = 24\n"
  "\n"
  "# Widen or narrow the hexapod's stance\n"
  "int8 WIDEN_STANCE = 25\n"
  "int8 NARROW_STANCE = 26\n"
  "\n"
  "# Reboot motors if necessary\n"
  "int8 REBOOT_MOTORS = 27\n"
  "\n"
  "# Set the current stance and hexapod height to be the new 'Home Pose'\n"
  "int8 SET_HOME_POSE = 28\n"
  "\n"
  "# Inc/Dec speed\n"
  "int8 SPEED_INC = 29\n"
  "int8 SPEED_DEC = 30\n"
  "\n"
  "# Quickly toggle between a fast and slow speed setting\n"
  "int8 SPEED_COARSE = 31\n"
  "int8 SPEED_FINE = 32\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the motion of the Interbotix Hexapod\n"
  "int8 world_x_cmd\n"
  "int8 world_y_cmd\n"
  "int8 world_yaw_cmd\n"
  "\n"
  "int8 place_x_cmd\n"
  "int8 place_y_cmd\n"
  "int8 place_z_cmd\n"
  "int8 place_roll_cmd\n"
  "int8 place_pitch_cmd\n"
  "\n"
  "int8 pose_cmd\n"
  "int8 move_type_cmd\n"
  "\n"
  "# Other Options\n"
  "int8 gait_toggle_cmd\n"
  "int8 leg_toggle_cmd\n"
  "int8 stance_cmd\n"
  "int8 reboot_cmd\n"
  "int8 set_home_pose_cmd\n"
  "\n"
  "# Speed Configs\n"
  "int8 speed_cmd\n"
  "int8 speed_toggle_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__msg__HexJoy__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__msg__HexJoy__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2160, 2160},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__msg__HexJoy__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__msg__HexJoy__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
