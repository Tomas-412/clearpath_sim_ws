// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_platform_msgs:msg/Fans.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "clearpath_platform_msgs/msg/detail/fans__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace clearpath_platform_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Fans_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) clearpath_platform_msgs::msg::Fans(_init);
}

void Fans_fini_function(void * message_memory)
{
  auto typed_message = static_cast<clearpath_platform_msgs::msg::Fans *>(message_memory);
  typed_message->~Fans();
}

size_t size_function__Fans__fans(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Fans__fans(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Fans__fans(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Fans__fans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Fans__fans(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Fans__fans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Fans__fans(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__Fans__fans(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Fans_message_member_array[1] = {
  {
    "fans",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::Fans, fans),  // bytes offset in struct
    nullptr,  // default value
    size_function__Fans__fans,  // size() function pointer
    get_const_function__Fans__fans,  // get_const(index) function pointer
    get_function__Fans__fans,  // get(index) function pointer
    fetch_function__Fans__fans,  // fetch(index, &value) function pointer
    assign_function__Fans__fans,  // assign(index, value) function pointer
    resize_function__Fans__fans  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Fans_message_members = {
  "clearpath_platform_msgs::msg",  // message namespace
  "Fans",  // message name
  1,  // number of fields
  sizeof(clearpath_platform_msgs::msg::Fans),
  Fans_message_member_array,  // message members
  Fans_init_function,  // function to initialize message memory (memory has to be allocated)
  Fans_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Fans_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Fans_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace clearpath_platform_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_platform_msgs::msg::Fans>()
{
  return &::clearpath_platform_msgs::msg::rosidl_typesupport_introspection_cpp::Fans_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_platform_msgs, msg, Fans)() {
  return &::clearpath_platform_msgs::msg::rosidl_typesupport_introspection_cpp::Fans_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif