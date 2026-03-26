// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:msg/JointSingleCommand.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/msg/detail/joint_single_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__msg__JointSingleCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x95, 0x75, 0xe2, 0x25, 0x84, 0xaa, 0x1f,
      0x25, 0xc9, 0xe1, 0x3a, 0x54, 0x66, 0x41, 0xd3,
      0x80, 0x66, 0xca, 0xa3, 0x74, 0x54, 0xce, 0xd8,
      0x10, 0xf1, 0x65, 0xd6, 0x6d, 0x84, 0x2e, 0x4d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interbotix_xs_msgs__msg__JointSingleCommand__TYPE_NAME[] = "interbotix_xs_msgs/msg/JointSingleCommand";

// Define type names, field names, and default values
static char interbotix_xs_msgs__msg__JointSingleCommand__FIELD_NAME__name[] = "name";
static char interbotix_xs_msgs__msg__JointSingleCommand__FIELD_NAME__cmd[] = "cmd";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__msg__JointSingleCommand__FIELDS[] = {
  {
    {interbotix_xs_msgs__msg__JointSingleCommand__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__JointSingleCommand__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__msg__JointSingleCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__msg__JointSingleCommand__TYPE_NAME, 41, 41},
      {interbotix_xs_msgs__msg__JointSingleCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Command a desired joint. Note that the command is processed differently based on the joint's operating mode.\n"
  "# For example, if a joint's operating mode is set to 'position', the command is interpreted as a position in radians\n"
  "\n"
  "string name          # Name of joint\n"
  "float32 cmd          # Joint command";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__msg__JointSingleCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__msg__JointSingleCommand__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 303, 303},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__msg__JointSingleCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__msg__JointSingleCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
