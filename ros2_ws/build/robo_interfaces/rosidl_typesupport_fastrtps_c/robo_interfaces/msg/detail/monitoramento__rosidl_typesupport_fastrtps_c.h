// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice
#ifndef ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robo_interfaces/msg/detail/monitoramento__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
bool cdr_serialize_robo_interfaces__msg__Monitoramento(
  const robo_interfaces__msg__Monitoramento * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
bool cdr_deserialize_robo_interfaces__msg__Monitoramento(
  eprosima::fastcdr::Cdr &,
  robo_interfaces__msg__Monitoramento * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
size_t get_serialized_size_robo_interfaces__msg__Monitoramento(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
size_t max_serialized_size_robo_interfaces__msg__Monitoramento(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
bool cdr_serialize_key_robo_interfaces__msg__Monitoramento(
  const robo_interfaces__msg__Monitoramento * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
size_t get_serialized_size_key_robo_interfaces__msg__Monitoramento(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
size_t max_serialized_size_key_robo_interfaces__msg__Monitoramento(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robo_interfaces, msg, Monitoramento)();

#ifdef __cplusplus
}
#endif

#endif  // ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
