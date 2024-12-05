// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rms_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rms_interfaces/msg/detail/sensor_state__rosidl_typesupport_introspection_c.h"
#include "rms_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rms_interfaces/msg/detail/sensor_state__functions.h"
#include "rms_interfaces/msg/detail/sensor_state__struct.h"


// Include directives for member types
// Member `sensor_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rms_interfaces__msg__SensorState__init(message_memory);
}

void rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_fini_function(void * message_memory)
{
  rms_interfaces__msg__SensorState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array[2] = {
  {
    "sensor_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rms_interfaces__msg__SensorState, sensor_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rms_interfaces__msg__SensorState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_members = {
  "rms_interfaces__msg",  // message namespace
  "SensorState",  // message name
  2,  // number of fields
  sizeof(rms_interfaces__msg__SensorState),
  rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array,  // message members
  rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_init_function,  // function to initialize message memory (memory has to be allocated)
  rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle = {
  0,
  &rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rms_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rms_interfaces, msg, SensorState)() {
  if (!rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle.typesupport_identifier) {
    rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rms_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
