// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/msg/monitoramento.h"


#ifndef ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__FUNCTIONS_H_
#define ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "robo_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robo_interfaces/msg/detail/monitoramento__struct.h"

/// Initialize msg/Monitoramento message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robo_interfaces__msg__Monitoramento
 * )) before or use
 * robo_interfaces__msg__Monitoramento__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
bool
robo_interfaces__msg__Monitoramento__init(robo_interfaces__msg__Monitoramento * msg);

/// Finalize msg/Monitoramento message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
void
robo_interfaces__msg__Monitoramento__fini(robo_interfaces__msg__Monitoramento * msg);

/// Create msg/Monitoramento message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robo_interfaces__msg__Monitoramento__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
robo_interfaces__msg__Monitoramento *
robo_interfaces__msg__Monitoramento__create(void);

/// Destroy msg/Monitoramento message.
/**
 * It calls
 * robo_interfaces__msg__Monitoramento__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
void
robo_interfaces__msg__Monitoramento__destroy(robo_interfaces__msg__Monitoramento * msg);

/// Check for msg/Monitoramento message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
bool
robo_interfaces__msg__Monitoramento__are_equal(const robo_interfaces__msg__Monitoramento * lhs, const robo_interfaces__msg__Monitoramento * rhs);

/// Copy a msg/Monitoramento message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
bool
robo_interfaces__msg__Monitoramento__copy(
  const robo_interfaces__msg__Monitoramento * input,
  robo_interfaces__msg__Monitoramento * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
const rosidl_type_hash_t *
robo_interfaces__msg__Monitoramento__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
robo_interfaces__msg__Monitoramento__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
const rosidl_runtime_c__type_description__TypeSource *
robo_interfaces__msg__Monitoramento__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robo_interfaces__msg__Monitoramento__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Monitoramento messages.
/**
 * It allocates the memory for the number of elements and calls
 * robo_interfaces__msg__Monitoramento__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
bool
robo_interfaces__msg__Monitoramento__Sequence__init(robo_interfaces__msg__Monitoramento__Sequence * array, size_t size);

/// Finalize array of msg/Monitoramento messages.
/**
 * It calls
 * robo_interfaces__msg__Monitoramento__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
void
robo_interfaces__msg__Monitoramento__Sequence__fini(robo_interfaces__msg__Monitoramento__Sequence * array);

/// Create array of msg/Monitoramento messages.
/**
 * It allocates the memory for the array and calls
 * robo_interfaces__msg__Monitoramento__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
robo_interfaces__msg__Monitoramento__Sequence *
robo_interfaces__msg__Monitoramento__Sequence__create(size_t size);

/// Destroy array of msg/Monitoramento messages.
/**
 * It calls
 * robo_interfaces__msg__Monitoramento__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
void
robo_interfaces__msg__Monitoramento__Sequence__destroy(robo_interfaces__msg__Monitoramento__Sequence * array);

/// Check for msg/Monitoramento message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
bool
robo_interfaces__msg__Monitoramento__Sequence__are_equal(const robo_interfaces__msg__Monitoramento__Sequence * lhs, const robo_interfaces__msg__Monitoramento__Sequence * rhs);

/// Copy an array of msg/Monitoramento messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robo_interfaces
bool
robo_interfaces__msg__Monitoramento__Sequence__copy(
  const robo_interfaces__msg__Monitoramento__Sequence * input,
  robo_interfaces__msg__Monitoramento__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBO_INTERFACES__MSG__DETAIL__MONITORAMENTO__FUNCTIONS_H_
