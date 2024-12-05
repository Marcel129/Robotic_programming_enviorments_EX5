// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rms_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
#define RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorState in the package rms_interfaces.
typedef struct rms_interfaces__msg__SensorState
{
  rosidl_runtime_c__String sensor_name;
  bool state;
} rms_interfaces__msg__SensorState;

// Struct for a sequence of rms_interfaces__msg__SensorState.
typedef struct rms_interfaces__msg__SensorState__Sequence
{
  rms_interfaces__msg__SensorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rms_interfaces__msg__SensorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
