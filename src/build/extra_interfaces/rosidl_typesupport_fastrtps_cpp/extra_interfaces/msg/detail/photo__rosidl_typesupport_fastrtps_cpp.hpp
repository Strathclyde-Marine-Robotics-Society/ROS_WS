// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from extra_interfaces:msg/Photo.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__PHOTO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define EXTRA_INTERFACES__MSG__DETAIL__PHOTO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "extra_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "extra_interfaces/msg/detail/photo__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace extra_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_extra_interfaces
cdr_serialize(
  const extra_interfaces::msg::Photo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_extra_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  extra_interfaces::msg::Photo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_extra_interfaces
get_serialized_size(
  const extra_interfaces::msg::Photo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_extra_interfaces
max_serialized_size_Photo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace extra_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_extra_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, extra_interfaces, msg, Photo)();

#ifdef __cplusplus
}
#endif

#endif  // EXTRA_INTERFACES__MSG__DETAIL__PHOTO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_