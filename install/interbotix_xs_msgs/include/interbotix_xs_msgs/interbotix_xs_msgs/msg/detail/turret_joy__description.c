// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:msg/TurretJoy.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/msg/detail/turret_joy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__msg__TurretJoy__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0xb7, 0x31, 0x10, 0x78, 0xac, 0xed, 0xb6,
      0xae, 0x13, 0x1c, 0xf9, 0x6f, 0x29, 0x46, 0xc5,
      0xf8, 0x15, 0xfc, 0x06, 0x59, 0xaa, 0x2f, 0xdc,
      0xa4, 0x47, 0x5c, 0xfd, 0xc7, 0x58, 0xa9, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interbotix_xs_msgs__msg__TurretJoy__TYPE_NAME[] = "interbotix_xs_msgs/msg/TurretJoy";

// Define type names, field names, and default values
static char interbotix_xs_msgs__msg__TurretJoy__FIELD_NAME__pan_cmd[] = "pan_cmd";
static char interbotix_xs_msgs__msg__TurretJoy__FIELD_NAME__tilt_cmd[] = "tilt_cmd";
static char interbotix_xs_msgs__msg__TurretJoy__FIELD_NAME__speed_cmd[] = "speed_cmd";
static char interbotix_xs_msgs__msg__TurretJoy__FIELD_NAME__speed_toggle_cmd[] = "speed_toggle_cmd";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__msg__TurretJoy__FIELDS[] = {
  {
    {interbotix_xs_msgs__msg__TurretJoy__FIELD_NAME__pan_cmd, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__TurretJoy__FIELD_NAME__tilt_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__TurretJoy__FIELD_NAME__speed_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__TurretJoy__FIELD_NAME__speed_toggle_cmd, 16, 16},
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
interbotix_xs_msgs__msg__TurretJoy__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__msg__TurretJoy__TYPE_NAME, 32, 32},
      {interbotix_xs_msgs__msg__TurretJoy__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used specifically in the interbotix_xsturret_simple_interface package\n"
  "#\n"
  "# Maps raw 'joy' commands to more specific ones to control an Interbotix turret\n"
  "\n"
  "# enum values that define the joystick controls for the robot\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the pan-and-tilt mechanism\n"
  "int8 PAN_CCW = 1\n"
  "int8 PAN_CW = 2\n"
  "int8 TILT_UP = 3\n"
  "int8 TILT_DOWN = 4\n"
  "int8 PAN_TILT_HOME = 5\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Customize configurations for the Interbotix Turret\n"
  "# Inc/Dec Joint speed\n"
  "int8 SPEED_INC = 6\n"
  "int8 SPEED_DEC = 7\n"
  "\n"
  "# Quickly toggle between a fast and slow speed setting\n"
  "int8 SPEED_COARSE = 8\n"
  "int8 SPEED_FINE = 9\n"
  "\n"
  "#########################################################################################################\n"
  "\n"
  "# Control the motion of the pan-and-tilt mechanism\n"
  "int8 pan_cmd\n"
  "int8 tilt_cmd\n"
  "\n"
  "# Speed Configs\n"
  "int8 speed_cmd\n"
  "int8 speed_toggle_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__msg__TurretJoy__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__msg__TurretJoy__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1029, 1029},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__msg__TurretJoy__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__msg__TurretJoy__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
