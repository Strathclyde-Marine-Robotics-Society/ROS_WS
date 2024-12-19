// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from extra_interfaces:msg/Ready.idl
// generated code does not contain a copyright notice
#include "extra_interfaces/msg/detail/ready__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
extra_interfaces__msg__Ready__init(extra_interfaces__msg__Ready * msg)
{
  if (!msg) {
    return false;
  }
  // node
  return true;
}

void
extra_interfaces__msg__Ready__fini(extra_interfaces__msg__Ready * msg)
{
  if (!msg) {
    return;
  }
  // node
}

bool
extra_interfaces__msg__Ready__are_equal(const extra_interfaces__msg__Ready * lhs, const extra_interfaces__msg__Ready * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node
  if (lhs->node != rhs->node) {
    return false;
  }
  return true;
}

bool
extra_interfaces__msg__Ready__copy(
  const extra_interfaces__msg__Ready * input,
  extra_interfaces__msg__Ready * output)
{
  if (!input || !output) {
    return false;
  }
  // node
  output->node = input->node;
  return true;
}

extra_interfaces__msg__Ready *
extra_interfaces__msg__Ready__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  extra_interfaces__msg__Ready * msg = (extra_interfaces__msg__Ready *)allocator.allocate(sizeof(extra_interfaces__msg__Ready), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(extra_interfaces__msg__Ready));
  bool success = extra_interfaces__msg__Ready__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
extra_interfaces__msg__Ready__destroy(extra_interfaces__msg__Ready * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    extra_interfaces__msg__Ready__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
extra_interfaces__msg__Ready__Sequence__init(extra_interfaces__msg__Ready__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  extra_interfaces__msg__Ready * data = NULL;

  if (size) {
    data = (extra_interfaces__msg__Ready *)allocator.zero_allocate(size, sizeof(extra_interfaces__msg__Ready), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = extra_interfaces__msg__Ready__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        extra_interfaces__msg__Ready__fini(&data[i - 1]);
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
extra_interfaces__msg__Ready__Sequence__fini(extra_interfaces__msg__Ready__Sequence * array)
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
      extra_interfaces__msg__Ready__fini(&array->data[i]);
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

extra_interfaces__msg__Ready__Sequence *
extra_interfaces__msg__Ready__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  extra_interfaces__msg__Ready__Sequence * array = (extra_interfaces__msg__Ready__Sequence *)allocator.allocate(sizeof(extra_interfaces__msg__Ready__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = extra_interfaces__msg__Ready__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
extra_interfaces__msg__Ready__Sequence__destroy(extra_interfaces__msg__Ready__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    extra_interfaces__msg__Ready__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
extra_interfaces__msg__Ready__Sequence__are_equal(const extra_interfaces__msg__Ready__Sequence * lhs, const extra_interfaces__msg__Ready__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!extra_interfaces__msg__Ready__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
extra_interfaces__msg__Ready__Sequence__copy(
  const extra_interfaces__msg__Ready__Sequence * input,
  extra_interfaces__msg__Ready__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(extra_interfaces__msg__Ready);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    extra_interfaces__msg__Ready * data =
      (extra_interfaces__msg__Ready *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!extra_interfaces__msg__Ready__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          extra_interfaces__msg__Ready__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!extra_interfaces__msg__Ready__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
