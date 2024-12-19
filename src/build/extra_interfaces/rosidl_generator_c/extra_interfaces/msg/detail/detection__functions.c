// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from extra_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice
#include "extra_interfaces/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
extra_interfaces__msg__Detection__init(extra_interfaces__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // box
  // cls
  // conf
  return true;
}

void
extra_interfaces__msg__Detection__fini(extra_interfaces__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // box
  // cls
  // conf
}

bool
extra_interfaces__msg__Detection__are_equal(const extra_interfaces__msg__Detection * lhs, const extra_interfaces__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // box
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->box[i] != rhs->box[i]) {
      return false;
    }
  }
  // cls
  if (lhs->cls != rhs->cls) {
    return false;
  }
  // conf
  if (lhs->conf != rhs->conf) {
    return false;
  }
  return true;
}

bool
extra_interfaces__msg__Detection__copy(
  const extra_interfaces__msg__Detection * input,
  extra_interfaces__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // box
  for (size_t i = 0; i < 4; ++i) {
    output->box[i] = input->box[i];
  }
  // cls
  output->cls = input->cls;
  // conf
  output->conf = input->conf;
  return true;
}

extra_interfaces__msg__Detection *
extra_interfaces__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  extra_interfaces__msg__Detection * msg = (extra_interfaces__msg__Detection *)allocator.allocate(sizeof(extra_interfaces__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(extra_interfaces__msg__Detection));
  bool success = extra_interfaces__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
extra_interfaces__msg__Detection__destroy(extra_interfaces__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    extra_interfaces__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
extra_interfaces__msg__Detection__Sequence__init(extra_interfaces__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  extra_interfaces__msg__Detection * data = NULL;

  if (size) {
    data = (extra_interfaces__msg__Detection *)allocator.zero_allocate(size, sizeof(extra_interfaces__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = extra_interfaces__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        extra_interfaces__msg__Detection__fini(&data[i - 1]);
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
extra_interfaces__msg__Detection__Sequence__fini(extra_interfaces__msg__Detection__Sequence * array)
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
      extra_interfaces__msg__Detection__fini(&array->data[i]);
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

extra_interfaces__msg__Detection__Sequence *
extra_interfaces__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  extra_interfaces__msg__Detection__Sequence * array = (extra_interfaces__msg__Detection__Sequence *)allocator.allocate(sizeof(extra_interfaces__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = extra_interfaces__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
extra_interfaces__msg__Detection__Sequence__destroy(extra_interfaces__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    extra_interfaces__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
extra_interfaces__msg__Detection__Sequence__are_equal(const extra_interfaces__msg__Detection__Sequence * lhs, const extra_interfaces__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!extra_interfaces__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
extra_interfaces__msg__Detection__Sequence__copy(
  const extra_interfaces__msg__Detection__Sequence * input,
  extra_interfaces__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(extra_interfaces__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    extra_interfaces__msg__Detection * data =
      (extra_interfaces__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!extra_interfaces__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          extra_interfaces__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!extra_interfaces__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
