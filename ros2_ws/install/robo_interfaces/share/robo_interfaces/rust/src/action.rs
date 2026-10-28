
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robo_interfaces__action__Deslocamento_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocidade_latitudinal: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocidade_longitudinal: f64,

}



impl Default for Deslocamento_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Deslocamento_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_Goal {
  type RmwMsg = super::action::rmw::Deslocamento_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        latitude: msg.latitude,
        longitude: msg.longitude,
        velocidade_latitudinal: msg.velocidade_latitudinal,
        velocidade_longitudinal: msg.velocidade_longitudinal,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      latitude: msg.latitude,
      longitude: msg.longitude,
      velocidade_latitudinal: msg.velocidade_latitudinal,
      velocidade_longitudinal: msg.velocidade_longitudinal,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      latitude: msg.latitude,
      longitude: msg.longitude,
      velocidade_latitudinal: msg.velocidade_latitudinal,
      velocidade_longitudinal: msg.velocidade_longitudinal,
    }
  }
}


// Corresponds to robo_interfaces__action__Deslocamento_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sucesso: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distancia_percorrida: f64,

}



impl Default for Deslocamento_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Deslocamento_Result::default())
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_Result {
  type RmwMsg = super::action::rmw::Deslocamento_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sucesso: msg.sucesso,
        distancia_percorrida: msg.distancia_percorrida,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sucesso: msg.sucesso,
      distancia_percorrida: msg.distancia_percorrida,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sucesso: msg.sucesso,
      distancia_percorrida: msg.distancia_percorrida,
    }
  }
}


// Corresponds to robo_interfaces__action__Deslocamento_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub latitude_atual: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitude_atual: f64,

}



impl Default for Deslocamento_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Deslocamento_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_Feedback {
  type RmwMsg = super::action::rmw::Deslocamento_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        latitude_atual: msg.latitude_atual,
        longitude_atual: msg.longitude_atual,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      latitude_atual: msg.latitude_atual,
      longitude_atual: msg.longitude_atual,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      latitude_atual: msg.latitude_atual,
      longitude_atual: msg.longitude_atual,
    }
  }
}


// Corresponds to robo_interfaces__action__Deslocamento_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::Deslocamento_Feedback,

}



impl Default for Deslocamento_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Deslocamento_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_FeedbackMessage {
  type RmwMsg = super::action::rmw::Deslocamento_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::Deslocamento_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::Deslocamento_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::Deslocamento_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to robo_interfaces__action__Deslocamento_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::Deslocamento_Goal,

}



impl Default for Deslocamento_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Deslocamento_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_SendGoal_Request {
  type RmwMsg = super::action::rmw::Deslocamento_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::Deslocamento_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::Deslocamento_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::Deslocamento_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to robo_interfaces__action__Deslocamento_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for Deslocamento_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Deslocamento_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_SendGoal_Response {
  type RmwMsg = super::action::rmw::Deslocamento_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to robo_interfaces__action__Deslocamento_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for Deslocamento_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Deslocamento_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_GetResult_Request {
  type RmwMsg = super::action::rmw::Deslocamento_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to robo_interfaces__action__Deslocamento_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::Deslocamento_Result,

}



impl Default for Deslocamento_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::Deslocamento_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_GetResult_Response {
  type RmwMsg = super::action::rmw::Deslocamento_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::Deslocamento_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::Deslocamento_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::Deslocamento_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robo_interfaces__action__Deslocamento_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robo_interfaces__action__Deslocamento_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Deslocamento_SendGoal;

impl rosidl_runtime_rs::Service for Deslocamento_SendGoal {
    type Request = Deslocamento_SendGoal_Request;
    type Response = Deslocamento_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robo_interfaces__action__Deslocamento_SendGoal() }
    }
}




#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robo_interfaces__action__Deslocamento_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robo_interfaces__action__Deslocamento_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Deslocamento_GetResult;

impl rosidl_runtime_rs::Service for Deslocamento_GetResult {
    type Request = Deslocamento_GetResult_Request;
    type Response = Deslocamento_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robo_interfaces__action__Deslocamento_GetResult() }
    }
}






#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__robo_interfaces__action__Deslocamento() -> *const std::ffi::c_void;
}

// Corresponds to robo_interfaces__action__Deslocamento
#[allow(missing_docs, non_camel_case_types)]
pub struct Deslocamento;

impl rosidl_runtime_rs::Action for Deslocamento {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = Deslocamento_Goal;

  /// The result message defined in the action definition.
  type Result = Deslocamento_Result;

  /// The feedback message defined in the action definition.
  type Feedback = Deslocamento_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::Deslocamento_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::Deslocamento_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::Deslocamento_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__robo_interfaces__action__Deslocamento() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::Deslocamento_Goal,
  ) -> super::action::rmw::Deslocamento_SendGoal_Request {
   super::action::rmw::Deslocamento_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::Deslocamento_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::Deslocamento_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::Deslocamento_SendGoal_Response {
   super::action::rmw::Deslocamento_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::Deslocamento_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::Deslocamento_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::Deslocamento_Feedback,
  ) -> super::action::rmw::Deslocamento_FeedbackMessage {
    let mut message = super::action::rmw::Deslocamento_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::Deslocamento_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::Deslocamento_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::Deslocamento_GetResult_Request {
   super::action::rmw::Deslocamento_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::Deslocamento_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::Deslocamento_Result,
  ) -> super::action::rmw::Deslocamento_GetResult_Response {
   super::action::rmw::Deslocamento_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::Deslocamento_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::Deslocamento_Result,
  ) {
    (response.status, response.result)
  }
}


