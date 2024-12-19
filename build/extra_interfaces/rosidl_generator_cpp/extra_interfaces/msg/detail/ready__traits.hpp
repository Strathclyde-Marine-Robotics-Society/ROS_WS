// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from extra_interfaces:msg/Ready.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__READY__TRAITS_HPP_
#define EXTRA_INTERFACES__MSG__DETAIL__READY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "extra_interfaces/msg/detail/ready__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace extra_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ready & msg,
  std::ostream & out)
{
  out << "{";
  // member: node
  {
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ready & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ready & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace extra_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use extra_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const extra_interfaces::msg::Ready & msg,
  std::ostream & out, size_t indentation = 0)
{
  extra_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use extra_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const extra_interfaces::msg::Ready & msg)
{
  return extra_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<extra_interfaces::msg::Ready>()
{
  return "extra_interfaces::msg::Ready";
}

template<>
inline const char * name<extra_interfaces::msg::Ready>()
{
  return "extra_interfaces/msg/Ready";
}

template<>
struct has_fixed_size<extra_interfaces::msg::Ready>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<extra_interfaces::msg::Ready>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<extra_interfaces::msg::Ready>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXTRA_INTERFACES__MSG__DETAIL__READY__TRAITS_HPP_
