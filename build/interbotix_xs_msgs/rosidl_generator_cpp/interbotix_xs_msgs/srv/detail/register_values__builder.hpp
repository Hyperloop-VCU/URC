// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:srv/RegisterValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interbotix_xs_msgs/srv/register_values.hpp"


#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__REGISTER_VALUES__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__REGISTER_VALUES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interbotix_xs_msgs/srv/detail/register_values__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterValues_Request_value
{
public:
  explicit Init_RegisterValues_Request_value(::interbotix_xs_msgs::srv::RegisterValues_Request & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::RegisterValues_Request value(::interbotix_xs_msgs::srv::RegisterValues_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RegisterValues_Request msg_;
};

class Init_RegisterValues_Request_reg
{
public:
  explicit Init_RegisterValues_Request_reg(::interbotix_xs_msgs::srv::RegisterValues_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterValues_Request_value reg(::interbotix_xs_msgs::srv::RegisterValues_Request::_reg_type arg)
  {
    msg_.reg = std::move(arg);
    return Init_RegisterValues_Request_value(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RegisterValues_Request msg_;
};

class Init_RegisterValues_Request_name
{
public:
  explicit Init_RegisterValues_Request_name(::interbotix_xs_msgs::srv::RegisterValues_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterValues_Request_reg name(::interbotix_xs_msgs::srv::RegisterValues_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RegisterValues_Request_reg(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RegisterValues_Request msg_;
};

class Init_RegisterValues_Request_cmd_type
{
public:
  Init_RegisterValues_Request_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterValues_Request_name cmd_type(::interbotix_xs_msgs::srv::RegisterValues_Request::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_RegisterValues_Request_name(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RegisterValues_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::RegisterValues_Request>()
{
  return interbotix_xs_msgs::srv::builder::Init_RegisterValues_Request_cmd_type();
}

}  // namespace interbotix_xs_msgs


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterValues_Response_values
{
public:
  Init_RegisterValues_Response_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interbotix_xs_msgs::srv::RegisterValues_Response values(::interbotix_xs_msgs::srv::RegisterValues_Response::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RegisterValues_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::RegisterValues_Response>()
{
  return interbotix_xs_msgs::srv::builder::Init_RegisterValues_Response_values();
}

}  // namespace interbotix_xs_msgs


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterValues_Event_response
{
public:
  explicit Init_RegisterValues_Event_response(::interbotix_xs_msgs::srv::RegisterValues_Event & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::RegisterValues_Event response(::interbotix_xs_msgs::srv::RegisterValues_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RegisterValues_Event msg_;
};

class Init_RegisterValues_Event_request
{
public:
  explicit Init_RegisterValues_Event_request(::interbotix_xs_msgs::srv::RegisterValues_Event & msg)
  : msg_(msg)
  {}
  Init_RegisterValues_Event_response request(::interbotix_xs_msgs::srv::RegisterValues_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RegisterValues_Event_response(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RegisterValues_Event msg_;
};

class Init_RegisterValues_Event_info
{
public:
  Init_RegisterValues_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterValues_Event_request info(::interbotix_xs_msgs::srv::RegisterValues_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RegisterValues_Event_request(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RegisterValues_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::RegisterValues_Event>()
{
  return interbotix_xs_msgs::srv::builder::Init_RegisterValues_Event_info();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__REGISTER_VALUES__BUILDER_HPP_
