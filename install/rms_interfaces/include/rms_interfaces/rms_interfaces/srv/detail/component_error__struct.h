// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rms_interfaces:srv/ComponentError.idl
// generated code does not contain a copyright notice

#ifndef RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__STRUCT_H_
#define RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'component_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ComponentError in the package rms_interfaces.
typedef struct rms_interfaces__srv__ComponentError_Request
{
  rosidl_runtime_c__String component_name;
  bool data;
} rms_interfaces__srv__ComponentError_Request;

// Struct for a sequence of rms_interfaces__srv__ComponentError_Request.
typedef struct rms_interfaces__srv__ComponentError_Request__Sequence
{
  rms_interfaces__srv__ComponentError_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rms_interfaces__srv__ComponentError_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ComponentError in the package rms_interfaces.
typedef struct rms_interfaces__srv__ComponentError_Response
{
  bool success;
  rosidl_runtime_c__String message;
} rms_interfaces__srv__ComponentError_Response;

// Struct for a sequence of rms_interfaces__srv__ComponentError_Response.
typedef struct rms_interfaces__srv__ComponentError_Response__Sequence
{
  rms_interfaces__srv__ComponentError_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rms_interfaces__srv__ComponentError_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__STRUCT_H_
