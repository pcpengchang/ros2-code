// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/debug_armors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DebugArmors_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::DebugArmors(_init);
}

void DebugArmors_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::DebugArmors *>(message_memory);
  typed_message->~DebugArmors();
}

size_t size_function__DebugArmors__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interfaces::msg::DebugArmor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DebugArmors__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interfaces::msg::DebugArmor> *>(untyped_member);
  return &member[index];
}

void * get_function__DebugArmors__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interfaces::msg::DebugArmor> *>(untyped_member);
  return &member[index];
}

void resize_function__DebugArmors__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interfaces::msg::DebugArmor> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DebugArmors_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces::msg::DebugArmor>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::DebugArmors, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__DebugArmors__data,  // size() function pointer
    get_const_function__DebugArmors__data,  // get_const(index) function pointer
    get_function__DebugArmors__data,  // get(index) function pointer
    resize_function__DebugArmors__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DebugArmors_message_members = {
  "interfaces::msg",  // message namespace
  "DebugArmors",  // message name
  1,  // number of fields
  sizeof(interfaces::msg::DebugArmors),
  DebugArmors_message_member_array,  // message members
  DebugArmors_init_function,  // function to initialize message memory (memory has to be allocated)
  DebugArmors_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DebugArmors_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DebugArmors_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::DebugArmors>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::DebugArmors_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, DebugArmors)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::DebugArmors_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
