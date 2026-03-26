// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:srv/OperatingModes.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/srv/detail/operating_modes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__OperatingModes__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x00, 0x6b, 0x19, 0x19, 0x36, 0x1b, 0x25, 0x3d,
      0x52, 0x09, 0xff, 0xd7, 0x2a, 0xf5, 0xbc, 0xcd,
      0xe6, 0x30, 0x77, 0x41, 0x4c, 0xd4, 0x86, 0xf5,
      0xbf, 0x6c, 0x5d, 0x0c, 0x7d, 0x4f, 0xcf, 0xcf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__OperatingModes_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x72, 0x36, 0x1c, 0x16, 0x41, 0xd8, 0x9e,
      0xd9, 0xa7, 0xe7, 0x82, 0x31, 0x96, 0xdb, 0x36,
      0xe0, 0x46, 0x44, 0x9f, 0x61, 0x5e, 0x10, 0x28,
      0x17, 0x8b, 0x5a, 0x4b, 0xe3, 0x96, 0x26, 0xde,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__OperatingModes_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0x1f, 0x5d, 0x54, 0x18, 0xf7, 0xbb, 0x2f,
      0xc4, 0x50, 0x36, 0x81, 0xb0, 0xb9, 0x97, 0xf9,
      0x08, 0xc2, 0x5f, 0x50, 0xda, 0xd3, 0xab, 0xf4,
      0xc1, 0xc5, 0x99, 0xf0, 0x75, 0xd4, 0xdc, 0x05,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__OperatingModes_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x0c, 0x5b, 0xf6, 0x1f, 0xcb, 0x67, 0xc2,
      0x17, 0x4c, 0xf1, 0xa4, 0x20, 0x9a, 0x23, 0x82,
      0xd4, 0x30, 0xf7, 0xf3, 0x4c, 0x60, 0x6e, 0xeb,
      0x85, 0x70, 0xe2, 0x9e, 0x8d, 0xf9, 0xf8, 0x64,
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

