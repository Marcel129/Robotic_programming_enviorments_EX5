// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rms_interfaces:srv/ComponentError.idl
// generated code does not contain a copyright notice

#ifndef RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__STRUCT_HPP_
#define RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rms_interfaces__srv__ComponentError_Request __attribute__((deprecated))
#else
# define DEPRECATED__rms_interfaces__srv__ComponentError_Request __declspec(deprecated)
#endif

namespace rms_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComponentError_Request_
{
  using Type = ComponentError_Request_<ContainerAllocator>;

  explicit ComponentError_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->component_name = "";
      this->data = false;
    }
  }

  explicit ComponentError_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : component_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->component_name = "";
      this->data = false;
    }
  }

  // field types and members
  using _component_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _component_name_type component_name;
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__component_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->component_name = _arg;
    return *this;
  }
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rms_interfaces::srv::ComponentError_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rms_interfaces::srv::ComponentError_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rms_interfaces::srv::ComponentError_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rms_interfaces::srv::ComponentError_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rms_interfaces::srv::ComponentError_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rms_interfaces::srv::ComponentError_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rms_interfaces::srv::ComponentError_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rms_interfaces::srv::ComponentError_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rms_interfaces::srv::ComponentError_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rms_interfaces::srv::ComponentError_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rms_interfaces__srv__ComponentError_Request
    std::shared_ptr<rms_interfaces::srv::ComponentError_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rms_interfaces__srv__ComponentError_Request
    std::shared_ptr<rms_interfaces::srv::ComponentError_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComponentError_Request_ & other) const
  {
    if (this->component_name != other.component_name) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComponentError_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComponentError_Request_

// alias to use template instance with default allocator
using ComponentError_Request =
  rms_interfaces::srv::ComponentError_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rms_interfaces


#ifndef _WIN32
# define DEPRECATED__rms_interfaces__srv__ComponentError_Response __attribute__((deprecated))
#else
# define DEPRECATED__rms_interfaces__srv__ComponentError_Response __declspec(deprecated)
#endif

namespace rms_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComponentError_Response_
{
  using Type = ComponentError_Response_<ContainerAllocator>;

  explicit ComponentError_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ComponentError_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rms_interfaces::srv::ComponentError_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rms_interfaces::srv::ComponentError_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rms_interfaces::srv::ComponentError_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rms_interfaces::srv::ComponentError_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rms_interfaces::srv::ComponentError_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rms_interfaces::srv::ComponentError_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rms_interfaces::srv::ComponentError_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rms_interfaces::srv::ComponentError_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rms_interfaces::srv::ComponentError_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rms_interfaces::srv::ComponentError_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rms_interfaces__srv__ComponentError_Response
    std::shared_ptr<rms_interfaces::srv::ComponentError_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rms_interfaces__srv__ComponentError_Response
    std::shared_ptr<rms_interfaces::srv::ComponentError_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComponentError_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComponentError_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComponentError_Response_

// alias to use template instance with default allocator
using ComponentError_Response =
  rms_interfaces::srv::ComponentError_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rms_interfaces

namespace rms_interfaces
{

namespace srv
{

struct ComponentError
{
  using Request = rms_interfaces::srv::ComponentError_Request;
  using Response = rms_interfaces::srv::ComponentError_Response;
};

}  // namespace srv

}  // namespace rms_interfaces

#endif  // RMS_INTERFACES__SRV__DETAIL__COMPONENT_ERROR__STRUCT_HPP_
