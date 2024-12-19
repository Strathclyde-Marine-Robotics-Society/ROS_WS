// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from extra_interfaces:msg/Photo.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__PHOTO__BUILDER_HPP_
#define EXTRA_INTERFACES__MSG__DETAIL__PHOTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "extra_interfaces/msg/detail/photo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace extra_interfaces
{

namespace msg
{

namespace builder
{

class Init_Photo_sent
{
public:
  Init_Photo_sent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::extra_interfaces::msg::Photo sent(::extra_interfaces::msg::Photo::_sent_type arg)
  {
    msg_.sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::extra_interfaces::msg::Photo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::extra_interfaces::msg::Photo>()
{
  return extra_interfaces::msg::builder::Init_Photo_sent();
}

}  // namespace extra_interfaces

#endif  // EXTRA_INTERFACES__MSG__DETAIL__PHOTO__BUILDER_HPP_
