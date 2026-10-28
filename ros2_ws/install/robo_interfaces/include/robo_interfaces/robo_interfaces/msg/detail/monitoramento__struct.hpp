// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/msg/monitoramento.hpp"


#ifndef ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__STRUCT_HPP_
#define ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robo_interfaces__msg__Monitoramento __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__msg__Monitoramento __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Monitoramento_
{
  using Type = Monitoramento_<ContainerAllocator>;

  explicit Monitoramento_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nivel_oxigenio = 0.0;
      this->temperatura = 0.0;
    }
  }

  explicit Monitoramento_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nivel_oxigenio = 0.0;
      this->temperatura = 0.0;
    }
  }

  // field types and members
  using _nivel_oxigenio_type =
    double;
  _nivel_oxigenio_type nivel_oxigenio;
  using _temperatura_type =
    double;
  _temperatura_type temperatura;

  // setters for named parameter idiom
  Type & set__nivel_oxigenio(
    const double & _arg)
  {
    this->nivel_oxigenio = _arg;
    return *this;
  }
  Type & set__temperatura(
    const double & _arg)
  {
    this->temperatura = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::msg::Monitoramento_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::msg::Monitoramento_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::msg::Monitoramento_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::msg::Monitoramento_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::msg::Monitoramento_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::msg::Monitoramento_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::msg::Monitoramento_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::msg::Monitoramento_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::msg::Monitoramento_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::msg::Monitoramento_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__msg__Monitoramento
    std::shared_ptr<robo_interfaces::msg::Monitoramento_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__msg__Monitoramento
    std::shared_ptr<robo_interfaces::msg::Monitoramento_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Monitoramento_ & other) const
  {
    if (this->nivel_oxigenio != other.nivel_oxigenio) {
      return false;
    }
    if (this->temperatura != other.temperatura) {
      return false;
    }
    return true;
  }
  bool operator!=(const Monitoramento_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Monitoramento_

// alias to use template instance with default allocator
using Monitoramento =
  robo_interfaces::msg::Monitoramento_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__STRUCT_HPP_
