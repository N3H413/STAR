// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from part1_pubsub:msg/Eg.idl
// generated code does not contain a copyright notice

#ifndef PART1_PUBSUB__MSG__DETAIL__EG__BUILDER_HPP_
#define PART1_PUBSUB__MSG__DETAIL__EG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "part1_pubsub/msg/detail/eg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace part1_pubsub
{

namespace msg
{

namespace builder
{

class Init_Eg_time
{
public:
  explicit Init_Eg_time(::part1_pubsub::msg::Eg & msg)
  : msg_(msg)
  {}
  ::part1_pubsub::msg::Eg time(::part1_pubsub::msg::Eg::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::part1_pubsub::msg::Eg msg_;
};

class Init_Eg_info
{
public:
  Init_Eg_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Eg_time info(::part1_pubsub::msg::Eg::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Eg_time(msg_);
  }

private:
  ::part1_pubsub::msg::Eg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::part1_pubsub::msg::Eg>()
{
  return part1_pubsub::msg::builder::Init_Eg_info();
}

}  // namespace part1_pubsub

#endif  // PART1_PUBSUB__MSG__DETAIL__EG__BUILDER_HPP_
