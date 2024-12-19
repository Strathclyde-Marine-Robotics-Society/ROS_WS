// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from extra_interfaces:msg/Ready.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "extra_interfaces/msg/detail/ready__rosidl_typesupport_introspection_c.h"
#include "extra_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "extra_interfaces/msg/detail/ready__functions.h"
#include "extra_interfaces/msg/detail/ready__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  extra_interfaces__msg__Ready__init(message_memory);
}

void extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_fini_function(void * message_memory)
{
  extra_interfaces__msg__Ready__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_message_member_array[1] = {
  {
    "node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(extra_interfaces__msg__Ready, node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_message_members = {
  "extra_interfaces__msg",  // message namespace
  "Ready",  // message name
  1,  // number of fields
  sizeof(extra_interfaces__msg__Ready),
  extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_message_member_array,  // message members
  extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_init_function,  // function to initialize message memory (memory has to be allocated)
  extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_message_type_support_handle = {
  0,
  &extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_extra_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, extra_interfaces, msg, Ready)() {
  if (!extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_message_type_support_handle.typesupport_identifier) {
    extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &extra_interfaces__msg__Ready__rosidl_typesupport_introspection_c__Ready_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
