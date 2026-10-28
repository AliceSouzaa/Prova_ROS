// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/msg/monitoramento.hpp"


#ifndef ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__BUILDER_HPP_
#define ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robo_interfaces/msg/detail/monitoramento__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robo_interfaces
{

namespace msg
{

namespace builder
{

class Init_Monitoramento_temperatura
{
public:
  explicit Init_Monitoramento_temperatura(::robo_interfaces::msg::Monitoramento & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::msg::Monitoramento temperatura(::robo_interfaces::msg::Monitoramento::_temperatura_type arg)
  {
    msg_.temperatura = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::msg::Monitoramento msg_;
};

class Init_Monitoramento_nivel_oxigenio
{
public:
  Init_Monitoramento_nivel_oxigenio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Monitoramento_temperatura nivel_oxigenio(::robo_interfaces::msg::Monitoramento::_nivel_oxigenio_type arg)
  {
    msg_.nivel_oxigenio = std::move(arg);
    return Init_Monitoramento_temperatura(msg_);
  }

private:
  ::robo_interfaces::msg::Monitoramento msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::msg::Monitoramento>()
{
  return robo_interfaces::msg::builder::Init_Monitoramento_nivel_oxigenio();
}

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__BUILDER_HPP_
