// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/srv/detail/robot_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__RobotInfo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0xc9, 0xc5, 0x4c, 0xdd, 0x40, 0x45, 0xe9,
      0x06, 0xae, 0x53, 0xd4, 0xac, 0x3c, 0x6c, 0x08,
      0x66, 0x88, 0xda, 0x1c, 0x03, 0xb8, 0x93, 0x09,
      0xc3, 0x90, 0xd6, 0x8a, 0x49, 0x59, 0x29, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__RobotInfo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0x44, 0xaa, 0xd7, 0x6d, 0x71, 0x56, 0x56,
      0x4c, 0xab, 0x3e, 0x06, 0x66, 0xa7, 0xa4, 0x9c,
      0x2a, 0x74, 0xba, 0x74, 0x92, 0x4b, 0x99, 0xa0,
      0x47, 0xb7, 0x10, 0x7d, 0x5d, 0x12, 0xcf, 0xf4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__RobotInfo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x0a, 0x3d, 0xef, 0xae, 0xa4, 0xf0, 0x47,
      0xe3, 0xa9, 0xbb, 0x2f, 0x06, 0x8d, 0xa0, 0xfc,
      0xe8, 0x58, 0xba, 0xa4, 0x06, 0x23, 0x5a, 0x16,
      0x80, 0x3a, 0x92, 0x87, 0x5e, 0xe7, 0x48, 0xe0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__RobotInfo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0xd7, 0xc8, 0xcb, 0xd4, 0x3f, 0xae, 0x06,
      0x40, 0x9b, 0x37, 0x24, 0xa5, 0xa1, 0xef, 0x44,
      0xc3, 0x52, 0xab, 0xc9, 0x2f, 0x21, 0x68, 0x1e,
      0xdd, 0x1b, 0x30, 0x6a, 0x37, 0x63, 0xb8, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char interbotix_xs_msgs__srv__RobotInfo__TYPE_NAME[] = "interbotix_xs_msgs/srv/RobotInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interbotix_xs_msgs__srv__RobotInfo_Event__TYPE_NAME[] = "interbotix_xs_msgs/srv/RobotInfo_Event";
static char interbotix_xs_msgs__srv__RobotInfo_Request__TYPE_NAME[] = "interbotix_xs_msgs/srv/RobotInfo_Request";
static char interbotix_xs_msgs__srv__RobotInfo_Response__TYPE_NAME[] = "interbotix_xs_msgs/srv/RobotInfo_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__RobotInfo__FIELD_NAME__request_message[] = "request_message";
static char interbotix_xs_msgs__srv__RobotInfo__FIELD_NAME__response_message[] = "response_message";
static char interbotix_xs_msgs__srv__RobotInfo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__RobotInfo__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__RobotInfo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__RobotInfo_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__RobotInfo_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__RobotInfo_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interbotix_xs_msgs__srv__RobotInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__RobotInfo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__RobotInfo__TYPE_NAME, 32, 32},
      {interbotix_xs_msgs__srv__RobotInfo__FIELDS, 3, 3},
    },
    {interbotix_xs_msgs__srv__RobotInfo__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interbotix_xs_msgs__srv__RobotInfo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interbotix_xs_msgs__srv__RobotInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interbotix_xs_msgs__srv__RobotInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__RobotInfo_Request__FIELD_NAME__cmd_type[] = "cmd_type";
static char interbotix_xs_msgs__srv__RobotInfo_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__RobotInfo_Request__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__RobotInfo_Request__FIELD_NAME__cmd_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__RobotInfo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__RobotInfo_Request__TYPE_NAME, 40, 40},
      {interbotix_xs_msgs__srv__RobotInfo_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__mode[] = "mode";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__profile_type[] = "profile_type";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_names[] = "joint_names";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_ids[] = "joint_ids";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_lower_limits[] = "joint_lower_limits";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_upper_limits[] = "joint_upper_limits";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_velocity_limits[] = "joint_velocity_limits";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_sleep_positions[] = "joint_sleep_positions";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_state_indices[] = "joint_state_indices";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__num_joints[] = "num_joints";
static char interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__RobotInfo_Response__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__profile_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_ids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_lower_limits, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_upper_limits, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_velocity_limits, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_sleep_positions, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__joint_state_indices, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__num_joints, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__RobotInfo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__RobotInfo_Response__TYPE_NAME, 41, 41},
      {interbotix_xs_msgs__srv__RobotInfo_Response__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__RobotInfo_Event__FIELD_NAME__info[] = "info";
static char interbotix_xs_msgs__srv__RobotInfo_Event__FIELD_NAME__request[] = "request";
static char interbotix_xs_msgs__srv__RobotInfo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__RobotInfo_Event__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__RobotInfo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interbotix_xs_msgs__srv__RobotInfo_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interbotix_xs_msgs__srv__RobotInfo_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interbotix_xs_msgs__srv__RobotInfo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__RobotInfo_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__RobotInfo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__RobotInfo_Event__TYPE_NAME, 38, 38},
      {interbotix_xs_msgs__srv__RobotInfo_Event__FIELDS, 3, 3},
    },
    {interbotix_xs_msgs__srv__RobotInfo_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interbotix_xs_msgs__srv__RobotInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interbotix_xs_msgs__srv__RobotInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get robot information\n"
  "#\n"
  "# Note that if a 'gripper' joint is specified, all information will be specified in terms of the 'left_finger' joint\n"
  "\n"
  "string cmd_type                          # set to 'group' if requesting info about a joint group or 'single' if requesting info about a single joint\n"
  "string name                              # the group name if requesting info about a group or the joint name if requesting info about a single joint\n"
  "---\n"
  "string mode                              # the operating mode for the specified joint group or joint\n"
  "string profile_type                      # the profile type for the specified joint group or joint\n"
  "string[] joint_names                     # the name of each joint in a group or just the specified joint\n"
  "int16[] joint_ids                        # the Dynamixel ID for each joint in a group or for the specified joint\n"
  "float32[] joint_lower_limits             # the lower limit [radians] for each joint in a group or for the specified joint (taken from URDF)\n"
  "float32[] joint_upper_limits             # the upper limit [radians] for each joint in a group or for the specified joint (taken from URDF)\n"
  "float32[] joint_velocity_limits          # the velocity limit [rad/s] for each joint in a group or for the specified joint (taken from URDF)\n"
  "float32[] joint_sleep_positions          # the sleep position [rad] for each joint in a group or for the specified joint\n"
  "int16[] joint_state_indices              # index for each joint in a group or for the specified joint in the published JointState message\n"
  "int16 num_joints                         # the number of joints in a group or 1\n"
  "string[] name                            # the name of the group or joint requested; if group was 'all', returns the names of all groups";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__RobotInfo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__RobotInfo__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1761, 1761},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__RobotInfo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__RobotInfo_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__RobotInfo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__RobotInfo_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__RobotInfo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__RobotInfo_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__RobotInfo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__RobotInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interbotix_xs_msgs__srv__RobotInfo_Event__get_individual_type_description_source(NULL);
    sources[3] = *interbotix_xs_msgs__srv__RobotInfo_Request__get_individual_type_description_source(NULL);
    sources[4] = *interbotix_xs_msgs__srv__RobotInfo_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__RobotInfo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__RobotInfo_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__RobotInfo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__RobotInfo_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__RobotInfo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__RobotInfo_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interbotix_xs_msgs__srv__RobotInfo_Request__get_individual_type_description_source(NULL);
    sources[3] = *interbotix_xs_msgs__srv__RobotInfo_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
