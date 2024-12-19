// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from extra_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
#define EXTRA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Detection in the package extra_interfaces.
typedef struct extra_interfaces__msg__Detection
{
  uint32_t box[4];
  uint32_t cls;
  float conf;
} extra_interfaces__msg__Detection;

// Struct for a sequence of extra_interfaces__msg__Detection.
typedef struct extra_interfaces__msg__Detection__Sequence
{
  extra_interfaces__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} extra_interfaces__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXTRA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