static char interbotix_xs_msgs__srv__OperatingModes__TYPE_NAME[] = "interbotix_xs_msgs/srv/OperatingModes";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interbotix_xs_msgs__srv__OperatingModes_Event__TYPE_NAME[] = "interbotix_xs_msgs/srv/OperatingModes_Event";
static char interbotix_xs_msgs__srv__OperatingModes_Request__TYPE_NAME[] = "interbotix_xs_msgs/srv/OperatingModes_Request";
static char interbotix_xs_msgs__srv__OperatingModes_Response__TYPE_NAME[] = "interbotix_xs_msgs/srv/OperatingModes_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__OperatingModes__FIELD_NAME__request_message[] = "request_message";
static char interbotix_xs_msgs__srv__OperatingModes__FIELD_NAME__response_message[] = "response_message";
static char interbotix_xs_msgs__srv__OperatingModes__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__OperatingModes__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__OperatingModes__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__OperatingModes_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__OperatingModes_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__OperatingModes_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interbotix_xs_msgs__srv__OperatingModes__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__OperatingModes__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__OperatingModes__TYPE_NAME, 37, 37},
      {interbotix_xs_msgs__srv__OperatingModes__FIELDS, 3, 3},
    },
    {interbotix_xs_msgs__srv__OperatingModes__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interbotix_xs_msgs__srv__OperatingModes_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interbotix_xs_msgs__srv__OperatingModes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interbotix_xs_msgs__srv__OperatingModes_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__cmd_type[] = "cmd_type";
static char interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__name[] = "name";
static char interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__mode[] = "mode";
static char interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__profile_type[] = "profile_type";
static char interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__profile_velocity[] = "profile_velocity";
static char interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__profile_acceleration[] = "profile_acceleration";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__OperatingModes_Request__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__cmd_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__profile_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__profile_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Request__FIELD_NAME__profile_acceleration, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__OperatingModes_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__OperatingModes_Request__TYPE_NAME, 45, 45},
      {interbotix_xs_msgs__srv__OperatingModes_Request__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__OperatingModes_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__OperatingModes_Response__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__OperatingModes_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__OperatingModes_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__OperatingModes_Response__TYPE_NAME, 46, 46},
      {interbotix_xs_msgs__srv__OperatingModes_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__OperatingModes_Event__FIELD_NAME__info[] = "info";
static char interbotix_xs_msgs__srv__OperatingModes_Event__FIELD_NAME__request[] = "request";
static char interbotix_xs_msgs__srv__OperatingModes_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__OperatingModes_Event__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__OperatingModes_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interbotix_xs_msgs__srv__OperatingModes_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interbotix_xs_msgs__srv__OperatingModes_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interbotix_xs_msgs__srv__OperatingModes_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__OperatingModes_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__OperatingModes_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__OperatingModes_Event__TYPE_NAME, 43, 43},
      {interbotix_xs_msgs__srv__OperatingModes_Event__FIELDS, 3, 3},
    },
    {interbotix_xs_msgs__srv__OperatingModes_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interbotix_xs_msgs__srv__OperatingModes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interbotix_xs_msgs__srv__OperatingModes_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Set Operating Modes\n"
  "#\n"
  "# To get familiar with the various operating modes, go to...\n"
  "# http://emanual.robotis.com/docs/en/software/dynamixel/dynamixel_workbench/\n"
  "# ...click on a motor model, and scroll down to the 'Operating Mode' section.\n"
  "#\n"
  "# There are 6 valid operating modes. They are...\n"
  "#   \"position\" - allows up to 1 complete joint revolution (perfect for arm joints); units are in radians\n"
  "#   \"ext_position\" - allows up to 512 joint revolutions; units are in radians\n"
  "#   \"velocity\" - allows infinite number of rotations (perfect for wheeled robots); units are in rad/s\n"
  "#   \"current\" - allows infinite number of rotations (perfect for grippers); units are in milliamps\n"
  "#   \"current_based_position\" - allows up to 512 joint revolutions; units are in radians\n"
  "#   \"pwm\" - allows infinite number of rotations (perfect for grippers); units are in PWM\n"
  "#\n"
  "# Note that the interbotix_xs_sdk offers one other \\'pseudo\\' operating mode that can be useful in controlling Interbotix Grippers - called \"linear_position\".\n"
  "# Behind the scenes, it uses the \"position\" operating mode mentioned above. The main difference is that with this mode, a desired linear distance [m]\n"
  "# between the two gripper fingers can be commanded. In the \"position\" mode though, only the angular position of the motor can be commanded.\n"
  "#\n"
  "# There are 2 valid profile types - either 'time' or 'velocity'. Depending on which is chosen, the following parameters behave differently.\n"
  "#\n"
  "# 1) profile_velocity: acts as a pass-through to the Profile_Velocity register and operates in one of two ways. If\n"
  "#    'profile_type' is set to 'velocity', this parameter describes the max velocity limit for the specified joint(s);\n"
  "#    for example, if doing 'position' control, setting this to '131' would be equivalent to a limit of 3.14 rad/s; if\n"
  "#    'profile_type' is set to 'time', this parameter sets the time span (in milliseconds) that it should take for the\n"
  "#    specified joint(s) to move; to have an 'infinite' max limit, set to '0'.\n"
  "#\n"
  "# 2) profile_acceleration: acts as a pass-through to the Profile_Acceleration register and operates in one of two ways. If\n"
  "#    'profile_type' is set to 'velocity', this parameter describes the max acceleration limit for the specified joint(s);\n"
  "#    for example, if doing 'position' or 'velocity' control, setting this to '15' would be equivalent to a limit of 5.6 rad/s^2;\n"
  "#    if 'profile_type' is set to 'time', this parameter sets the time span (in milliseconds) that it should take for the\n"
  "#    specified joint(s) to accelerate; to have an 'infinite' max limit, set to '0'.\n"
  "\n"
  "string cmd_type                     # set to 'group' if commanding a joint group or 'single' if commanding a single joint\n"
  "string name                         # name of the group if commanding a joint group or joint if commanding a single joint\n"
  "string mode                         # desired operating mode as described above\n"
  "string profile_type                 # desired 'profile' type - either 'time' or 'velocity' as described above\n"
  "int32 profile_velocity              # desired velocity profile as explained above - only used in 'position' or the 'ext_position' control modes\n"
  "int32 profile_acceleration          # desired acceleration profile as explained above - used in all modes except for 'current' and 'pwm' control\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__OperatingModes__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__OperatingModes__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 3301, 3301},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__OperatingModes_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__OperatingModes_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__OperatingModes_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__OperatingModes_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__OperatingModes_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__OperatingModes_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__OperatingModes__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__OperatingModes__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interbotix_xs_msgs__srv__OperatingModes_Event__get_individual_type_description_source(NULL);
    sources[3] = *interbotix_xs_msgs__srv__OperatingModes_Request__get_individual_type_description_source(NULL);
    sources[4] = *interbotix_xs_msgs__srv__OperatingModes_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__OperatingModes_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__OperatingModes_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__OperatingModes_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__OperatingModes_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__OperatingModes_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__OperatingModes_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interbotix_xs_msgs__srv__OperatingModes_Request__get_individual_type_description_source(NULL);
    sources[3] = *interbotix_xs_msgs__srv__OperatingModes_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
