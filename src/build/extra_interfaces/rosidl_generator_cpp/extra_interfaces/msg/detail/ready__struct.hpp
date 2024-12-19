// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from extra_interfaces:msg/Ready.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__READY__STRUCT_HPP_
#define EXTRA_INTERFACES__MSG__DETAIL__READY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__extra_interfaces__msg__Ready __attribute__((deprecated))
#else
# define DEPRECATED__extra_interfaces__msg__Ready __declspec(deprecated)
#endif

namespace extra_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ready_
{
  using Type = Ready_<ContainerAllocator>;

  explicit Ready_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = 0ul;
    }
  }

  explicit Ready_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = 0ul;
    }
  }

  // field types and members
  using _node_type =
    uint32_t;
  _node_type node;

  // setters for named parameter idiom
  Type & set__node(
    const uint32_t & _arg)
  {
    this->node = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    extra_interfaces::msg::Ready_<ContainerAllocator> *;
  using ConstRawPtr =
    const extra_interfaces::msg::Ready_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<extra_interfaces::msg::Ready_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<extra_interfaces::msg::Ready_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      extra_interfaces::msg::Ready_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<extra_interfaces::msg::Ready_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      extra_interfaces::msg::Ready_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<extra_interfaces::msg::Ready_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<extra_interfaces::msg::Ready_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<extra_interfaces::msg::Ready_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__extra_interfaces__msg__Ready
    std::shared_ptr<extra_interfaces::msg::Ready_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__extra_interfaces__msg__Ready
    std::shared_ptr<extra_interfaces::msg::Ready_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ready_ & other) const
  {
    if (this->node != other.node) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ready_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ready_

// alias to use template instance with default allocator
using Ready =
  extra_interfaces::msg::Ready_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace extra_interfaces

#endif  // EXTRA_INTERFACES__MSG__DETAIL__READY__STRUCT_HPP_
