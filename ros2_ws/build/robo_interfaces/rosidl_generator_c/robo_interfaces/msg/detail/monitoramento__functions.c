// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_interfaces:msg/Monitoramento.idl
// generated code does not contain a copyright notice
#include "robo_interfaces/msg/detail/monitoramento__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robo_interfaces__msg__Monitoramento__init(robo_interfaces__msg__Monitoramento * msg)
{
  if (!msg) {
    return false;
  }
  // nivel_oxigenio
  // temperatura
  return true;
}

void
robo_interfaces__msg__Monitoramento__fini(robo_interfaces__msg__Monitoramento * msg)
{
  if (!msg) {
    return;
  }
  // nivel_oxigenio
  // temperatura
}

bool
robo_interfaces__msg__Monitoramento__are_equal(const robo_interfaces__msg__Monitoramento * lhs, const robo_interfaces__msg__Monitoramento * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nivel_oxigenio
  if (lhs->nivel_oxigenio != rhs->nivel_oxigenio) {
    return false;
  }
  // temperatura
  if (lhs->temperatura != rhs->temperatura) {
    return false;
  }
  return true;
}

bool
robo_interfaces__msg__Monitoramento__copy(
  const robo_interfaces__msg__Monitoramento * input,
  robo_interfaces__msg__Monitoramento * output)
{
  if (!input || !output) {
    return false;
  }
  // nivel_oxigenio
  output->nivel_oxigenio = input->nivel_oxigenio;
  // temperatura
  output->temperatura = input->temperatura;
  return true;
}

robo_interfaces__msg__Monitoramento *
robo_interfaces__msg__Monitoramento__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__msg__Monitoramento * msg = (robo_interfaces__msg__Monitoramento *)allocator.allocate(sizeof(robo_interfaces__msg__Monitoramento), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_interfaces__msg__Monitoramento));
  bool success = robo_interfaces__msg__Monitoramento__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo_interfaces__msg__Monitoramento__destroy(robo_interfaces__msg__Monitoramento * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo_interfaces__msg__Monitoramento__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo_interfaces__msg__Monitoramento__Sequence__init(robo_interfaces__msg__Monitoramento__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__msg__Monitoramento * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robo_interfaces__msg__Monitoramento)) {
      return false;
    }
    data = (robo_interfaces__msg__Monitoramento *)allocator.zero_allocate(size, sizeof(robo_interfaces__msg__Monitoramento), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_interfaces__msg__Monitoramento__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_interfaces__msg__Monitoramento__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robo_interfaces__msg__Monitoramento__Sequence__fini(robo_interfaces__msg__Monitoramento__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robo_interfaces__msg__Monitoramento__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robo_interfaces__msg__Monitoramento__Sequence *
robo_interfaces__msg__Monitoramento__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__msg__Monitoramento__Sequence * array = (robo_interfaces__msg__Monitoramento__Sequence *)allocator.allocate(sizeof(robo_interfaces__msg__Monitoramento__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo_interfaces__msg__Monitoramento__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo_interfaces__msg__Monitoramento__Sequence__destroy(robo_interfaces__msg__Monitoramento__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo_interfaces__msg__Monitoramento__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo_interfaces__msg__Monitoramento__Sequence__are_equal(const robo_interfaces__msg__Monitoramento__Sequence * lhs, const robo_interfaces__msg__Monitoramento__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo_interfaces__msg__Monitoramento__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo_interfaces__msg__Monitoramento__Sequence__copy(
  const robo_interfaces__msg__Monitoramento__Sequence * input,
  robo_interfaces__msg__Monitoramento__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robo_interfaces__msg__Monitoramento)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robo_interfaces__msg__Monitoramento);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo_interfaces__msg__Monitoramento * data =
      (robo_interfaces__msg__Monitoramento *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo_interfaces__msg__Monitoramento__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo_interfaces__msg__Monitoramento__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo_interfaces__msg__Monitoramento__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
