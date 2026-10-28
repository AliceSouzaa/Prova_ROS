// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_interfaces:srv/ColetaMaterial.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/srv/coleta_material.h"


#ifndef ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__STRUCT_H_
#define ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ColetaMaterial in the package robo_interfaces.
typedef struct robo_interfaces__srv__ColetaMaterial_Request
{
  double profundidade;
} robo_interfaces__srv__ColetaMaterial_Request;

// Struct for a sequence of robo_interfaces__srv__ColetaMaterial_Request.
typedef struct robo_interfaces__srv__ColetaMaterial_Request__Sequence
{
  robo_interfaces__srv__ColetaMaterial_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__srv__ColetaMaterial_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ColetaMaterial in the package robo_interfaces.
typedef struct robo_interfaces__srv__ColetaMaterial_Response
{
  bool sucesso;
} robo_interfaces__srv__ColetaMaterial_Response;

// Struct for a sequence of robo_interfaces__srv__ColetaMaterial_Response.
typedef struct robo_interfaces__srv__ColetaMaterial_Response__Sequence
{
  robo_interfaces__srv__ColetaMaterial_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__srv__ColetaMaterial_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robo_interfaces__srv__ColetaMaterial_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robo_interfaces__srv__ColetaMaterial_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ColetaMaterial in the package robo_interfaces.
typedef struct robo_interfaces__srv__ColetaMaterial_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robo_interfaces__srv__ColetaMaterial_Request__Sequence request;
  robo_interfaces__srv__ColetaMaterial_Response__Sequence response;
} robo_interfaces__srv__ColetaMaterial_Event;

// Struct for a sequence of robo_interfaces__srv__ColetaMaterial_Event.
typedef struct robo_interfaces__srv__ColetaMaterial_Event__Sequence
{
  robo_interfaces__srv__ColetaMaterial_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__srv__ColetaMaterial_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_INTERFACES__SRV__DETAIL__COLETA_MATERIAL__STRUCT_H_
