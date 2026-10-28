// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/msg/monitoramento.h"


#ifndef ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__STRUCT_H_
#define ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Monitoramento in the package robo_interfaces.
typedef struct robo_interfaces__msg__Monitoramento
{
  double nivel_oxigenio;
  double temperatura;
} robo_interfaces__msg__Monitoramento;

// Struct for a sequence of robo_interfaces__msg__Monitoramento.
typedef struct robo_interfaces__msg__Monitoramento__Sequence
{
  robo_interfaces__msg__Monitoramento * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__msg__Monitoramento__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__STRUCT_H_
