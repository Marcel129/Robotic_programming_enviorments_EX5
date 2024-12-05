// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rms_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_
#define RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rms_interfaces__msg__SensorState __attribute__((deprecated))
#else
# define DEPRECATED__rms_interfaces__msg__SensorState __declspec(deprecated)
#endif

namespace rms_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorState_
{
  using Type = SensorState_<ContainerAllocator>;

  explicit SensorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->state = false;
    }
  }

  explicit SensorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->state = false;
    }
  }

  // field types and members
  using _sensor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_name_type sensor_name;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__sensor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_name = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rms_interfaces::msg::SensorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rms_interfaces::msg::SensorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rms_interfaces::msg::SensorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rms_interfaces::msg::SensorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rms_interfaces::msg::SensorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rms_interfaces::msg::SensorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rms_interfaces::msg::SensorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rms_interfaces::msg::SensorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rms_interfaces::msg::SensorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rms_interfaces::msg::SensorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rms_interfaces__msg__SensorState
    std::shared_ptr<rms_interfaces::msg::SensorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rms_interfaces__msg__SensorState
    std::shared_ptr<rms_interfaces::msg::SensorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorState_ & other) const
  {
    if (this->sensor_name != other.sensor_name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorState_

// alias to use template instance with default allocator
using SensorState =
  rms_interfaces::msg::SensorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rms_interfaces

#endif  // RMS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_
