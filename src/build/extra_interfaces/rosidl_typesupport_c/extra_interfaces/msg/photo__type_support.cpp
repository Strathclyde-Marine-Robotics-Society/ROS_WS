// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from extra_interfaces:msg/Photo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "extra_interfaces/msg/detail/photo__struct.h"
#include "extra_interfaces/msg/detail/photo__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace extra_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Photo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Photo_type_support_ids_t;

static const _Photo_type_support_ids_t _Photo_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Photo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Photo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Photo_type_support_symbol_names_t _Photo_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, extra_interfaces, msg, Photo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, extra_interfaces, msg, Photo)),
  }
};

typedef struct _Photo_type_support_data_t
{
  void * data[2];
} _Photo_type_support_data_t;

static _Photo_type_support_data_t _Photo_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Photo_message_typesupport_map = {
  2,
  "extra_interfaces",
  &_Photo_message_typesupport_ids.typesupport_identifier[0],
  &_Photo_message_typesupport_symbol_names.symbol_name[0],
  &_Photo_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Photo_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Photo_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace extra_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, extra_interfaces, msg, Photo)() {
  return &::extra_interfaces::msg::rosidl_typesupport_c::Photo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
