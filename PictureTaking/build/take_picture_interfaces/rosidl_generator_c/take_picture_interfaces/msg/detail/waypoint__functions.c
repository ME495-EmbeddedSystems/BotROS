// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from take_picture_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "take_picture_interfaces/msg/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
take_picture_interfaces__msg__Waypoint__init(take_picture_interfaces__msg__Waypoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
take_picture_interfaces__msg__Waypoint__fini(take_picture_interfaces__msg__Waypoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
take_picture_interfaces__msg__Waypoint__are_equal(const take_picture_interfaces__msg__Waypoint * lhs, const take_picture_interfaces__msg__Waypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
take_picture_interfaces__msg__Waypoint__copy(
  const take_picture_interfaces__msg__Waypoint * input,
  take_picture_interfaces__msg__Waypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

take_picture_interfaces__msg__Waypoint *
take_picture_interfaces__msg__Waypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__msg__Waypoint * msg = (take_picture_interfaces__msg__Waypoint *)allocator.allocate(sizeof(take_picture_interfaces__msg__Waypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(take_picture_interfaces__msg__Waypoint));
  bool success = take_picture_interfaces__msg__Waypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
take_picture_interfaces__msg__Waypoint__destroy(take_picture_interfaces__msg__Waypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    take_picture_interfaces__msg__Waypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
take_picture_interfaces__msg__Waypoint__Sequence__init(take_picture_interfaces__msg__Waypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__msg__Waypoint * data = NULL;

  if (size) {
    data = (take_picture_interfaces__msg__Waypoint *)allocator.zero_allocate(size, sizeof(take_picture_interfaces__msg__Waypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = take_picture_interfaces__msg__Waypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        take_picture_interfaces__msg__Waypoint__fini(&data[i - 1]);
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
take_picture_interfaces__msg__Waypoint__Sequence__fini(take_picture_interfaces__msg__Waypoint__Sequence * array)
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
      take_picture_interfaces__msg__Waypoint__fini(&array->data[i]);
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

take_picture_interfaces__msg__Waypoint__Sequence *
take_picture_interfaces__msg__Waypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  take_picture_interfaces__msg__Waypoint__Sequence * array = (take_picture_interfaces__msg__Waypoint__Sequence *)allocator.allocate(sizeof(take_picture_interfaces__msg__Waypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = take_picture_interfaces__msg__Waypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
take_picture_interfaces__msg__Waypoint__Sequence__destroy(take_picture_interfaces__msg__Waypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    take_picture_interfaces__msg__Waypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
take_picture_interfaces__msg__Waypoint__Sequence__are_equal(const take_picture_interfaces__msg__Waypoint__Sequence * lhs, const take_picture_interfaces__msg__Waypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!take_picture_interfaces__msg__Waypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
take_picture_interfaces__msg__Waypoint__Sequence__copy(
  const take_picture_interfaces__msg__Waypoint__Sequence * input,
  take_picture_interfaces__msg__Waypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(take_picture_interfaces__msg__Waypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    take_picture_interfaces__msg__Waypoint * data =
      (take_picture_interfaces__msg__Waypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!take_picture_interfaces__msg__Waypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          take_picture_interfaces__msg__Waypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!take_picture_interfaces__msg__Waypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
