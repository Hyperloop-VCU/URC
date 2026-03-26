// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interbotix_xs_msgs:srv/TorqueEnable.idl
// generated code does not contain a copyright notice

#include "interbotix_xs_msgs/srv/detail/torque_enable__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__TorqueEnable__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0xf7, 0x71, 0xba, 0x05, 0x3e, 0xca, 0xff,
      0xfa, 0xb1, 0xf6, 0x63, 0xf6, 0x8a, 0xd5, 0x54,
      0xf7, 0xda, 0xf8, 0x6d, 0x83, 0xce, 0x2a, 0x5c,
      0x51, 0x2a, 0x89, 0x05, 0x35, 0x6a, 0x67, 0x8b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__TorqueEnable_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0x8c, 0xf3, 0x2a, 0x30, 0x86, 0x6c, 0x77,
      0x21, 0x89, 0xc4, 0x68, 0xd2, 0x07, 0xfd, 0x29,
      0x49, 0xc9, 0x73, 0x8e, 0xf0, 0x24, 0x29, 0x78,
      0xd3, 0x12, 0xfe, 0x30, 0x20, 0xab, 0x46, 0x45,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__TorqueEnable_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0x4b, 0x6a, 0x58, 0x0d, 0x3a, 0xe7, 0xcf,
      0xe1, 0x19, 0x59, 0x63, 0x71, 0x11, 0xe3, 0xb2,
      0x5e, 0x77, 0x0f, 0x9d, 0x2c, 0x4e, 0x1f, 0x02,
      0xeb, 0x88, 0x6b, 0x6e, 0x6f, 0xb6, 0x97, 0x91,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interbotix_xs_msgs
const rosidl_type_hash_t *
interbotix_xs_msgs__srv__TorqueEnable_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0xc3, 0xd2, 0xd2, 0xdb, 0x73, 0x2c, 0x55,
      0x3d, 0x23, 0x47, 0x5d, 0x62, 0x30, 0x11, 0x5d,
      0x18, 0x9f, 0xa9, 0xba, 0x6b, 0xf9, 0xf0, 0x05,
      0x66, 0x53, 0x54, 0xf7, 0x78, 0x6f, 0x42, 0x92,
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

static char interbotix_xs_msgs__srv__TorqueEnable__TYPE_NAME[] = "interbotix_xs_msgs/srv/TorqueEnable";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interbotix_xs_msgs__srv__TorqueEnable_Event__TYPE_NAME[] = "interbotix_xs_msgs/srv/TorqueEnable_Event";
static char interbotix_xs_msgs__srv__TorqueEnable_Request__TYPE_NAME[] = "interbotix_xs_msgs/srv/TorqueEnable_Request";
static char interbotix_xs_msgs__srv__TorqueEnable_Response__TYPE_NAME[] = "interbotix_xs_msgs/srv/TorqueEnable_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__TorqueEnable__FIELD_NAME__request_message[] = "request_message";
static char interbotix_xs_msgs__srv__TorqueEnable__FIELD_NAME__response_message[] = "response_message";
static char interbotix_xs_msgs__srv__TorqueEnable__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__TorqueEnable__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__TorqueEnable__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__TorqueEnable_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__TorqueEnable_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interbotix_xs_msgs__srv__TorqueEnable_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interbotix_xs_msgs__srv__TorqueEnable__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__TorqueEnable__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__TorqueEnable__TYPE_NAME, 35, 35},
      {interbotix_xs_msgs__srv__TorqueEnable__FIELDS, 3, 3},
    },
    {interbotix_xs_msgs__srv__TorqueEnable__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interbotix_xs_msgs__srv__TorqueEnable_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interbotix_xs_msgs__srv__TorqueEnable_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interbotix_xs_msgs__srv__TorqueEnable_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__TorqueEnable_Request__FIELD_NAME__cmd_type[] = "cmd_type";
static char interbotix_xs_msgs__srv__TorqueEnable_Request__FIELD_NAME__name[] = "name";
static char interbotix_xs_msgs__srv__TorqueEnable_Request__FIELD_NAME__enable[] = "enable";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__TorqueEnable_Request__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Request__FIELD_NAME__cmd_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Request__FIELD_NAME__enable, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__TorqueEnable_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__TorqueEnable_Request__TYPE_NAME, 43, 43},
      {interbotix_xs_msgs__srv__TorqueEnable_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__TorqueEnable_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__TorqueEnable_Response__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
interbotix_xs_msgs__srv__TorqueEnable_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__TorqueEnable_Response__TYPE_NAME, 44, 44},
      {interbotix_xs_msgs__srv__TorqueEnable_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interbotix_xs_msgs__srv__TorqueEnable_Event__FIELD_NAME__info[] = "info";
static char interbotix_xs_msgs__srv__TorqueEnable_Event__FIELD_NAME__request[] = "request";
static char interbotix_xs_msgs__srv__TorqueEnable_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interbotix_xs_msgs__srv__TorqueEnable_Event__FIELDS[] = {
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interbotix_xs_msgs__srv__TorqueEnable_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interbotix_xs_msgs__srv__TorqueEnable_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interbotix_xs_msgs__srv__TorqueEnable_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {interbotix_xs_msgs__srv__TorqueEnable_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interbotix_xs_msgs__srv__TorqueEnable_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interbotix_xs_msgs__srv__TorqueEnable_Event__TYPE_NAME, 41, 41},
      {interbotix_xs_msgs__srv__TorqueEnable_Event__FIELDS, 3, 3},
    },
    {interbotix_xs_msgs__srv__TorqueEnable_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interbotix_xs_msgs__srv__TorqueEnable_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interbotix_xs_msgs__srv__TorqueEnable_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Torque joints on/off\n"
  "\n"
  "string cmd_type          # set to 'group' if commanding a joint group or 'single' if commanding a single joint\n"
  "string name              # name of the group if commanding a joint group or joint if commanding a single joint\n"
  "bool enable              # set to 'true' to torque on or 'false' to torque off\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__TorqueEnable__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__TorqueEnable__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 329, 329},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__TorqueEnable_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__TorqueEnable_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__TorqueEnable_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__TorqueEnable_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interbotix_xs_msgs__srv__TorqueEnable_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interbotix_xs_msgs__srv__TorqueEnable_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__TorqueEnable__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__TorqueEnable__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interbotix_xs_msgs__srv__TorqueEnable_Event__get_individual_type_description_source(NULL);
    sources[3] = *interbotix_xs_msgs__srv__TorqueEnable_Request__get_individual_type_description_source(NULL);
    sources[4] = *interbotix_xs_msgs__srv__TorqueEnable_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__TorqueEnable_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__TorqueEnable_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__TorqueEnable_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__TorqueEnable_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interbotix_xs_msgs__srv__TorqueEnable_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interbotix_xs_msgs__srv__TorqueEnable_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interbotix_xs_msgs__srv__TorqueEnable_Request__get_individual_type_description_source(NULL);
    sources[3] = *interbotix_xs_msgs__srv__TorqueEnable_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
