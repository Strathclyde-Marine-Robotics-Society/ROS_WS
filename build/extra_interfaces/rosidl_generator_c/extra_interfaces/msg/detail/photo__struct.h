// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from extra_interfaces:msg/Photo.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__PHOTO__STRUCT_H_
#define EXTRA_INTERFACES__MSG__DETAIL__PHOTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Photo in the package extra_interfaces.
typedef struct extra_interfaces__msg__Photo
{
  uint8_t sent;
} extra_interfaces__msg__Photo;

// Struct for a sequence of extra_interfaces__msg__Photo.
typedef struct extra_interfaces__msg__Photo__Sequence
{
  extra_interfaces__msg__Photo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} extra_interfaces__msg__Photo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXTRA_INTERFACES__MSG__DETAIL__PHOTO__STRUCT_H_
