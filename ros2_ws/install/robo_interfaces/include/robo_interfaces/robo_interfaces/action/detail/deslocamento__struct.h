// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robo_interfaces:action/Deslocamento.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/action/deslocamento.h"


#ifndef ROBO_INTERFACES__ACTION__DETAIL__DESLOCAMENTO__STRUCT_H_
#define ROBO_INTERFACES__ACTION__DETAIL__DESLOCAMENTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_Goal
{
  double latitude;
  double longitude;
  double velocidade_latitudinal;
  double velocidade_longitudinal;
} robo_interfaces__action__Deslocamento_Goal;

// Struct for a sequence of robo_interfaces__action__Deslocamento_Goal.
typedef struct robo_interfaces__action__Deslocamento_Goal__Sequence
{
  robo_interfaces__action__Deslocamento_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_Result
{
  bool sucesso;
  double distancia_percorrida;
} robo_interfaces__action__Deslocamento_Result;

// Struct for a sequence of robo_interfaces__action__Deslocamento_Result.
typedef struct robo_interfaces__action__Deslocamento_Result__Sequence
{
  robo_interfaces__action__Deslocamento_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_Feedback
{
  double latitude_atual;
  double longitude_atual;
} robo_interfaces__action__Deslocamento_Feedback;

// Struct for a sequence of robo_interfaces__action__Deslocamento_Feedback.
typedef struct robo_interfaces__action__Deslocamento_Feedback__Sequence
{
  robo_interfaces__action__Deslocamento_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robo_interfaces/action/detail/deslocamento__struct.h"

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robo_interfaces__action__Deslocamento_Goal goal;
} robo_interfaces__action__Deslocamento_SendGoal_Request;

// Struct for a sequence of robo_interfaces__action__Deslocamento_SendGoal_Request.
typedef struct robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence
{
  robo_interfaces__action__Deslocamento_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robo_interfaces__action__Deslocamento_SendGoal_Response;

// Struct for a sequence of robo_interfaces__action__Deslocamento_SendGoal_Response.
typedef struct robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence
{
  robo_interfaces__action__Deslocamento_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robo_interfaces__action__Deslocamento_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robo_interfaces__action__Deslocamento_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence request;
  robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence response;
} robo_interfaces__action__Deslocamento_SendGoal_Event;

// Struct for a sequence of robo_interfaces__action__Deslocamento_SendGoal_Event.
typedef struct robo_interfaces__action__Deslocamento_SendGoal_Event__Sequence
{
  robo_interfaces__action__Deslocamento_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robo_interfaces__action__Deslocamento_GetResult_Request;

// Struct for a sequence of robo_interfaces__action__Deslocamento_GetResult_Request.
typedef struct robo_interfaces__action__Deslocamento_GetResult_Request__Sequence
{
  robo_interfaces__action__Deslocamento_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robo_interfaces/action/detail/deslocamento__struct.h"

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_GetResult_Response
{
  int8_t status;
  robo_interfaces__action__Deslocamento_Result result;
} robo_interfaces__action__Deslocamento_GetResult_Response;

// Struct for a sequence of robo_interfaces__action__Deslocamento_GetResult_Response.
typedef struct robo_interfaces__action__Deslocamento_GetResult_Response__Sequence
{
  robo_interfaces__action__Deslocamento_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robo_interfaces__action__Deslocamento_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robo_interfaces__action__Deslocamento_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robo_interfaces__action__Deslocamento_GetResult_Request__Sequence request;
  robo_interfaces__action__Deslocamento_GetResult_Response__Sequence response;
} robo_interfaces__action__Deslocamento_GetResult_Event;

// Struct for a sequence of robo_interfaces__action__Deslocamento_GetResult_Event.
typedef struct robo_interfaces__action__Deslocamento_GetResult_Event__Sequence
{
  robo_interfaces__action__Deslocamento_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robo_interfaces/action/detail/deslocamento__struct.h"

/// Struct defined in action/Deslocamento in the package robo_interfaces.
typedef struct robo_interfaces__action__Deslocamento_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robo_interfaces__action__Deslocamento_Feedback feedback;
} robo_interfaces__action__Deslocamento_FeedbackMessage;

// Struct for a sequence of robo_interfaces__action__Deslocamento_FeedbackMessage.
typedef struct robo_interfaces__action__Deslocamento_FeedbackMessage__Sequence
{
  robo_interfaces__action__Deslocamento_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robo_interfaces__action__Deslocamento_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBO_INTERFACES__ACTION__DETAIL__DESLOCAMENTO__STRUCT_H_
