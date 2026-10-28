// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice

#include "robo_interfaces/msg/detail/monitoramento__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
const rosidl_type_hash_t *
robo_interfaces__msg__Monitoramento__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0x84, 0x4d, 0x5e, 0xf2, 0x47, 0x9c, 0xb3,
      0x0c, 0x0f, 0x02, 0x5f, 0x2f, 0x9a, 0x67, 0x67,
      0x1b, 0x85, 0x74, 0xf0, 0x45, 0x81, 0x2d, 0x18,
      0x46, 0x7f, 0xd6, 0x47, 0xda, 0xcc, 0xf1, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robo_interfaces__msg__Monitoramento__TYPE_NAME[] = "robo_interfaces/msg/Monitoramento";

// Define type names, field names, and default values
static char robo_interfaces__msg__Monitoramento__FIELD_NAME__nivel_oxigenio[] = "nivel_oxigenio";
static char robo_interfaces__msg__Monitoramento__FIELD_NAME__temperatura[] = "temperatura";

static rosidl_runtime_c__type_description__Field robo_interfaces__msg__Monitoramento__FIELDS[] = {
  {
    {robo_interfaces__msg__Monitoramento__FIELD_NAME__nivel_oxigenio, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robo_interfaces__msg__Monitoramento__FIELD_NAME__temperatura, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robo_interfaces__msg__Monitoramento__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robo_interfaces__msg__Monitoramento__TYPE_NAME, 33, 33},
      {robo_interfaces__msg__Monitoramento__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 nivel_oxigenio\n"
  "float64 temperatura";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robo_interfaces__msg__Monitoramento__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robo_interfaces__msg__Monitoramento__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robo_interfaces__msg__Monitoramento__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robo_interfaces__msg__Monitoramento__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
