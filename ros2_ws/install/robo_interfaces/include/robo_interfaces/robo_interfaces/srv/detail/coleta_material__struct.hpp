// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robo_interfaces:srv/ColetaMaterial.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/srv/coleta_material.hpp"


#ifndef ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__STRUCT_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robo_interfaces__srv__ColetaMaterial_Request __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__srv__ColetaMaterial_Request __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ColetaMaterial_Request_
{
  using Type = ColetaMaterial_Request_<ContainerAllocator>;

  explicit ColetaMaterial_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->profundidade = 0.0;
    }
  }

  explicit ColetaMaterial_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->profundidade = 0.0;
    }
  }

  // field types and members
  using _profundidade_type =
    double;
  _profundidade_type profundidade;

  // setters for named parameter idiom
  Type & set__profundidade(
    const double & _arg)
  {
    this->profundidade = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__srv__ColetaMaterial_Request
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__srv__ColetaMaterial_Request
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColetaMaterial_Request_ & other) const
  {
    if (this->profundidade != other.profundidade) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColetaMaterial_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColetaMaterial_Request_

// alias to use template instance with default allocator
using ColetaMaterial_Request =
  robo_interfaces::srv::ColetaMaterial_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_interfaces


#ifndef _WIN32
# define DEPRECATED__robo_interfaces__srv__ColetaMaterial_Response __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__srv__ColetaMaterial_Response __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ColetaMaterial_Response_
{
  using Type = ColetaMaterial_Response_<ContainerAllocator>;

  explicit ColetaMaterial_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sucesso = false;
    }
  }

  explicit ColetaMaterial_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sucesso = false;
    }
  }

  // field types and members
  using _sucesso_type =
    bool;
  _sucesso_type sucesso;

  // setters for named parameter idiom
  Type & set__sucesso(
    const bool & _arg)
  {
    this->sucesso = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__srv__ColetaMaterial_Response
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__srv__ColetaMaterial_Response
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColetaMaterial_Response_ & other) const
  {
    if (this->sucesso != other.sucesso) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColetaMaterial_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColetaMaterial_Response_

// alias to use template instance with default allocator
using ColetaMaterial_Response =
  robo_interfaces::srv::ColetaMaterial_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robo_interfaces__srv__ColetaMaterial_Event __attribute__((deprecated))
#else
# define DEPRECATED__robo_interfaces__srv__ColetaMaterial_Event __declspec(deprecated)
#endif

namespace robo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ColetaMaterial_Event_
{
  using Type = ColetaMaterial_Event_<ContainerAllocator>;

  explicit ColetaMaterial_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ColetaMaterial_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robo_interfaces::srv::ColetaMaterial_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robo_interfaces::srv::ColetaMaterial_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robo_interfaces__srv__ColetaMaterial_Event
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robo_interfaces__srv__ColetaMaterial_Event
    std::shared_ptr<robo_interfaces::srv::ColetaMaterial_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColetaMaterial_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColetaMaterial_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColetaMaterial_Event_

// alias to use template instance with default allocator
using ColetaMaterial_Event =
  robo_interfaces::srv::ColetaMaterial_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robo_interfaces

namespace robo_interfaces
{

namespace srv
{

struct ColetaMaterial
{
  using Request = robo_interfaces::srv::ColetaMaterial_Request;
  using Response = robo_interfaces::srv::ColetaMaterial_Response;
  using Event = robo_interfaces::srv::ColetaMaterial_Event;
};

}  // namespace srv

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__STRUCT_HPP_
