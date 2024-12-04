// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rms_interfaces:srv/ComponentError.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rms_interfaces/srv/detail/component_error__rosidl_typesupport_introspection_c.h"
#include "rms_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rms_interfaces/srv/detail/component_error__functions.h"
#include "rms_interfaces/srv/detail/component_error__struct.h"


// Include directives for member types
// Member `component_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rms_interfaces__srv__ComponentError_Request__init(message_memory);
}

void rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_fini_function(void * message_memory)
{
  rms_interfaces__srv__ComponentError_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_message_member_array[1] = {
  {
    "component_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rms_interfaces__srv__ComponentError_Request, component_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_message_members = {
  "rms_interfaces__srv",  // message namespace
  "ComponentError_Request",  // message name
  1,  // number of fields
  sizeof(rms_interfaces__srv__ComponentError_Request),
  rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_message_member_array,  // message members
  rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_message_type_support_handle = {
  0,
  &rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rms_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rms_interfaces, srv, ComponentError_Request)() {
  if (!rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_message_type_support_handle.typesupport_identifier) {
    rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rms_interfaces__srv__ComponentError_Request__rosidl_typesupport_introspection_c__ComponentError_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rms_interfaces/srv/detail/component_error__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rms_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rms_interfaces/srv/detail/component_error__functions.h"
// already included above
// #include "rms_interfaces/srv/detail/component_error__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rms_interfaces__srv__ComponentError_Response__init(message_memory);
}

void rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_fini_function(void * message_memory)
{
  rms_interfaces__srv__ComponentError_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rms_interfaces__srv__ComponentError_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_message_members = {
  "rms_interfaces__srv",  // message namespace
  "ComponentError_Response",  // message name
  1,  // number of fields
  sizeof(rms_interfaces__srv__ComponentError_Response),
  rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_message_member_array,  // message members
  rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_message_type_support_handle = {
  0,
  &rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rms_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rms_interfaces, srv, ComponentError_Response)() {
  if (!rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_message_type_support_handle.typesupport_identifier) {
    rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rms_interfaces__srv__ComponentError_Response__rosidl_typesupport_introspection_c__ComponentError_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rms_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rms_interfaces/srv/detail/component_error__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_service_members = {
  "rms_interfaces__srv",  // service namespace
  "ComponentError",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_Request_message_type_support_handle,
  NULL  // response message
  // rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_Response_message_type_support_handle
};

static rosidl_service_type_support_t rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_service_type_support_handle = {
  0,
  &rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rms_interfaces, srv, ComponentError_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rms_interfaces, srv, ComponentError_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rms_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rms_interfaces, srv, ComponentError)() {
  if (!rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_service_type_support_handle.typesupport_identifier) {
    rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rms_interfaces, srv, ComponentError_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rms_interfaces, srv, ComponentError_Response)()->data;
  }

  return &rms_interfaces__srv__detail__component_error__rosidl_typesupport_introspection_c__ComponentError_service_type_support_handle;
}
