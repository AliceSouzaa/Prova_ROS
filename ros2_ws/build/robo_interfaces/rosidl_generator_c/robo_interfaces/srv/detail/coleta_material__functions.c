// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robo_interfaces:srv/ColetaMaterial.idl
// generated code does not contain a copyright notice
#include "robo_interfaces/srv/detail/coleta_material__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robo_interfaces__srv__ColetaMaterial_Request__init(robo_interfaces__srv__ColetaMaterial_Request * msg)
{
  if (!msg) {
    return false;
  }
  // profundidade
  return true;
}

void
robo_interfaces__srv__ColetaMaterial_Request__fini(robo_interfaces__srv__ColetaMaterial_Request * msg)
{
  if (!msg) {
    return;
  }
  // profundidade
}

bool
robo_interfaces__srv__ColetaMaterial_Request__are_equal(const robo_interfaces__srv__ColetaMaterial_Request * lhs, const robo_interfaces__srv__ColetaMaterial_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // profundidade
  if (lhs->profundidade != rhs->profundidade) {
    return false;
  }
  return true;
}

bool
robo_interfaces__srv__ColetaMaterial_Request__copy(
  const robo_interfaces__srv__ColetaMaterial_Request * input,
  robo_interfaces__srv__ColetaMaterial_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // profundidade
  output->profundidade = input->profundidade;
  return true;
}

