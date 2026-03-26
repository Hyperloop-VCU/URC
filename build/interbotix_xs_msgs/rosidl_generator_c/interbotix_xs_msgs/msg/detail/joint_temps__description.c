// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:msg/JointTemps.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/msg/detail/joint_temps__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__msg__JointTemps__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x68, 0x4f, 0x5c, 0x19, 0xc4, 0xe8, 0x6e,
      0x0e, 0xf6, 0x45, 0xb2, 0x31, 0xbb, 0x2d, 0x6a,
      0x85, 0x2f, 0x50, 0x84, 0x35, 0x42, 0x87, 0x35,
      0xcf, 0xc6, 0x8e, 0x1d, 0x9c, 0x80, 0x8b, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interbotix_xs_msgs__msg__JointTemps__TYPE_NAME[] = "interbotix_xs_msgs/msg/JointTemps";

// Define type names, field names, and default values
static char interbotix_xs_msgs__msg__JointTemps__FIELD_NAME__names[] = "names";
static char interbotix_xs_msgs__msg__JointTemps__FIELD_NAME__temps[] = "temps";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__msg__JointTemps__FIELDS[] = {
  {
    {interbotix_xs_msgs__msg__JointTemps__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__msg__JointTemps__FIELD_NAME__temps, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__msg__JointTemps__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__msg__JointTemps__TYPE_NAME, 33, 33},
      {interbotix_xs_msgs__msg__JointTemps__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used specifically in the interbotix_xsarm_diagnostic_tool package\n"
  "\n"
  "# Holds the temperatures [C] for the specified joints\n"
  "\n"
  "string[] names\n"
  "int32[] temps";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__msg__JointTemps__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__msg__JointTemps__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 169, 169},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__msg__JointTemps__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__msg__JointTemps__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
