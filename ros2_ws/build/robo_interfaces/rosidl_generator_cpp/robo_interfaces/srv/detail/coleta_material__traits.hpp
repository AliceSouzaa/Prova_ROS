// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robo_interfaces:srv/ColetaMaterial.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/srv/coleta_material.hpp"


#ifndef ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__TRAITS_HPP_
#define ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robo_interfaces/srv/detail/coleta_material__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ColetaMaterial_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: profundidade
  {
    out << "profundidade: ";
    rosidl_generator_traits::value_to_yaml(msg.profundidade, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ColetaMaterial_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: profundidade
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profundidade: ";
    rosidl_generator_traits::value_to_yaml(msg.profundidade, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ColetaMaterial_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robo_interfaces::srv::ColetaMaterial_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::srv::ColetaMaterial_Request & msg)
{
  return robo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::srv::ColetaMaterial_Request>()
{
  return "robo_interfaces::srv::ColetaMaterial_Request";
}

template<>
inline const char * name<robo_interfaces::srv::ColetaMaterial_Request>()
{
  return "robo_interfaces/srv/ColetaMaterial_Request";
}

template<>
struct has_fixed_size<robo_interfaces::srv::ColetaMaterial_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_interfaces::srv::ColetaMaterial_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_interfaces::srv::ColetaMaterial_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ColetaMaterial_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sucesso
  {
    out << "sucesso: ";
    rosidl_generator_traits::value_to_yaml(msg.sucesso, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ColetaMaterial_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sucesso
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sucesso: ";
    rosidl_generator_traits::value_to_yaml(msg.sucesso, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ColetaMaterial_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robo_interfaces::srv::ColetaMaterial_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::srv::ColetaMaterial_Response & msg)
{
  return robo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::srv::ColetaMaterial_Response>()
{
  return "robo_interfaces::srv::ColetaMaterial_Response";
}

template<>
inline const char * name<robo_interfaces::srv::ColetaMaterial_Response>()
{
  return "robo_interfaces/srv/ColetaMaterial_Response";
}

template<>
struct has_fixed_size<robo_interfaces::srv::ColetaMaterial_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robo_interfaces::srv::ColetaMaterial_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robo_interfaces::srv::ColetaMaterial_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ColetaMaterial_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ColetaMaterial_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ColetaMaterial_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robo_interfaces::srv::ColetaMaterial_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robo_interfaces::srv::ColetaMaterial_Event & msg)
{
  return robo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robo_interfaces::srv::ColetaMaterial_Event>()
{
  return "robo_interfaces::srv::ColetaMaterial_Event";
}

template<>
inline const char * name<robo_interfaces::srv::ColetaMaterial_Event>()
{
  return "robo_interfaces/srv/ColetaMaterial_Event";
}

template<>
struct has_fixed_size<robo_interfaces::srv::ColetaMaterial_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robo_interfaces::srv::ColetaMaterial_Event>
  : std::integral_constant<bool, has_bounded_size<robo_interfaces::srv::ColetaMaterial_Request>::value && has_bounded_size<robo_interfaces::srv::ColetaMaterial_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robo_interfaces::srv::ColetaMaterial_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robo_interfaces::srv::ColetaMaterial>()
{
  return "robo_interfaces::srv::ColetaMaterial";
}

template<>
inline const char * name<robo_interfaces::srv::ColetaMaterial>()
{
  return "robo_interfaces/srv/ColetaMaterial";
}

template<>
struct has_fixed_size<robo_interfaces::srv::ColetaMaterial>
  : std::integral_constant<
    bool,
    has_fixed_size<robo_interfaces::srv::ColetaMaterial_Request>::value &&
    has_fixed_size<robo_interfaces::srv::ColetaMaterial_Response>::value
  >
{
};

template<>
struct has_bounded_size<robo_interfaces::srv::ColetaMaterial>
  : std::integral_constant<
    bool,
    has_bounded_size<robo_interfaces::srv::ColetaMaterial_Request>::value &&
    has_bounded_size<robo_interfaces::srv::ColetaMaterial_Response>::value
  >
{
};

template<>
struct is_service<robo_interfaces::srv::ColetaMaterial>
  : std::true_type
{
};

template<>
struct is_service_request<robo_interfaces::srv::ColetaMaterial_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robo_interfaces::srv::ColetaMaterial_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__TRAITS_HPP_
