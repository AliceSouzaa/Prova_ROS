// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice
#include "robo_interfaces/msg/detail/monitoramento__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_interfaces/msg/detail/monitoramento__struct.h"
#include "robo_interfaces/msg/detail/monitoramento__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Monitoramento__ros_msg_type = robo_interfaces__msg__Monitoramento;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
bool cdr_serialize_robo_interfaces__msg__Monitoramento(
  const robo_interfaces__msg__Monitoramento * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: nivel_oxigenio
  {
    cdr << ros_message->nivel_oxigenio;
  }

  // Field name: temperatura
  {
    cdr << ros_message->temperatura;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
bool cdr_deserialize_robo_interfaces__msg__Monitoramento(
  eprosima::fastcdr::Cdr & cdr,
  robo_interfaces__msg__Monitoramento * ros_message)
{
  // Field name: nivel_oxigenio
  {
    cdr >> ros_message->nivel_oxigenio;
  }

  // Field name: temperatura
  {
    cdr >> ros_message->temperatura;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
size_t get_serialized_size_robo_interfaces__msg__Monitoramento(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Monitoramento__ros_msg_type * ros_message = static_cast<const _Monitoramento__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: nivel_oxigenio
  {
    size_t item_size = sizeof(ros_message->nivel_oxigenio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperatura
  {
    size_t item_size = sizeof(ros_message->temperatura);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
size_t max_serialized_size_robo_interfaces__msg__Monitoramento(
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

  // Field name: nivel_oxigenio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: temperatura
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
    using DataType = robo_interfaces__msg__Monitoramento;
    is_plain =
      (
      offsetof(DataType, temperatura) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
bool cdr_serialize_key_robo_interfaces__msg__Monitoramento(
  const robo_interfaces__msg__Monitoramento * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: nivel_oxigenio
  {
    cdr << ros_message->nivel_oxigenio;
  }

  // Field name: temperatura
  {
    cdr << ros_message->temperatura;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
size_t get_serialized_size_key_robo_interfaces__msg__Monitoramento(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Monitoramento__ros_msg_type * ros_message = static_cast<const _Monitoramento__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: nivel_oxigenio
  {
    size_t item_size = sizeof(ros_message->nivel_oxigenio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: temperatura
  {
    size_t item_size = sizeof(ros_message->temperatura);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
size_t max_serialized_size_key_robo_interfaces__msg__Monitoramento(
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
  // Field name: nivel_oxigenio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: temperatura
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
    using DataType = robo_interfaces__msg__Monitoramento;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robo_interfaces__msg__Monitoramento * ros_message = static_cast<const robo_interfaces__msg__Monitoramento *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robo_interfaces__msg__Monitoramento(ros_message, cdr);
}

static bool _Monitoramento__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robo_interfaces__msg__Monitoramento * ros_message = static_cast<robo_interfaces__msg__Monitoramento *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robo_interfaces__msg__Monitoramento(cdr, ros_message);
}

static uint32_t _Monitoramento__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robo_interfaces__msg__Monitoramento(
      untyped_ros_message, 0));
}

static size_t _Monitoramento__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robo_interfaces__msg__Monitoramento(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Monitoramento = {
  "robo_interfaces::msg",
  "Monitoramento",
  _Monitoramento__cdr_serialize,
  _Monitoramento__cdr_deserialize,
  _Monitoramento__get_serialized_size,
  _Monitoramento__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Monitoramento__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Monitoramento,
  get_message_typesupport_handle_function,
  &robo_interfaces__msg__Monitoramento__get_type_hash,
  &robo_interfaces__msg__Monitoramento__get_type_description,
  &robo_interfaces__msg__Monitoramento__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_interfaces, msg, Monitoramento)() {
  return &_Monitoramento__type_support;
}

#if defined(__cplusplus)
}
#endif
