// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rms_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
#define RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rms_interfaces/msg/detail/sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rms_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorState_state
{
public:
  explicit Init_SensorState_state(::rms_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  ::rms_interfaces::msg::SensorState state(::rms_interfaces::msg::SensorState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rms_interfaces::msg::SensorState msg_;
};

class Init_SensorState_sensor_name
{
public:
  Init_SensorState_sensor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorState_state sensor_name(::rms_interfaces::msg::SensorState::_sensor_name_type arg)
  {
    msg_.sensor_name = std::move(arg);
    return Init_SensorState_state(msg_);
  }

private:
  ::rms_interfaces::msg::SensorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rms_interfaces::msg::SensorState>()
{
  return rms_interfaces::msg::builder::Init_SensorState_sensor_name();
}

}  // namespace rms_interfaces

#endif  // RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
