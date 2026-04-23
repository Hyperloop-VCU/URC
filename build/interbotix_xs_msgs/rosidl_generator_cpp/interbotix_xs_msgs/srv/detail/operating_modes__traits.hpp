// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:srv/OperatingModes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interbotix_xs_msgs/srv/operating_modes.hpp"


#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interbotix_xs_msgs/srv/detail/operating_modes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interbotix_xs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const OperatingModes_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_type
  {
    out << "cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_type, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: profile_type
  {
    out << "profile_type: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_type, out);
    out << ", ";
  }

  // member: profile_velocity
  {
    out << "profile_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_velocity, out);
    out << ", ";
  }

  // member: profile_acceleration
  {
    out << "profile_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OperatingModes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_type, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: profile_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile_type: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_type, out);
    out << "\n";
  }

  // member: profile_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_velocity, out);
    out << "\n";
  }

  // member: profile_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OperatingModes_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use interbotix_xs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interbotix_xs_msgs::srv::OperatingModes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interbotix_xs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interbotix_xs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const interbotix_xs_msgs::srv::OperatingModes_Request & msg)
{
  return interbotix_xs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::OperatingModes_Request>()
{
  return "interbotix_xs_msgs::srv::OperatingModes_Request";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::OperatingModes_Request>()
{
  return "interbotix_xs_msgs/srv/OperatingModes_Request";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_xs_msgs::srv::OperatingModes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interbotix_xs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const OperatingModes_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OperatingModes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OperatingModes_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use interbotix_xs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interbotix_xs_msgs::srv::OperatingModes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interbotix_xs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interbotix_xs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const interbotix_xs_msgs::srv::OperatingModes_Response & msg)
{
  return interbotix_xs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::OperatingModes_Response>()
{
  return "interbotix_xs_msgs::srv::OperatingModes_Response";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::OperatingModes_Response>()
{
  return "interbotix_xs_msgs/srv/OperatingModes_Response";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_xs_msgs::srv::OperatingModes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace interbotix_xs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const OperatingModes_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OperatingModes_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OperatingModes_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use interbotix_xs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interbotix_xs_msgs::srv::OperatingModes_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  interbotix_xs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interbotix_xs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const interbotix_xs_msgs::srv::OperatingModes_Event & msg)
{
  return interbotix_xs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::OperatingModes_Event>()
{
  return "interbotix_xs_msgs::srv::OperatingModes_Event";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::OperatingModes_Event>()
{
  return "interbotix_xs_msgs/srv/OperatingModes_Event";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Event>
  : std::integral_constant<bool, has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Request>::value && has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<interbotix_xs_msgs::srv::OperatingModes_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interbotix_xs_msgs::srv::OperatingModes>()
{
  return "interbotix_xs_msgs::srv::OperatingModes";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::OperatingModes>()
{
  return "interbotix_xs_msgs/srv/OperatingModes";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::OperatingModes>
  : std::integral_constant<
    bool,
    has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Request>::value &&
    has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Response>::value
  >
{
};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::OperatingModes>
  : std::integral_constant<
    bool,
    has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Request>::value &&
    has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Response>::value
  >
{
};

template<>
struct is_service<interbotix_xs_msgs::srv::OperatingModes>
  : std::true_type
{
};

template<>
struct is_service_request<interbotix_xs_msgs::srv::OperatingModes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interbotix_xs_msgs::srv::OperatingModes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__TRAITS_HPP_
