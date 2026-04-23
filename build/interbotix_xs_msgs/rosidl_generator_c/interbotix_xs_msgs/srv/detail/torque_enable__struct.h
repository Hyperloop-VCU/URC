// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_xs_msgs:srv/TorqueEnable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interbotix_xs_msgs/srv/torque_enable.h"


#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__STRUCT_H_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd_type'
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TorqueEnable in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__TorqueEnable_Request
{
  /// set to 'group' if commanding a joint group or 'single' if commanding a single joint
  rosidl_runtime_c__String cmd_type;
  /// name of the group if commanding a joint group or joint if commanding a single joint
  rosidl_runtime_c__String name;
  /// set to 'true' to torque on or 'false' to torque off
  bool enable;
} interbotix_xs_msgs__srv__TorqueEnable_Request;

// Struct for a sequence of interbotix_xs_msgs__srv__TorqueEnable_Request.
typedef struct interbotix_xs_msgs__srv__TorqueEnable_Request__Sequence
{
  interbotix_xs_msgs__srv__TorqueEnable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__TorqueEnable_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TorqueEnable in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__TorqueEnable_Response
{
  uint8_t structure_needs_at_least_one_member;
} interbotix_xs_msgs__srv__TorqueEnable_Response;

// Struct for a sequence of interbotix_xs_msgs__srv__TorqueEnable_Response.
typedef struct interbotix_xs_msgs__srv__TorqueEnable_Response__Sequence
{
  interbotix_xs_msgs__srv__TorqueEnable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__TorqueEnable_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interbotix_xs_msgs__srv__TorqueEnable_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interbotix_xs_msgs__srv__TorqueEnable_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TorqueEnable in the package interbotix_xs_msgs.
typedef struct interbotix_xs_msgs__srv__TorqueEnable_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interbotix_xs_msgs__srv__TorqueEnable_Request__Sequence request;
  interbotix_xs_msgs__srv__TorqueEnable_Response__Sequence response;
} interbotix_xs_msgs__srv__TorqueEnable_Event;

// Struct for a sequence of interbotix_xs_msgs__srv__TorqueEnable_Event.
typedef struct interbotix_xs_msgs__srv__TorqueEnable_Event__Sequence
{
  interbotix_xs_msgs__srv__TorqueEnable_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_xs_msgs__srv__TorqueEnable_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__STRUCT_H_
