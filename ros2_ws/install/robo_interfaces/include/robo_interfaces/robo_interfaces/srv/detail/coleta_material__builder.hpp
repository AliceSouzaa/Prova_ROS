// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_interfaces:srv/ColetaMaterial.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/srv/coleta_material.hpp"


#ifndef ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__BUILDER_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robo_interfaces/srv/detail/coleta_material__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robo_interfaces
{

namespace srv
{

namespace builder
{

class Init_ColetaMaterial_Request_profundidade
{
public:
  Init_ColetaMaterial_Request_profundidade()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_interfaces::srv::ColetaMaterial_Request profundidade(::robo_interfaces::srv::ColetaMaterial_Request::_profundidade_type arg)
  {
    msg_.profundidade = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::srv::ColetaMaterial_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::srv::ColetaMaterial_Request>()
{
  return robo_interfaces::srv::builder::Init_ColetaMaterial_Request_profundidade();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace srv
{

namespace builder
{

class Init_ColetaMaterial_Response_sucesso
{
public:
  Init_ColetaMaterial_Response_sucesso()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_interfaces::srv::ColetaMaterial_Response sucesso(::robo_interfaces::srv::ColetaMaterial_Response::_sucesso_type arg)
  {
    msg_.sucesso = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::srv::ColetaMaterial_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::srv::ColetaMaterial_Response>()
{
  return robo_interfaces::srv::builder::Init_ColetaMaterial_Response_sucesso();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace srv
{

namespace builder
{

class Init_ColetaMaterial_Event_response
{
public:
  explicit Init_ColetaMaterial_Event_response(::robo_interfaces::srv::ColetaMaterial_Event & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::srv::ColetaMaterial_Event response(::robo_interfaces::srv::ColetaMaterial_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::srv::ColetaMaterial_Event msg_;
};

class Init_ColetaMaterial_Event_request
{
public:
  explicit Init_ColetaMaterial_Event_request(::robo_interfaces::srv::ColetaMaterial_Event & msg)
  : msg_(msg)
  {}
  Init_ColetaMaterial_Event_response request(::robo_interfaces::srv::ColetaMaterial_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ColetaMaterial_Event_response(msg_);
  }

private:
  ::robo_interfaces::srv::ColetaMaterial_Event msg_;
};

class Init_ColetaMaterial_Event_info
{
public:
  Init_ColetaMaterial_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColetaMaterial_Event_request info(::robo_interfaces::srv::ColetaMaterial_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ColetaMaterial_Event_request(msg_);
  }

private:
  ::robo_interfaces::srv::ColetaMaterial_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::srv::ColetaMaterial_Event>()
{
  return robo_interfaces::srv::builder::Init_ColetaMaterial_Event_info();
}

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__BUILDER_HPP_
