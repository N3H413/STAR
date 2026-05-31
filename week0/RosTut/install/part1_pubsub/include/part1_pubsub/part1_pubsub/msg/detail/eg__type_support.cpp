// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from part1_pubsub:msg/Eg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "part1_pubsub/msg/detail/eg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace part1_pubsub
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Eg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) part1_pubsub::msg::Eg(_init);
}

void Eg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<part1_pubsub::msg::Eg *>(message_memory);
  typed_message->~Eg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Eg_message_member_array[2] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(part1_pubsub::msg::Eg, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(part1_pubsub::msg::Eg, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Eg_message_members = {
  "part1_pubsub::msg",  // message namespace
  "Eg",  // message name
  2,  // number of fields
  sizeof(part1_pubsub::msg::Eg),
  Eg_message_member_array,  // message members
  Eg_init_function,  // function to initialize message memory (memory has to be allocated)
  Eg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Eg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Eg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace part1_pubsub


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<part1_pubsub::msg::Eg>()
{
  return &::part1_pubsub::msg::rosidl_typesupport_introspection_cpp::Eg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, part1_pubsub, msg, Eg)() {
  return &::part1_pubsub::msg::rosidl_typesupport_introspection_cpp::Eg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
