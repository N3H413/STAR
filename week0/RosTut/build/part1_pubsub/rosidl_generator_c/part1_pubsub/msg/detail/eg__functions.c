// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from part1_pubsub:msg/Eg.idl
// generated code does not contain a copyright notice
#include "part1_pubsub/msg/detail/eg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

bool
part1_pubsub__msg__Eg__init(part1_pubsub__msg__Eg * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    part1_pubsub__msg__Eg__fini(msg);
    return false;
  }
  // time
  return true;
}

void
part1_pubsub__msg__Eg__fini(part1_pubsub__msg__Eg * msg)
{
  if (!msg) {
    return;
  }
  // info
  rosidl_runtime_c__String__fini(&msg->info);
  // time
}

bool
part1_pubsub__msg__Eg__are_equal(const part1_pubsub__msg__Eg * lhs, const part1_pubsub__msg__Eg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  return true;
}

bool
part1_pubsub__msg__Eg__copy(
  const part1_pubsub__msg__Eg * input,
  part1_pubsub__msg__Eg * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // time
  output->time = input->time;
  return true;
}

part1_pubsub__msg__Eg *
part1_pubsub__msg__Eg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  part1_pubsub__msg__Eg * msg = (part1_pubsub__msg__Eg *)allocator.allocate(sizeof(part1_pubsub__msg__Eg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(part1_pubsub__msg__Eg));
  bool success = part1_pubsub__msg__Eg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
part1_pubsub__msg__Eg__destroy(part1_pubsub__msg__Eg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    part1_pubsub__msg__Eg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
part1_pubsub__msg__Eg__Sequence__init(part1_pubsub__msg__Eg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  part1_pubsub__msg__Eg * data = NULL;

  if (size) {
    data = (part1_pubsub__msg__Eg *)allocator.zero_allocate(size, sizeof(part1_pubsub__msg__Eg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = part1_pubsub__msg__Eg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        part1_pubsub__msg__Eg__fini(&data[i - 1]);
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
part1_pubsub__msg__Eg__Sequence__fini(part1_pubsub__msg__Eg__Sequence * array)
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
      part1_pubsub__msg__Eg__fini(&array->data[i]);
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

part1_pubsub__msg__Eg__Sequence *
part1_pubsub__msg__Eg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  part1_pubsub__msg__Eg__Sequence * array = (part1_pubsub__msg__Eg__Sequence *)allocator.allocate(sizeof(part1_pubsub__msg__Eg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = part1_pubsub__msg__Eg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
part1_pubsub__msg__Eg__Sequence__destroy(part1_pubsub__msg__Eg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    part1_pubsub__msg__Eg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
part1_pubsub__msg__Eg__Sequence__are_equal(const part1_pubsub__msg__Eg__Sequence * lhs, const part1_pubsub__msg__Eg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!part1_pubsub__msg__Eg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
part1_pubsub__msg__Eg__Sequence__copy(
  const part1_pubsub__msg__Eg__Sequence * input,
  part1_pubsub__msg__Eg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(part1_pubsub__msg__Eg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    part1_pubsub__msg__Eg * data =
      (part1_pubsub__msg__Eg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!part1_pubsub__msg__Eg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          part1_pubsub__msg__Eg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!part1_pubsub__msg__Eg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
