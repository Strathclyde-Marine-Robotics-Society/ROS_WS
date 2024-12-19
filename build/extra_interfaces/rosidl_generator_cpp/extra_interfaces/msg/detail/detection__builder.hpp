// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from extra_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define EXTRA_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "extra_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace extra_interfaces
{

namespace msg
{

namespace builder
{

class Init_Detection_conf
{
public:
  explicit Init_Detection_conf(::extra_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  ::extra_interfaces::msg::Detection conf(::extra_interfaces::msg::Detection::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::extra_interfaces::msg::Detection msg_;
};

class Init_Detection_cls
{
public:
  explicit Init_Detection_cls(::extra_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_conf cls(::extra_interfaces::msg::Detection::_cls_type arg)
  {
    msg_.cls = std::move(arg);
    return Init_Detection_conf(msg_);
  }

private:
  ::extra_interfaces::msg::Detection msg_;
};

class Init_Detection_box
{
public:
  Init_Detection_box()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_cls box(::extra_interfaces::msg::Detection::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_Detection_cls(msg_);
  }

private:
  ::extra_interfaces::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::extra_interfaces::msg::Detection>()
{
  return extra_interfaces::msg::builder::Init_Detection_box();
}

}  // namespace extra_interfaces

#endif  // EXTRA_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
