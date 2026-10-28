// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/msg/monitoramento.hpp"


#ifndef ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__TRAITS_HPP_
#define ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robo_interfaces/msg/detail/monitoramento__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robo_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Monitoramento & msg,
  std::ostream & out)
{
  out << "{";
  // member: nivel_oxigenio
  {
    out << "nivel_oxigenio: ";
    rosidl_generator_traits::value_to_yaml(msg.nivel_oxigenio, out);
    out << ", ";
  }

  // member: temperatura
  {
    out << "temperatura: ";
    rosidl_generator_traits::value_to_yaml(msg.temperatura, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Monitoramento & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nivel_oxigenio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nivel_oxigenio: ";
    rosidl_generator_traits::value_to_yaml(msg.nivel_oxigenio, out);
    out << "\n";
  }

  // member: temperatura
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperatura: ";
    rosidl_generator_traits::value_to_yaml(msg.temperatura, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Monitoramento & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robo_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robo_interfaces::msg::Monitoramento & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::msg::Monitoramento & msg)
{
  return robo_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::msg::Monitoramento>()
{
  return "robo_interfaces::msg::Monitoramento";
}

template<>
inline const char * name<robo_interfaces::msg::Monitoramento>()
{
  return "robo_interfaces/msg/Monitoramento";
}

template<>
struct has_fixed_size<robo_interfaces::msg::Monitoramento>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_interfaces::msg::Monitoramento>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_interfaces::msg::Monitoramento>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__TRAITS_HPP_