robo_interfaces__srv__ColetaMaterial_Request *
robo_interfaces__srv__ColetaMaterial_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Request * msg = (robo_interfaces__srv__ColetaMaterial_Request *)allocator.allocate(sizeof(robo_interfaces__srv__ColetaMaterial_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_interfaces__srv__ColetaMaterial_Request));
  bool success = robo_interfaces__srv__ColetaMaterial_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo_interfaces__srv__ColetaMaterial_Request__destroy(robo_interfaces__srv__ColetaMaterial_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo_interfaces__srv__ColetaMaterial_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo_interfaces__srv__ColetaMaterial_Request__Sequence__init(robo_interfaces__srv__ColetaMaterial_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robo_interfaces__srv__ColetaMaterial_Request)) {
      return false;
    }
    data = (robo_interfaces__srv__ColetaMaterial_Request *)allocator.zero_allocate(size, sizeof(robo_interfaces__srv__ColetaMaterial_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_interfaces__srv__ColetaMaterial_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_interfaces__srv__ColetaMaterial_Request__fini(&data[i - 1]);
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
robo_interfaces__srv__ColetaMaterial_Request__Sequence__fini(robo_interfaces__srv__ColetaMaterial_Request__Sequence * array)
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
      robo_interfaces__srv__ColetaMaterial_Request__fini(&array->data[i]);
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

robo_interfaces__srv__ColetaMaterial_Request__Sequence *
robo_interfaces__srv__ColetaMaterial_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Request__Sequence * array = (robo_interfaces__srv__ColetaMaterial_Request__Sequence *)allocator.allocate(sizeof(robo_interfaces__srv__ColetaMaterial_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo_interfaces__srv__ColetaMaterial_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo_interfaces__srv__ColetaMaterial_Request__Sequence__destroy(robo_interfaces__srv__ColetaMaterial_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo_interfaces__srv__ColetaMaterial_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo_interfaces__srv__ColetaMaterial_Request__Sequence__are_equal(const robo_interfaces__srv__ColetaMaterial_Request__Sequence * lhs, const robo_interfaces__srv__ColetaMaterial_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo_interfaces__srv__ColetaMaterial_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo_interfaces__srv__ColetaMaterial_Request__Sequence__copy(
  const robo_interfaces__srv__ColetaMaterial_Request__Sequence * input,
  robo_interfaces__srv__ColetaMaterial_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robo_interfaces__srv__ColetaMaterial_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robo_interfaces__srv__ColetaMaterial_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo_interfaces__srv__ColetaMaterial_Request * data =
      (robo_interfaces__srv__ColetaMaterial_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo_interfaces__srv__ColetaMaterial_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo_interfaces__srv__ColetaMaterial_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo_interfaces__srv__ColetaMaterial_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robo_interfaces__srv__ColetaMaterial_Response__init(robo_interfaces__srv__ColetaMaterial_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sucesso
  return true;
}

void
robo_interfaces__srv__ColetaMaterial_Response__fini(robo_interfaces__srv__ColetaMaterial_Response * msg)
{
  if (!msg) {
    return;
  }
  // sucesso
}

bool
robo_interfaces__srv__ColetaMaterial_Response__are_equal(const robo_interfaces__srv__ColetaMaterial_Response * lhs, const robo_interfaces__srv__ColetaMaterial_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sucesso
  if (lhs->sucesso != rhs->sucesso) {
    return false;
  }
  return true;
}

bool
robo_interfaces__srv__ColetaMaterial_Response__copy(
  const robo_interfaces__srv__ColetaMaterial_Response * input,
  robo_interfaces__srv__ColetaMaterial_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sucesso
  output->sucesso = input->sucesso;
  return true;
}

robo_interfaces__srv__ColetaMaterial_Response *
robo_interfaces__srv__ColetaMaterial_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Response * msg = (robo_interfaces__srv__ColetaMaterial_Response *)allocator.allocate(sizeof(robo_interfaces__srv__ColetaMaterial_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_interfaces__srv__ColetaMaterial_Response));
  bool success = robo_interfaces__srv__ColetaMaterial_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo_interfaces__srv__ColetaMaterial_Response__destroy(robo_interfaces__srv__ColetaMaterial_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo_interfaces__srv__ColetaMaterial_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo_interfaces__srv__ColetaMaterial_Response__Sequence__init(robo_interfaces__srv__ColetaMaterial_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robo_interfaces__srv__ColetaMaterial_Response)) {
      return false;
    }
    data = (robo_interfaces__srv__ColetaMaterial_Response *)allocator.zero_allocate(size, sizeof(robo_interfaces__srv__ColetaMaterial_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_interfaces__srv__ColetaMaterial_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_interfaces__srv__ColetaMaterial_Response__fini(&data[i - 1]);
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
robo_interfaces__srv__ColetaMaterial_Response__Sequence__fini(robo_interfaces__srv__ColetaMaterial_Response__Sequence * array)
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
      robo_interfaces__srv__ColetaMaterial_Response__fini(&array->data[i]);
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

robo_interfaces__srv__ColetaMaterial_Response__Sequence *
robo_interfaces__srv__ColetaMaterial_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Response__Sequence * array = (robo_interfaces__srv__ColetaMaterial_Response__Sequence *)allocator.allocate(sizeof(robo_interfaces__srv__ColetaMaterial_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo_interfaces__srv__ColetaMaterial_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo_interfaces__srv__ColetaMaterial_Response__Sequence__destroy(robo_interfaces__srv__ColetaMaterial_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo_interfaces__srv__ColetaMaterial_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo_interfaces__srv__ColetaMaterial_Response__Sequence__are_equal(const robo_interfaces__srv__ColetaMaterial_Response__Sequence * lhs, const robo_interfaces__srv__ColetaMaterial_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo_interfaces__srv__ColetaMaterial_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo_interfaces__srv__ColetaMaterial_Response__Sequence__copy(
  const robo_interfaces__srv__ColetaMaterial_Response__Sequence * input,
  robo_interfaces__srv__ColetaMaterial_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robo_interfaces__srv__ColetaMaterial_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robo_interfaces__srv__ColetaMaterial_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo_interfaces__srv__ColetaMaterial_Response * data =
      (robo_interfaces__srv__ColetaMaterial_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo_interfaces__srv__ColetaMaterial_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo_interfaces__srv__ColetaMaterial_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo_interfaces__srv__ColetaMaterial_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "robo_interfaces/srv/detail/coleta_material__functions.h"

bool
robo_interfaces__srv__ColetaMaterial_Event__init(robo_interfaces__srv__ColetaMaterial_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    robo_interfaces__srv__ColetaMaterial_Event__fini(msg);
    return false;
  }
  // request
  if (!robo_interfaces__srv__ColetaMaterial_Request__Sequence__init(&msg->request, 0)) {
    robo_interfaces__srv__ColetaMaterial_Event__fini(msg);
    return false;
  }
  // response
  if (!robo_interfaces__srv__ColetaMaterial_Response__Sequence__init(&msg->response, 0)) {
    robo_interfaces__srv__ColetaMaterial_Event__fini(msg);
    return false;
  }
  return true;
}

void
robo_interfaces__srv__ColetaMaterial_Event__fini(robo_interfaces__srv__ColetaMaterial_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  robo_interfaces__srv__ColetaMaterial_Request__Sequence__fini(&msg->request);
  // response
  robo_interfaces__srv__ColetaMaterial_Response__Sequence__fini(&msg->response);
}

bool
robo_interfaces__srv__ColetaMaterial_Event__are_equal(const robo_interfaces__srv__ColetaMaterial_Event * lhs, const robo_interfaces__srv__ColetaMaterial_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!robo_interfaces__srv__ColetaMaterial_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!robo_interfaces__srv__ColetaMaterial_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
robo_interfaces__srv__ColetaMaterial_Event__copy(
  const robo_interfaces__srv__ColetaMaterial_Event * input,
  robo_interfaces__srv__ColetaMaterial_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!robo_interfaces__srv__ColetaMaterial_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!robo_interfaces__srv__ColetaMaterial_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

robo_interfaces__srv__ColetaMaterial_Event *
robo_interfaces__srv__ColetaMaterial_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Event * msg = (robo_interfaces__srv__ColetaMaterial_Event *)allocator.allocate(sizeof(robo_interfaces__srv__ColetaMaterial_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robo_interfaces__srv__ColetaMaterial_Event));
  bool success = robo_interfaces__srv__ColetaMaterial_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robo_interfaces__srv__ColetaMaterial_Event__destroy(robo_interfaces__srv__ColetaMaterial_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robo_interfaces__srv__ColetaMaterial_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robo_interfaces__srv__ColetaMaterial_Event__Sequence__init(robo_interfaces__srv__ColetaMaterial_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robo_interfaces__srv__ColetaMaterial_Event)) {
      return false;
    }
    data = (robo_interfaces__srv__ColetaMaterial_Event *)allocator.zero_allocate(size, sizeof(robo_interfaces__srv__ColetaMaterial_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robo_interfaces__srv__ColetaMaterial_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robo_interfaces__srv__ColetaMaterial_Event__fini(&data[i - 1]);
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
robo_interfaces__srv__ColetaMaterial_Event__Sequence__fini(robo_interfaces__srv__ColetaMaterial_Event__Sequence * array)
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
      robo_interfaces__srv__ColetaMaterial_Event__fini(&array->data[i]);
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

robo_interfaces__srv__ColetaMaterial_Event__Sequence *
robo_interfaces__srv__ColetaMaterial_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robo_interfaces__srv__ColetaMaterial_Event__Sequence * array = (robo_interfaces__srv__ColetaMaterial_Event__Sequence *)allocator.allocate(sizeof(robo_interfaces__srv__ColetaMaterial_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robo_interfaces__srv__ColetaMaterial_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robo_interfaces__srv__ColetaMaterial_Event__Sequence__destroy(robo_interfaces__srv__ColetaMaterial_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robo_interfaces__srv__ColetaMaterial_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robo_interfaces__srv__ColetaMaterial_Event__Sequence__are_equal(const robo_interfaces__srv__ColetaMaterial_Event__Sequence * lhs, const robo_interfaces__srv__ColetaMaterial_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robo_interfaces__srv__ColetaMaterial_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robo_interfaces__srv__ColetaMaterial_Event__Sequence__copy(
  const robo_interfaces__srv__ColetaMaterial_Event__Sequence * input,
  robo_interfaces__srv__ColetaMaterial_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robo_interfaces__srv__ColetaMaterial_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robo_interfaces__srv__ColetaMaterial_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robo_interfaces__srv__ColetaMaterial_Event * data =
      (robo_interfaces__srv__ColetaMaterial_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robo_interfaces__srv__ColetaMaterial_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robo_interfaces__srv__ColetaMaterial_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robo_interfaces__srv__ColetaMaterial_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
