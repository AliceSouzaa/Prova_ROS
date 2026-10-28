// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robo_interfaces/msg/detail/monitoramento__functions.h"
#include "robo_interfaces/msg/detail/monitoramento__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robo_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Monitoramento_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robo_interfaces::msg::Monitoramento(_init);
}

void Monitoramento_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robo_interfaces::msg::Monitoramento *>(message_memory);
  typed_message->~Monitoramento();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Monitoramento_message_member_array[2] = {
  {
    "nivel_oxigenio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces::msg::Monitoramento, nivel_oxigenio),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperatura",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robo_interfaces::msg::Monitoramento, temperatura),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Monitoramento_message_members = {
  "robo_interfaces::msg",  // message namespace
  "Monitoramento",  // message name
  2,  // number of fields
  sizeof(robo_interfaces::msg::Monitoramento),
  false,  // has_any_key_member_
  Monitoramento_message_member_array,  // message members
  Monitoramento_init_function,  // function to initialize message memory (memory has to be allocated)
  Monitoramento_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Monitoramento_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Monitoramento_message_members,
  get_message_typesupport_handle_function,
  &robo_interfaces__msg__Monitoramento__get_type_hash,
  &robo_interfaces__msg__Monitoramento__get_type_description,
  &robo_interfaces__msg__Monitoramento__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robo_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_interfaces::msg::Monitoramento>()
{
  return &::robo_interfaces::msg::rosidl_typesupport_introspection_cpp::Monitoramento_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robo_interfaces, msg, Monitoramento)() {
  return &::robo_interfaces::msg::rosidl_typesupport_introspection_cpp::Monitoramento_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
