// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robo_interfaces:action/Deslocamento.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robo_interfaces/action/deslocamento.hpp"


#ifndef ROBO_INTERFACES__ACTION__DETAIL__DESLOCAMENTO__BUILDER_HPP_
#define ROBO_INTERFACES__ACTION__DETAIL__DESLOCAMENTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robo_interfaces/action/detail/deslocamento__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_Goal_velocidade_longitudinal
{
public:
  explicit Init_Deslocamento_Goal_velocidade_longitudinal(::robo_interfaces::action::Deslocamento_Goal & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_Goal velocidade_longitudinal(::robo_interfaces::action::Deslocamento_Goal::_velocidade_longitudinal_type arg)
  {
    msg_.velocidade_longitudinal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_Goal msg_;
};

class Init_Deslocamento_Goal_velocidade_latitudinal
{
public:
  explicit Init_Deslocamento_Goal_velocidade_latitudinal(::robo_interfaces::action::Deslocamento_Goal & msg)
  : msg_(msg)
  {}
  Init_Deslocamento_Goal_velocidade_longitudinal velocidade_latitudinal(::robo_interfaces::action::Deslocamento_Goal::_velocidade_latitudinal_type arg)
  {
    msg_.velocidade_latitudinal = std::move(arg);
    return Init_Deslocamento_Goal_velocidade_longitudinal(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_Goal msg_;
};

class Init_Deslocamento_Goal_longitude
{
public:
  explicit Init_Deslocamento_Goal_longitude(::robo_interfaces::action::Deslocamento_Goal & msg)
  : msg_(msg)
  {}
  Init_Deslocamento_Goal_velocidade_latitudinal longitude(::robo_interfaces::action::Deslocamento_Goal::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Deslocamento_Goal_velocidade_latitudinal(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_Goal msg_;
};

class Init_Deslocamento_Goal_latitude
{
public:
  Init_Deslocamento_Goal_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_Goal_longitude latitude(::robo_interfaces::action::Deslocamento_Goal::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Deslocamento_Goal_longitude(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_Goal>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_Goal_latitude();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_Result_distancia_percorrida
{
public:
  explicit Init_Deslocamento_Result_distancia_percorrida(::robo_interfaces::action::Deslocamento_Result & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_Result distancia_percorrida(::robo_interfaces::action::Deslocamento_Result::_distancia_percorrida_type arg)
  {
    msg_.distancia_percorrida = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_Result msg_;
};

class Init_Deslocamento_Result_sucesso
{
public:
  Init_Deslocamento_Result_sucesso()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_Result_distancia_percorrida sucesso(::robo_interfaces::action::Deslocamento_Result::_sucesso_type arg)
  {
    msg_.sucesso = std::move(arg);
    return Init_Deslocamento_Result_distancia_percorrida(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_Result>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_Result_sucesso();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_Feedback_longitude_atual
{
public:
  explicit Init_Deslocamento_Feedback_longitude_atual(::robo_interfaces::action::Deslocamento_Feedback & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_Feedback longitude_atual(::robo_interfaces::action::Deslocamento_Feedback::_longitude_atual_type arg)
  {
    msg_.longitude_atual = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_Feedback msg_;
};

class Init_Deslocamento_Feedback_latitude_atual
{
public:
  Init_Deslocamento_Feedback_latitude_atual()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_Feedback_longitude_atual latitude_atual(::robo_interfaces::action::Deslocamento_Feedback::_latitude_atual_type arg)
  {
    msg_.latitude_atual = std::move(arg);
    return Init_Deslocamento_Feedback_longitude_atual(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_Feedback>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_Feedback_latitude_atual();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_SendGoal_Request_goal
{
public:
  explicit Init_Deslocamento_SendGoal_Request_goal(::robo_interfaces::action::Deslocamento_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_SendGoal_Request goal(::robo_interfaces::action::Deslocamento_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_SendGoal_Request msg_;
};

class Init_Deslocamento_SendGoal_Request_goal_id
{
public:
  Init_Deslocamento_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_SendGoal_Request_goal goal_id(::robo_interfaces::action::Deslocamento_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Deslocamento_SendGoal_Request_goal(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_SendGoal_Request>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_SendGoal_Request_goal_id();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_SendGoal_Response_stamp
{
public:
  explicit Init_Deslocamento_SendGoal_Response_stamp(::robo_interfaces::action::Deslocamento_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_SendGoal_Response stamp(::robo_interfaces::action::Deslocamento_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_SendGoal_Response msg_;
};

class Init_Deslocamento_SendGoal_Response_accepted
{
public:
  Init_Deslocamento_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_SendGoal_Response_stamp accepted(::robo_interfaces::action::Deslocamento_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Deslocamento_SendGoal_Response_stamp(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_SendGoal_Response>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_SendGoal_Response_accepted();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_SendGoal_Event_response
{
public:
  explicit Init_Deslocamento_SendGoal_Event_response(::robo_interfaces::action::Deslocamento_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_SendGoal_Event response(::robo_interfaces::action::Deslocamento_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_SendGoal_Event msg_;
};

class Init_Deslocamento_SendGoal_Event_request
{
public:
  explicit Init_Deslocamento_SendGoal_Event_request(::robo_interfaces::action::Deslocamento_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Deslocamento_SendGoal_Event_response request(::robo_interfaces::action::Deslocamento_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Deslocamento_SendGoal_Event_response(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_SendGoal_Event msg_;
};

class Init_Deslocamento_SendGoal_Event_info
{
public:
  Init_Deslocamento_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_SendGoal_Event_request info(::robo_interfaces::action::Deslocamento_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Deslocamento_SendGoal_Event_request(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_SendGoal_Event>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_SendGoal_Event_info();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_GetResult_Request_goal_id
{
public:
  Init_Deslocamento_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robo_interfaces::action::Deslocamento_GetResult_Request goal_id(::robo_interfaces::action::Deslocamento_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_GetResult_Request>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_GetResult_Request_goal_id();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_GetResult_Response_result
{
public:
  explicit Init_Deslocamento_GetResult_Response_result(::robo_interfaces::action::Deslocamento_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_GetResult_Response result(::robo_interfaces::action::Deslocamento_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_GetResult_Response msg_;
};

class Init_Deslocamento_GetResult_Response_status
{
public:
  Init_Deslocamento_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_GetResult_Response_result status(::robo_interfaces::action::Deslocamento_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Deslocamento_GetResult_Response_result(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_GetResult_Response>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_GetResult_Response_status();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_GetResult_Event_response
{
public:
  explicit Init_Deslocamento_GetResult_Event_response(::robo_interfaces::action::Deslocamento_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_GetResult_Event response(::robo_interfaces::action::Deslocamento_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_GetResult_Event msg_;
};

class Init_Deslocamento_GetResult_Event_request
{
public:
  explicit Init_Deslocamento_GetResult_Event_request(::robo_interfaces::action::Deslocamento_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Deslocamento_GetResult_Event_response request(::robo_interfaces::action::Deslocamento_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Deslocamento_GetResult_Event_response(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_GetResult_Event msg_;
};

class Init_Deslocamento_GetResult_Event_info
{
public:
  Init_Deslocamento_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_GetResult_Event_request info(::robo_interfaces::action::Deslocamento_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Deslocamento_GetResult_Event_request(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_GetResult_Event>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_GetResult_Event_info();
}

}  // namespace robo_interfaces


namespace robo_interfaces
{

namespace action
{

namespace builder
{

class Init_Deslocamento_FeedbackMessage_feedback
{
public:
  explicit Init_Deslocamento_FeedbackMessage_feedback(::robo_interfaces::action::Deslocamento_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robo_interfaces::action::Deslocamento_FeedbackMessage feedback(::robo_interfaces::action::Deslocamento_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_FeedbackMessage msg_;
};

class Init_Deslocamento_FeedbackMessage_goal_id
{
public:
  Init_Deslocamento_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deslocamento_FeedbackMessage_feedback goal_id(::robo_interfaces::action::Deslocamento_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Deslocamento_FeedbackMessage_feedback(msg_);
  }

private:
  ::robo_interfaces::action::Deslocamento_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robo_interfaces::action::Deslocamento_FeedbackMessage>()
{
  return robo_interfaces::action::builder::Init_Deslocamento_FeedbackMessage_goal_id();
}

}  // namespace robo_interfaces

#endif  // ROBO_INTERFACES__ACTION__DETAIL__DESLOCAMENTO__BUILDER_HPP_
