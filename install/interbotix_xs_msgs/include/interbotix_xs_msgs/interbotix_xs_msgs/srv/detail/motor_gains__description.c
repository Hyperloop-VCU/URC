// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__MotorGains__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x94, 0x4f, 0xd6, 0x98, 0x6b, 0x38, 0x6a,
      0x85, 0x24, 0x64, 0xb6, 0x8f, 0x10, 0xb8, 0x91,
      0xbd, 0xb1, 0x3a, 0x60, 0xd6, 0x04, 0x88, 0xe7,
      0xa1, 0xee, 0x53, 0xb7, 0xba, 0xe4, 0x6d, 0x04,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__MotorGains_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x14, 0x3f, 0xec, 0x0c, 0xc5, 0xd5, 0x50,
      0xd7, 0x8e, 0x3c, 0x62, 0xe6, 0xe8, 0x26, 0x6d,
      0x23, 0x98, 0x2e, 0xaf, 0x42, 0x97, 0x29, 0xf6,
      0x61, 0x24, 0xbd, 0x48, 0xf6, 0x3f, 0xf3, 0x90,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__MotorGains_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0x3a, 0x1a, 0x09, 0x15, 0x63, 0x45, 0xe9,
      0x2b, 0xc7, 0x23, 0xaf, 0xd4, 0x86, 0xd0, 0xba,
      0xf5, 0xa0, 0x7e, 0x4a, 0x0c, 0xcd, 0xc7, 0x1e,
      0x19, 0x04, 0x1e, 0xdc, 0xbb, 0x1e, 0x96, 0x39,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__MotorGains_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0xcd, 0x52, 0x3c, 0xe0, 0x6c, 0xdb, 0x0e,
      0x78, 0x41, 0x8e, 0x84, 0xcf, 0x13, 0x81, 0xaa,
      0xe1, 0xb5, 0xd9, 0xca, 0x26, 0xee, 0x0d, 0x7c,
      0x1d, 0xfd, 0x42, 0x32, 0x0e, 0xab, 0x54, 0xb2,
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

static char interbotix_xs_msgs__srv__MotorGains__TYPE_NAME[] = "interbotix_xs_msgs/srv/MotorGains";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interbotix_xs_msgs__srv__MotorGains_Event__TYPE_NAME[] = "interbotix_xs_msgs/srv/MotorGains_Event";
static char interbotix_xs_msgs__srv__MotorGains_Request__TYPE_NAME[] = "interbotix_xs_msgs/srv/MotorGains_Request";
static char interbotix_xs_msgs__srv__MotorGains_Response__TYPE_NAME[] = "interbotix_xs_msgs/srv/MotorGains_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__MotorGains__FIELD_NAME__request_message[] = "request_message";
static char interbotix_xs_msgs__srv__MotorGains__FIELD_NAME__response_message[] = "response_message";
static char interbotix_xs_msgs__srv__MotorGains__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__MotorGains__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__MotorGains__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__MotorGains_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__MotorGains_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__MotorGains_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interbotix_xs_msgs__srv__MotorGains__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__MotorGains__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__MotorGains__TYPE_NAME, 33, 33},
      {interbotix_xs_msgs__srv__MotorGains__FIELDS, 3, 3},
    },
    {interbotix_xs_msgs__srv__MotorGains__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interbotix_xs_msgs__srv__MotorGains_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interbotix_xs_msgs__srv__MotorGains_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interbotix_xs_msgs__srv__MotorGains_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__cmd_type[] = "cmd_type";
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__name[] = "name";
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__kp_pos[] = "kp_pos";
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__ki_pos[] = "ki_pos";
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__kd_pos[] = "kd_pos";
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__k1[] = "k1";
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__k2[] = "k2";
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__kp_vel[] = "kp_vel";
static char interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__ki_vel[] = "ki_vel";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__MotorGains_Request__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__cmd_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__kp_pos, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__ki_pos, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__kd_pos, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__k1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__k2, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__kp_vel, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__FIELD_NAME__ki_vel, 6, 6},
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
interbotix_xs_msgs__srv__MotorGains_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__MotorGains_Request__TYPE_NAME, 41, 41},
      {interbotix_xs_msgs__srv__MotorGains_Request__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__MotorGains_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__MotorGains_Response__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__MotorGains_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
interbotix_xs_msgs__srv__MotorGains_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__MotorGains_Response__TYPE_NAME, 42, 42},
      {interbotix_xs_msgs__srv__MotorGains_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__MotorGains_Event__FIELD_NAME__info[] = "info";
static char interbotix_xs_msgs__srv__MotorGains_Event__FIELD_NAME__request[] = "request";
static char interbotix_xs_msgs__srv__MotorGains_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__MotorGains_Event__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__MotorGains_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interbotix_xs_msgs__srv__MotorGains_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interbotix_xs_msgs__srv__MotorGains_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interbotix_xs_msgs__srv__MotorGains_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__MotorGains_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__MotorGains_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__MotorGains_Event__TYPE_NAME, 39, 39},
      {interbotix_xs_msgs__srv__MotorGains_Event__FIELDS, 3, 3},
    },
    {interbotix_xs_msgs__srv__MotorGains_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interbotix_xs_msgs__srv__MotorGains_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interbotix_xs_msgs__srv__MotorGains_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Set PID gains\n"
  "#\n"
  "# To get familiar with the various PID gains, go to...\n"
  "# http://emanual.robotis.com/docs/en/software/dynamixel/dynamixel_workbench/\n"
  "# ...click on a motor model, and scroll down to the 'PID' section.\n"
  "\n"
  "string cmd_type          # set to 'group' if commanding a joint group or 'single' if commanding a single joint\n"
  "string name              # name of the group if commanding a joint group or joint if commanding a single joint\n"
  "int32 kp_pos             # acts as a pass-through to the Position_P_Gain register\n"
  "int32 ki_pos             # acts as a pass-through to the Position_I_Gain register\n"
  "int32 kd_pos             # acts as a pass-through to the Position_D_Gain register\n"
  "int32 k1                 # acts as a pass-through to the Feedforward_1st_Gain register\n"
  "int32 k2                 # acts as a pass-through to the Feedforward_2nd_Gain register\n"
  "int32 kp_vel             # acts as a pass-through to the Velocity_P_Gain register\n"
  "int32 ki_vel             # acts as a pass-through to the Velocity_I_Gain register\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__MotorGains__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__MotorGains__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1028, 1028},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__MotorGains_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__MotorGains_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__MotorGains_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__MotorGains_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__MotorGains_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__MotorGains_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__MotorGains__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__MotorGains__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interbotix_xs_msgs__srv__MotorGains_Event__get_individual_type_description_source(NULL);
    sources[3] = *interbotix_xs_msgs__srv__MotorGains_Request__get_individual_type_description_source(NULL);
    sources[4] = *interbotix_xs_msgs__srv__MotorGains_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__MotorGains_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__MotorGains_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__MotorGains_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__MotorGains_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__MotorGains_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__MotorGains_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interbotix_xs_msgs__srv__MotorGains_Request__get_individual_type_description_source(NULL);
    sources[3] = *interbotix_xs_msgs__srv__MotorGains_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
