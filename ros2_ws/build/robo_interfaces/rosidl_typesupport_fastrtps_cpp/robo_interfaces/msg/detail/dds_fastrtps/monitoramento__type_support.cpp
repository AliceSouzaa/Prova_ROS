// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice
#include "robo_interfaces/msg/detail/monitoramento__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robo_interfaces/msg/detail/monitoramento__functions.h"
#include "robo_interfaces/msg/detail/monitoramento__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robo_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_interfaces
cdr_serialize(
  const robo_interfaces::msg::Monitoramento & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nivel_oxigenio
  cdr << ros_message.nivel_oxigenio;

  // Member: temperatura
  cdr << ros_message.temperatura;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robo_interfaces::msg::Monitoramento & ros_message)
{
  // Member: nivel_oxigenio
  cdr >> ros_message.nivel_oxigenio;

  // Member: temperatura
  cdr >> ros_message.temperatura;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_interfaces
get_serialized_size(
  const robo_interfaces::msg::Monitoramento & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nivel_oxigenio
  {
    size_t item_size = sizeof(ros_message.nivel_oxigenio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperatura
  {
    size_t item_size = sizeof(ros_message.temperatura);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_interfaces
max_serialized_size_Monitoramento(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: nivel_oxigenio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: temperatura
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robo_interfaces::msg::Monitoramento;
    is_plain =
      (
      offsetof(DataType, temperatura) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_interfaces
cdr_serialize_key(
  const robo_interfaces::msg::Monitoramento & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nivel_oxigenio
  cdr << ros_message.nivel_oxigenio;

  // Member: temperatura
  cdr << ros_message.temperatura;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_interfaces
get_serialized_size_key(
  const robo_interfaces::msg::Monitoramento & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nivel_oxigenio
  {
    size_t item_size = sizeof(ros_message.nivel_oxigenio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: temperatura
  {
    size_t item_size = sizeof(ros_message.temperatura);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robo_interfaces
max_serialized_size_key_Monitoramento(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: nivel_oxigenio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperatura
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robo_interfaces::msg::Monitoramento;
    is_plain =
      (
      offsetof(DataType, temperatura) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Monitoramento__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robo_interfaces::msg::Monitoramento *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Monitoramento__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robo_interfaces::msg::Monitoramento *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Monitoramento__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robo_interfaces::msg::Monitoramento *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Monitoramento__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Monitoramento(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Monitoramento__callbacks = {
  "robo_interfaces::msg",
  "Monitoramento",
  _Monitoramento__cdr_serialize,
  _Monitoramento__cdr_deserialize,
  _Monitoramento__get_serialized_size,
  _Monitoramento__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Monitoramento__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Monitoramento__callbacks,
  get_message_typesupport_handle_function,
  &robo_interfaces__msg__Monitoramento__get_type_hash,
  &robo_interfaces__msg__Monitoramento__get_type_description,
  &robo_interfaces__msg__Monitoramento__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robo_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robo_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robo_interfaces::msg::Monitoramento>()
{
  return &robo_interfaces::msg::typesupport_fastrtps_cpp::_Monitoramento__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robo_interfaces, msg, Monitoramento)() {
  return &robo_interfaces::msg::typesupport_fastrtps_cpp::_Monitoramento__handle;
}

#ifdef __cplusplus
}
#endif
