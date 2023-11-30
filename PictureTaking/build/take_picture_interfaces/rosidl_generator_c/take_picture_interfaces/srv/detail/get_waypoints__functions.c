// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice
#include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
take_picture_interfaces__srv__GetWaypoints_Request__init(take_picture_interfaces__srv__GetWaypoints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
take_picture_interfaces__srv__GetWaypoints_Request__fini(take_picture_interfaces__srv__GetWaypoints_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
take_picture_interfaces__srv__GetWaypoints_Request__are_equal(const take_picture_interfaces__srv__GetWaypoints_Request * lhs, const take_picture_interfaces__srv__GetWaypoints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
take_picture_interfaces__srv__GetWaypoints_Request__copy(
  const take_picture_interfaces__srv__GetWaypoints_Request * input,
  take_picture_interfaces__srv__GetWaypoints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

take_picture_interfaces__srv__GetWaypoints_Request *
take_picture_interfaces__srv__GetWaypoints_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Request * msg = (take_picture_interfaces__srv__GetWaypoints_Request *)allocator.allocate(sizeof(take_picture_interfaces__srv__GetWaypoints_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(take_picture_interfaces__srv__GetWaypoints_Request));
  bool success = take_picture_interfaces__srv__GetWaypoints_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
take_picture_interfaces__srv__GetWaypoints_Request__destroy(take_picture_interfaces__srv__GetWaypoints_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    take_picture_interfaces__srv__GetWaypoints_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
take_picture_interfaces__srv__GetWaypoints_Request__Sequence__init(take_picture_interfaces__srv__GetWaypoints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Request * data = NULL;

  if (size) {
    data = (take_picture_interfaces__srv__GetWaypoints_Request *)allocator.zero_allocate(size, sizeof(take_picture_interfaces__srv__GetWaypoints_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = take_picture_interfaces__srv__GetWaypoints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        take_picture_interfaces__srv__GetWaypoints_Request__fini(&data[i - 1]);
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
take_picture_interfaces__srv__GetWaypoints_Request__Sequence__fini(take_picture_interfaces__srv__GetWaypoints_Request__Sequence * array)
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
      take_picture_interfaces__srv__GetWaypoints_Request__fini(&array->data[i]);
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

take_picture_interfaces__srv__GetWaypoints_Request__Sequence *
take_picture_interfaces__srv__GetWaypoints_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Request__Sequence * array = (take_picture_interfaces__srv__GetWaypoints_Request__Sequence *)allocator.allocate(sizeof(take_picture_interfaces__srv__GetWaypoints_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = take_picture_interfaces__srv__GetWaypoints_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
take_picture_interfaces__srv__GetWaypoints_Request__Sequence__destroy(take_picture_interfaces__srv__GetWaypoints_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    take_picture_interfaces__srv__GetWaypoints_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
take_picture_interfaces__srv__GetWaypoints_Request__Sequence__are_equal(const take_picture_interfaces__srv__GetWaypoints_Request__Sequence * lhs, const take_picture_interfaces__srv__GetWaypoints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!take_picture_interfaces__srv__GetWaypoints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
take_picture_interfaces__srv__GetWaypoints_Request__Sequence__copy(
  const take_picture_interfaces__srv__GetWaypoints_Request__Sequence * input,
  take_picture_interfaces__srv__GetWaypoints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(take_picture_interfaces__srv__GetWaypoints_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    take_picture_interfaces__srv__GetWaypoints_Request * data =
      (take_picture_interfaces__srv__GetWaypoints_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!take_picture_interfaces__srv__GetWaypoints_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          take_picture_interfaces__srv__GetWaypoints_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!take_picture_interfaces__srv__GetWaypoints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `waypoints`
#include "take_picture_interfaces/msg/detail/waypoint_list__functions.h"

bool
take_picture_interfaces__srv__GetWaypoints_Response__init(take_picture_interfaces__srv__GetWaypoints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!take_picture_interfaces__msg__WaypointList__Sequence__init(&msg->waypoints, 0)) {
    take_picture_interfaces__srv__GetWaypoints_Response__fini(msg);
    return false;
  }
  return true;
}

void
take_picture_interfaces__srv__GetWaypoints_Response__fini(take_picture_interfaces__srv__GetWaypoints_Response * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  take_picture_interfaces__msg__WaypointList__Sequence__fini(&msg->waypoints);
}

bool
take_picture_interfaces__srv__GetWaypoints_Response__are_equal(const take_picture_interfaces__srv__GetWaypoints_Response * lhs, const take_picture_interfaces__srv__GetWaypoints_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoints
  if (!take_picture_interfaces__msg__WaypointList__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
take_picture_interfaces__srv__GetWaypoints_Response__copy(
  const take_picture_interfaces__srv__GetWaypoints_Response * input,
  take_picture_interfaces__srv__GetWaypoints_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!take_picture_interfaces__msg__WaypointList__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

take_picture_interfaces__srv__GetWaypoints_Response *
take_picture_interfaces__srv__GetWaypoints_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Response * msg = (take_picture_interfaces__srv__GetWaypoints_Response *)allocator.allocate(sizeof(take_picture_interfaces__srv__GetWaypoints_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(take_picture_interfaces__srv__GetWaypoints_Response));
  bool success = take_picture_interfaces__srv__GetWaypoints_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
take_picture_interfaces__srv__GetWaypoints_Response__destroy(take_picture_interfaces__srv__GetWaypoints_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    take_picture_interfaces__srv__GetWaypoints_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
take_picture_interfaces__srv__GetWaypoints_Response__Sequence__init(take_picture_interfaces__srv__GetWaypoints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Response * data = NULL;

  if (size) {
    data = (take_picture_interfaces__srv__GetWaypoints_Response *)allocator.zero_allocate(size, sizeof(take_picture_interfaces__srv__GetWaypoints_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = take_picture_interfaces__srv__GetWaypoints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        take_picture_interfaces__srv__GetWaypoints_Response__fini(&data[i - 1]);
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
take_picture_interfaces__srv__GetWaypoints_Response__Sequence__fini(take_picture_interfaces__srv__GetWaypoints_Response__Sequence * array)
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
      take_picture_interfaces__srv__GetWaypoints_Response__fini(&array->data[i]);
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

take_picture_interfaces__srv__GetWaypoints_Response__Sequence *
take_picture_interfaces__srv__GetWaypoints_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Response__Sequence * array = (take_picture_interfaces__srv__GetWaypoints_Response__Sequence *)allocator.allocate(sizeof(take_picture_interfaces__srv__GetWaypoints_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = take_picture_interfaces__srv__GetWaypoints_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
take_picture_interfaces__srv__GetWaypoints_Response__Sequence__destroy(take_picture_interfaces__srv__GetWaypoints_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    take_picture_interfaces__srv__GetWaypoints_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
take_picture_interfaces__srv__GetWaypoints_Response__Sequence__are_equal(const take_picture_interfaces__srv__GetWaypoints_Response__Sequence * lhs, const take_picture_interfaces__srv__GetWaypoints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!take_picture_interfaces__srv__GetWaypoints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
take_picture_interfaces__srv__GetWaypoints_Response__Sequence__copy(
  const take_picture_interfaces__srv__GetWaypoints_Response__Sequence * input,
  take_picture_interfaces__srv__GetWaypoints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(take_picture_interfaces__srv__GetWaypoints_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    take_picture_interfaces__srv__GetWaypoints_Response * data =
      (take_picture_interfaces__srv__GetWaypoints_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!take_picture_interfaces__srv__GetWaypoints_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          take_picture_interfaces__srv__GetWaypoints_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!take_picture_interfaces__srv__GetWaypoints_Response__copy(
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
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"

bool
take_picture_interfaces__srv__GetWaypoints_Event__init(take_picture_interfaces__srv__GetWaypoints_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    take_picture_interfaces__srv__GetWaypoints_Event__fini(msg);
    return false;
  }
  // request
  if (!take_picture_interfaces__srv__GetWaypoints_Request__Sequence__init(&msg->request, 0)) {
    take_picture_interfaces__srv__GetWaypoints_Event__fini(msg);
    return false;
  }
  // response
  if (!take_picture_interfaces__srv__GetWaypoints_Response__Sequence__init(&msg->response, 0)) {
    take_picture_interfaces__srv__GetWaypoints_Event__fini(msg);
    return false;
  }
  return true;
}

void
take_picture_interfaces__srv__GetWaypoints_Event__fini(take_picture_interfaces__srv__GetWaypoints_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  take_picture_interfaces__srv__GetWaypoints_Request__Sequence__fini(&msg->request);
  // response
  take_picture_interfaces__srv__GetWaypoints_Response__Sequence__fini(&msg->response);
}

bool
take_picture_interfaces__srv__GetWaypoints_Event__are_equal(const take_picture_interfaces__srv__GetWaypoints_Event * lhs, const take_picture_interfaces__srv__GetWaypoints_Event * rhs)
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
  if (!take_picture_interfaces__srv__GetWaypoints_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!take_picture_interfaces__srv__GetWaypoints_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
take_picture_interfaces__srv__GetWaypoints_Event__copy(
  const take_picture_interfaces__srv__GetWaypoints_Event * input,
  take_picture_interfaces__srv__GetWaypoints_Event * output)
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
  if (!take_picture_interfaces__srv__GetWaypoints_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!take_picture_interfaces__srv__GetWaypoints_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

take_picture_interfaces__srv__GetWaypoints_Event *
take_picture_interfaces__srv__GetWaypoints_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Event * msg = (take_picture_interfaces__srv__GetWaypoints_Event *)allocator.allocate(sizeof(take_picture_interfaces__srv__GetWaypoints_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(take_picture_interfaces__srv__GetWaypoints_Event));
  bool success = take_picture_interfaces__srv__GetWaypoints_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
take_picture_interfaces__srv__GetWaypoints_Event__destroy(take_picture_interfaces__srv__GetWaypoints_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    take_picture_interfaces__srv__GetWaypoints_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
take_picture_interfaces__srv__GetWaypoints_Event__Sequence__init(take_picture_interfaces__srv__GetWaypoints_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Event * data = NULL;

  if (size) {
    data = (take_picture_interfaces__srv__GetWaypoints_Event *)allocator.zero_allocate(size, sizeof(take_picture_interfaces__srv__GetWaypoints_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = take_picture_interfaces__srv__GetWaypoints_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        take_picture_interfaces__srv__GetWaypoints_Event__fini(&data[i - 1]);
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
take_picture_interfaces__srv__GetWaypoints_Event__Sequence__fini(take_picture_interfaces__srv__GetWaypoints_Event__Sequence * array)
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
      take_picture_interfaces__srv__GetWaypoints_Event__fini(&array->data[i]);
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

take_picture_interfaces__srv__GetWaypoints_Event__Sequence *
take_picture_interfaces__srv__GetWaypoints_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__srv__GetWaypoints_Event__Sequence * array = (take_picture_interfaces__srv__GetWaypoints_Event__Sequence *)allocator.allocate(sizeof(take_picture_interfaces__srv__GetWaypoints_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = take_picture_interfaces__srv__GetWaypoints_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
take_picture_interfaces__srv__GetWaypoints_Event__Sequence__destroy(take_picture_interfaces__srv__GetWaypoints_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    take_picture_interfaces__srv__GetWaypoints_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
take_picture_interfaces__srv__GetWaypoints_Event__Sequence__are_equal(const take_picture_interfaces__srv__GetWaypoints_Event__Sequence * lhs, const take_picture_interfaces__srv__GetWaypoints_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!take_picture_interfaces__srv__GetWaypoints_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
take_picture_interfaces__srv__GetWaypoints_Event__Sequence__copy(
  const take_picture_interfaces__srv__GetWaypoints_Event__Sequence * input,
  take_picture_interfaces__srv__GetWaypoints_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(take_picture_interfaces__srv__GetWaypoints_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    take_picture_interfaces__srv__GetWaypoints_Event * data =
      (take_picture_interfaces__srv__GetWaypoints_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!take_picture_interfaces__srv__GetWaypoints_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          take_picture_interfaces__srv__GetWaypoints_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!take_picture_interfaces__srv__GetWaypoints_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
