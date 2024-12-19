// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from extra_interfaces:msg/Photo.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__PHOTO__STRUCT_HPP_
#define EXTRA_INTERFACES__MSG__DETAIL__PHOTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__extra_interfaces__msg__Photo __attribute__((deprecated))
#else
# define DEPRECATED__extra_interfaces__msg__Photo __declspec(deprecated)
#endif

namespace extra_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Photo_
{
  using Type = Photo_<ContainerAllocator>;

  explicit Photo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->sent = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->sent = 0;
    }
  }

  explicit Photo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->sent = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->sent = 0;
    }
  }

  // field types and members
  using _sent_type =
    uint8_t;
  _sent_type sent;

  // setters for named parameter idiom
  Type & set__sent(
    const uint8_t & _arg)
  {
    this->sent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    extra_interfaces::msg::Photo_<ContainerAllocator> *;
  using ConstRawPtr =
    const extra_interfaces::msg::Photo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<extra_interfaces::msg::Photo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<extra_interfaces::msg::Photo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      extra_interfaces::msg::Photo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<extra_interfaces::msg::Photo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      extra_interfaces::msg::Photo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<extra_interfaces::msg::Photo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<extra_interfaces::msg::Photo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<extra_interfaces::msg::Photo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__extra_interfaces__msg__Photo
    std::shared_ptr<extra_interfaces::msg::Photo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__extra_interfaces__msg__Photo
    std::shared_ptr<extra_interfaces::msg::Photo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Photo_ & other) const
  {
    if (this->sent != other.sent) {
      return false;
    }
    return true;
  }
  bool operator!=(const Photo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Photo_

// alias to use template instance with default allocator
using Photo =
  extra_interfaces::msg::Photo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace extra_interfaces

#endif  // EXTRA_INTERFACES__MSG__DETAIL__PHOTO__STRUCT_HPP_
