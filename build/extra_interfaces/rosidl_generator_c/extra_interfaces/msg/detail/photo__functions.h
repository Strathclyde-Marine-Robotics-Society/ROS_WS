// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from extra_interfaces:msg/Photo.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__PHOTO__FUNCTIONS_H_
#define EXTRA_INTERFACES__MSG__DETAIL__PHOTO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "extra_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "extra_interfaces/msg/detail/photo__struct.h"

/// Initialize msg/Photo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * extra_interfaces__msg__Photo
 * )) before or use
 * extra_interfaces__msg__Photo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
bool
extra_interfaces__msg__Photo__init(extra_interfaces__msg__Photo * msg);

/// Finalize msg/Photo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
void
extra_interfaces__msg__Photo__fini(extra_interfaces__msg__Photo * msg);

/// Create msg/Photo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * extra_interfaces__msg__Photo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
extra_interfaces__msg__Photo *
extra_interfaces__msg__Photo__create();

/// Destroy msg/Photo message.
/**
 * It calls
 * extra_interfaces__msg__Photo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
void
extra_interfaces__msg__Photo__destroy(extra_interfaces__msg__Photo * msg);

/// Check for msg/Photo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
bool
extra_interfaces__msg__Photo__are_equal(const extra_interfaces__msg__Photo * lhs, const extra_interfaces__msg__Photo * rhs);

/// Copy a msg/Photo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
bool
extra_interfaces__msg__Photo__copy(
  const extra_interfaces__msg__Photo * input,
  extra_interfaces__msg__Photo * output);

/// Initialize array of msg/Photo messages.
/**
 * It allocates the memory for the number of elements and calls
 * extra_interfaces__msg__Photo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
bool
extra_interfaces__msg__Photo__Sequence__init(extra_interfaces__msg__Photo__Sequence * array, size_t size);

/// Finalize array of msg/Photo messages.
/**
 * It calls
 * extra_interfaces__msg__Photo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
void
extra_interfaces__msg__Photo__Sequence__fini(extra_interfaces__msg__Photo__Sequence * array);

/// Create array of msg/Photo messages.
/**
 * It allocates the memory for the array and calls
 * extra_interfaces__msg__Photo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
extra_interfaces__msg__Photo__Sequence *
extra_interfaces__msg__Photo__Sequence__create(size_t size);

/// Destroy array of msg/Photo messages.
/**
 * It calls
 * extra_interfaces__msg__Photo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
void
extra_interfaces__msg__Photo__Sequence__destroy(extra_interfaces__msg__Photo__Sequence * array);

/// Check for msg/Photo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
bool
extra_interfaces__msg__Photo__Sequence__are_equal(const extra_interfaces__msg__Photo__Sequence * lhs, const extra_interfaces__msg__Photo__Sequence * rhs);

/// Copy an array of msg/Photo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_extra_interfaces
bool
extra_interfaces__msg__Photo__Sequence__copy(
  const extra_interfaces__msg__Photo__Sequence * input,
  extra_interfaces__msg__Photo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EXTRA_INTERFACES__MSG__DETAIL__PHOTO__FUNCTIONS_H_
