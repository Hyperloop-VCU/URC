// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:msg/JointGroupCommand.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/msg/detail/joint_group_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__msg__JointGroupCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0x38, 0x21, 0xd8, 0x9b, 0xd4, 0x39, 0xee,
      0xca, 0x1d, 0xb1, 0xf2, 0xb4, 0x87, 0x78, 0x27,
      0x7e, 0x46, 0x5b, 0xde, 0x9d, 0xaa, 0xd1, 0xb0,
      0x83, 0x90, 0x77, 0xbc, 0xfb, 0xdb, 0x3e, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interbotix_xs_msgs__msg__JointGroupCommand__TYPE_NAME[] = "interbotix_xs_msgs/msg/JointGroupCommand";

// Define type names, field names, and default values
static char interbotix_xs_msgs__msg__JointGroupCommand__FIELD_NAME__name[] = "name";
static char interbotix_xs_msgs__msg__JointGroupCommand__FIELD_NAME__cmd[] = "cmd";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__msg__JointGroupCommand__FIELDS[] = {
  {
    {interbotix_xs_msgs__msg__JointGroupCommand__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__JointGroupCommand__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__msg__JointGroupCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__msg__JointGroupCommand__TYPE_NAME, 40, 40},
      {interbotix_xs_msgs__msg__JointGroupCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Command the joints in the specified joint group. Note that the commands are processed differently based on the group's operating mode.\n"
  "# For example, if a group's operating mode is set to 'position', the commands are interpreted as positions in radians\n"
  "\n"
  "string name            # Name of joint group\n"
  "float32[] cmd          # List of joint commands; order is dictated by the index of each joint name for the given group in the 'groups' section of a 'motor_config' yaml file";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__msg__JointGroupCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__msg__JointGroupCommand__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 474, 474},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__msg__JointGroupCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__msg__JointGroupCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
