// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rms_interfaces:srv/ComponentError.idl
// generated code does not contain a copyright notice
#include "rms_interfaces/srv/detail/component_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `component_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rms_interfaces__srv__ComponentError_Request__init(rms_interfaces__srv__ComponentError_Request * msg)
{
  if (!msg) {
    return false;
  }
  // component_name
  if (!rosidl_runtime_c__String__init(&msg->component_name)) {
    rms_interfaces__srv__ComponentError_Request__fini(msg);
    return false;
  }
  // data
  return true;
}

void
rms_interfaces__srv__ComponentError_Request__fini(rms_interfaces__srv__ComponentError_Request * msg)
{
  if (!msg) {
    return;
  }
  // component_name
  rosidl_runtime_c__String__fini(&msg->component_name);
  // data
}

bool
rms_interfaces__srv__ComponentError_Request__are_equal(const rms_interfaces__srv__ComponentError_Request * lhs, const rms_interfaces__srv__ComponentError_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // component_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->component_name), &(rhs->component_name)))
  {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
rms_interfaces__srv__ComponentError_Request__copy(
  const rms_interfaces__srv__ComponentError_Request * input,
  rms_interfaces__srv__ComponentError_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // component_name
  if (!rosidl_runtime_c__String__copy(
      &(input->component_name), &(output->component_name)))
  {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

rms_interfaces__srv__ComponentError_Request *
rms_interfaces__srv__ComponentError_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rms_interfaces__srv__ComponentError_Request * msg = (rms_interfaces__srv__ComponentError_Request *)allocator.allocate(sizeof(rms_interfaces__srv__ComponentError_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rms_interfaces__srv__ComponentError_Request));
  bool success = rms_interfaces__srv__ComponentError_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rms_interfaces__srv__ComponentError_Request__destroy(rms_interfaces__srv__ComponentError_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rms_interfaces__srv__ComponentError_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rms_interfaces__srv__ComponentError_Request__Sequence__init(rms_interfaces__srv__ComponentError_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rms_interfaces__srv__ComponentError_Request * data = NULL;

  if (size) {
    data = (rms_interfaces__srv__ComponentError_Request *)allocator.zero_allocate(size, sizeof(rms_interfaces__srv__ComponentError_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rms_interfaces__srv__ComponentError_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rms_interfaces__srv__ComponentError_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rms_interfaces__srv__ComponentError_Request__Sequence__fini(rms_interfaces__srv__ComponentError_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rms_interfaces__srv__ComponentError_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rms_interfaces__srv__ComponentError_Request__Sequence *
rms_interfaces__srv__ComponentError_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rms_interfaces__srv__ComponentError_Request__Sequence * array = (rms_interfaces__srv__ComponentError_Request__Sequence *)allocator.allocate(sizeof(rms_interfaces__srv__ComponentError_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rms_interfaces__srv__ComponentError_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rms_interfaces__srv__ComponentError_Request__Sequence__destroy(rms_interfaces__srv__ComponentError_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rms_interfaces__srv__ComponentError_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rms_interfaces__srv__ComponentError_Request__Sequence__are_equal(const rms_interfaces__srv__ComponentError_Request__Sequence * lhs, const rms_interfaces__srv__ComponentError_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rms_interfaces__srv__ComponentError_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rms_interfaces__srv__ComponentError_Request__Sequence__copy(
  const rms_interfaces__srv__ComponentError_Request__Sequence * input,
  rms_interfaces__srv__ComponentError_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rms_interfaces__srv__ComponentError_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rms_interfaces__srv__ComponentError_Request * data =
      (rms_interfaces__srv__ComponentError_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rms_interfaces__srv__ComponentError_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rms_interfaces__srv__ComponentError_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rms_interfaces__srv__ComponentError_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
rms_interfaces__srv__ComponentError_Response__init(rms_interfaces__srv__ComponentError_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    rms_interfaces__srv__ComponentError_Response__fini(msg);
    return false;
  }
  return true;
}

void
rms_interfaces__srv__ComponentError_Response__fini(rms_interfaces__srv__ComponentError_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
rms_interfaces__srv__ComponentError_Response__are_equal(const rms_interfaces__srv__ComponentError_Response * lhs, const rms_interfaces__srv__ComponentError_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
rms_interfaces__srv__ComponentError_Response__copy(
  const rms_interfaces__srv__ComponentError_Response * input,
  rms_interfaces__srv__ComponentError_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

rms_interfaces__srv__ComponentError_Response *
rms_interfaces__srv__ComponentError_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rms_interfaces__srv__ComponentError_Response * msg = (rms_interfaces__srv__ComponentError_Response *)allocator.allocate(sizeof(rms_interfaces__srv__ComponentError_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rms_interfaces__srv__ComponentError_Response));
  bool success = rms_interfaces__srv__ComponentError_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rms_interfaces__srv__ComponentError_Response__destroy(rms_interfaces__srv__ComponentError_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rms_interfaces__srv__ComponentError_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rms_interfaces__srv__ComponentError_Response__Sequence__init(rms_interfaces__srv__ComponentError_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rms_interfaces__srv__ComponentError_Response * data = NULL;

  if (size) {
    data = (rms_interfaces__srv__ComponentError_Response *)allocator.zero_allocate(size, sizeof(rms_interfaces__srv__ComponentError_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rms_interfaces__srv__ComponentError_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rms_interfaces__srv__ComponentError_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rms_interfaces__srv__ComponentError_Response__Sequence__fini(rms_interfaces__srv__ComponentError_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rms_interfaces__srv__ComponentError_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rms_interfaces__srv__ComponentError_Response__Sequence *
rms_interfaces__srv__ComponentError_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rms_interfaces__srv__ComponentError_Response__Sequence * array = (rms_interfaces__srv__ComponentError_Response__Sequence *)allocator.allocate(sizeof(rms_interfaces__srv__ComponentError_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rms_interfaces__srv__ComponentError_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rms_interfaces__srv__ComponentError_Response__Sequence__destroy(rms_interfaces__srv__ComponentError_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rms_interfaces__srv__ComponentError_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rms_interfaces__srv__ComponentError_Response__Sequence__are_equal(const rms_interfaces__srv__ComponentError_Response__Sequence * lhs, const rms_interfaces__srv__ComponentError_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rms_interfaces__srv__ComponentError_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rms_interfaces__srv__ComponentError_Response__Sequence__copy(
  const rms_interfaces__srv__ComponentError_Response__Sequence * input,
  rms_interfaces__srv__ComponentError_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rms_interfaces__srv__ComponentError_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rms_interfaces__srv__ComponentError_Response * data =
      (rms_interfaces__srv__ComponentError_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rms_interfaces__srv__ComponentError_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rms_interfaces__srv__ComponentError_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rms_interfaces__srv__ComponentError_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
