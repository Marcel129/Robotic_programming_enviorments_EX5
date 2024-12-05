// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rms_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rms_interfaces/msg/detail/sensor_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rms_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rms_interfaces::msg::SensorState(_init);
}

void SensorState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rms_interfaces::msg::SensorState *>(message_memory);
  typed_message->~SensorState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorState_message_member_array[2] = {
  {
    "sensor_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rms_interfaces::msg::SensorState, sensor_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rms_interfaces::msg::SensorState, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorState_message_members = {
  "rms_interfaces::msg",  // message namespace
  "SensorState",  // message name
  2,  // number of fields
  sizeof(rms_interfaces::msg::SensorState),
  SensorState_message_member_array,  // message members
  SensorState_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rms_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rms_interfaces::msg::SensorState>()
{
  return &::rms_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rms_interfaces, msg, SensorState)() {
  return &::rms_interfaces::msg::rosidl_typesupport_introspection_cpp::SensorState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
