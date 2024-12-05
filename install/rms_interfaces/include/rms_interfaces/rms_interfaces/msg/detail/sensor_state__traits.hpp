// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rms_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_
#define RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rms_interfaces/msg/detail/sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rms_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_name
  {
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rms_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rms_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rms_interfaces::msg::SensorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rms_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rms_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rms_interfaces::msg::SensorState & msg)
{
  return rms_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rms_interfaces::msg::SensorState>()
{
  return "rms_interfaces::msg::SensorState";
}

template<>
inline const char * name<rms_interfaces::msg::SensorState>()
{
  return "rms_interfaces/msg/SensorState";
}

template<>
struct has_fixed_size<rms_interfaces::msg::SensorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rms_interfaces::msg::SensorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rms_interfaces::msg::SensorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_
