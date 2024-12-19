// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from extra_interfaces:msg/Ready.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__READY__BUILDER_HPP_
#define EXTRA_INTERFACES__MSG__DETAIL__READY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "extra_interfaces/msg/detail/ready__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace extra_interfaces
{

namespace msg
{

namespace builder
{

class Init_Ready_node
{
public:
  Init_Ready_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::extra_interfaces::msg::Ready node(::extra_interfaces::msg::Ready::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::extra_interfaces::msg::Ready msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::extra_interfaces::msg::Ready>()
{
  return extra_interfaces::msg::builder::Init_Ready_node();
}

}  // namespace extra_interfaces

#endif  // EXTRA_INTERFACES__MSG__DETAIL__READY__BUILDER_HPP_
