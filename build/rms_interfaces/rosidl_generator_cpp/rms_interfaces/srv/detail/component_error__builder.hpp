// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rms_interfaces:srv/ComponentError.idl
// generated code does not contain a copyright notice

#ifndef RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__BUILDER_HPP_
#define RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rms_interfaces/srv/detail/component_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rms_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComponentError_Request_data
{
public:
  explicit Init_ComponentError_Request_data(::rms_interfaces::srv::ComponentError_Request & msg)
  : msg_(msg)
  {}
  ::rms_interfaces::srv::ComponentError_Request data(::rms_interfaces::srv::ComponentError_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rms_interfaces::srv::ComponentError_Request msg_;
};

class Init_ComponentError_Request_component_name
{
public:
  Init_ComponentError_Request_component_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComponentError_Request_data component_name(::rms_interfaces::srv::ComponentError_Request::_component_name_type arg)
  {
    msg_.component_name = std::move(arg);
    return Init_ComponentError_Request_data(msg_);
  }

private:
  ::rms_interfaces::srv::ComponentError_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rms_interfaces::srv::ComponentError_Request>()
{
  return rms_interfaces::srv::builder::Init_ComponentError_Request_component_name();
}

}  // namespace rms_interfaces


namespace rms_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComponentError_Response_message
{
public:
  explicit Init_ComponentError_Response_message(::rms_interfaces::srv::ComponentError_Response & msg)
  : msg_(msg)
  {}
  ::rms_interfaces::srv::ComponentError_Response message(::rms_interfaces::srv::ComponentError_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rms_interfaces::srv::ComponentError_Response msg_;
};

class Init_ComponentError_Response_success
{
public:
  Init_ComponentError_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComponentError_Response_message success(::rms_interfaces::srv::ComponentError_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ComponentError_Response_message(msg_);
  }

private:
  ::rms_interfaces::srv::ComponentError_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rms_interfaces::srv::ComponentError_Response>()
{
  return rms_interfaces::srv::builder::Init_ComponentError_Response_success();
}

}  // namespace rms_interfaces

#endif  // RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__BUILDER_HPP_
