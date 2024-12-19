// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from extra_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef EXTRA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define EXTRA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__extra_interfaces__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__extra_interfaces__msg__Detection __declspec(deprecated)
#endif

namespace extra_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->box.begin(), this->box.end(), 0ul);
      this->cls = 0ul;
      this->conf = 0.0f;
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : box(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->box.begin(), this->box.end(), 0ul);
      this->cls = 0ul;
      this->conf = 0.0f;
    }
  }

  // field types and members
  using _box_type =
    std::array<uint32_t, 4>;
  _box_type box;
  using _cls_type =
    uint32_t;
  _cls_type cls;
  using _conf_type =
    float;
  _conf_type conf;

  // setters for named parameter idiom
  Type & set__box(
    const std::array<uint32_t, 4> & _arg)
  {
    this->box = _arg;
    return *this;
  }
  Type & set__cls(
    const uint32_t & _arg)
  {
    this->cls = _arg;
    return *this;
  }
  Type & set__conf(
    const float & _arg)
  {
    this->conf = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    extra_interfaces::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const extra_interfaces::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<extra_interfaces::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<extra_interfaces::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      extra_interfaces::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<extra_interfaces::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      extra_interfaces::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<extra_interfaces::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<extra_interfaces::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<extra_interfaces::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__extra_interfaces__msg__Detection
    std::shared_ptr<extra_interfaces::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__extra_interfaces__msg__Detection
    std::shared_ptr<extra_interfaces::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->box != other.box) {
      return false;
    }
    if (this->cls != other.cls) {
      return false;
    }
    if (this->conf != other.conf) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  extra_interfaces::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace extra_interfaces

#endif  // EXTRA_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_
