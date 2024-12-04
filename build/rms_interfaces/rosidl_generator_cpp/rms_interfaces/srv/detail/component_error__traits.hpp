// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rms_interfaces:srv/ComponentError.idl
// generated code does not contain a copyright notice

#ifndef RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__TRAITS_HPP_
#define RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rms_interfaces/srv/detail/component_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rms_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComponentError_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: component_name
  {
    out << "component_name: ";
    rosidl_generator_traits::value_to_yaml(msg.component_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComponentError_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: component_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component_name: ";
    rosidl_generator_traits::value_to_yaml(msg.component_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComponentError_Request & msg, bool use_flow_style = false)
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

}  // namespace rms_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rms_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rms_interfaces::srv::ComponentError_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rms_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rms_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rms_interfaces::srv::ComponentError_Request & msg)
{
  return rms_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rms_interfaces::srv::ComponentError_Request>()
{
  return "rms_interfaces::srv::ComponentError_Request";
}

template<>
inline const char * name<rms_interfaces::srv::ComponentError_Request>()
{
  return "rms_interfaces/srv/ComponentError_Request";
}

template<>
struct has_fixed_size<rms_interfaces::srv::ComponentError_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rms_interfaces::srv::ComponentError_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rms_interfaces::srv::ComponentError_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rms_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComponentError_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComponentError_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComponentError_Response & msg, bool use_flow_style = false)
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

}  // namespace rms_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rms_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rms_interfaces::srv::ComponentError_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rms_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rms_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rms_interfaces::srv::ComponentError_Response & msg)
{
  return rms_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rms_interfaces::srv::ComponentError_Response>()
{
  return "rms_interfaces::srv::ComponentError_Response";
}

template<>
inline const char * name<rms_interfaces::srv::ComponentError_Response>()
{
  return "rms_interfaces/srv/ComponentError_Response";
}

template<>
struct has_fixed_size<rms_interfaces::srv::ComponentError_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rms_interfaces::srv::ComponentError_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rms_interfaces::srv::ComponentError_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rms_interfaces::srv::ComponentError>()
{
  return "rms_interfaces::srv::ComponentError";
}

template<>
inline const char * name<rms_interfaces::srv::ComponentError>()
{
  return "rms_interfaces/srv/ComponentError";
}

template<>
struct has_fixed_size<rms_interfaces::srv::ComponentError>
  : std::integral_constant<
    bool,
    has_fixed_size<rms_interfaces::srv::ComponentError_Request>::value &&
    has_fixed_size<rms_interfaces::srv::ComponentError_Response>::value
  >
{
};

template<>
struct has_bounded_size<rms_interfaces::srv::ComponentError>
  : std::integral_constant<
    bool,
    has_bounded_size<rms_interfaces::srv::ComponentError_Request>::value &&
    has_bounded_size<rms_interfaces::srv::ComponentError_Response>::value
  >
{
};

template<>
struct is_service<rms_interfaces::srv::ComponentError>
  : std::true_type
{
};

template<>
struct is_service_request<rms_interfaces::srv::ComponentError_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rms_interfaces::srv::ComponentError_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__TRAITS_HPP_
