
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__action__Deslocamento_Goal__init(msg: *mut Deslocamento_Goal) -> bool;
    fn robo_interfaces__action__Deslocamento_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Goal>, size: usize) -> bool;
    fn robo_interfaces__action__Deslocamento_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Goal>);
    fn robo_interfaces__action__Deslocamento_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deslocamento_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Goal>) -> bool;
}

// Corresponds to robo_interfaces__action__Deslocamento_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__action__Deslocamento_Goal__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__action__Deslocamento_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deslocamento_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deslocamento_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/action/Deslocamento_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_Goal() }
  }
}


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_Result() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__action__Deslocamento_Result__init(msg: *mut Deslocamento_Result) -> bool;
    fn robo_interfaces__action__Deslocamento_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Result>, size: usize) -> bool;
    fn robo_interfaces__action__Deslocamento_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Result>);
    fn robo_interfaces__action__Deslocamento_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deslocamento_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Result>) -> bool;
}

// Corresponds to robo_interfaces__action__Deslocamento_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__action__Deslocamento_Result__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__action__Deslocamento_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deslocamento_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deslocamento_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/action/Deslocamento_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_Result() }
  }
}


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__action__Deslocamento_Feedback__init(msg: *mut Deslocamento_Feedback) -> bool;
    fn robo_interfaces__action__Deslocamento_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Feedback>, size: usize) -> bool;
    fn robo_interfaces__action__Deslocamento_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Feedback>);
    fn robo_interfaces__action__Deslocamento_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deslocamento_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_Feedback>) -> bool;
}

// Corresponds to robo_interfaces__action__Deslocamento_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__action__Deslocamento_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__action__Deslocamento_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deslocamento_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deslocamento_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/action/Deslocamento_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_Feedback() }
  }
}


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__action__Deslocamento_FeedbackMessage__init(msg: *mut Deslocamento_FeedbackMessage) -> bool;
    fn robo_interfaces__action__Deslocamento_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_FeedbackMessage>, size: usize) -> bool;
    fn robo_interfaces__action__Deslocamento_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_FeedbackMessage>);
    fn robo_interfaces__action__Deslocamento_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deslocamento_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_FeedbackMessage>) -> bool;
}

// Corresponds to robo_interfaces__action__Deslocamento_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Deslocamento_Feedback,

}



impl Default for Deslocamento_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__action__Deslocamento_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__action__Deslocamento_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deslocamento_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deslocamento_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/action/Deslocamento_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_FeedbackMessage() }
  }
}




#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__action__Deslocamento_SendGoal_Request__init(msg: *mut Deslocamento_SendGoal_Request) -> bool;
    fn robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_SendGoal_Request>, size: usize) -> bool;
    fn robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_SendGoal_Request>);
    fn robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deslocamento_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_SendGoal_Request>) -> bool;
}

// Corresponds to robo_interfaces__action__Deslocamento_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Deslocamento_Goal,

}



impl Default for Deslocamento_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__action__Deslocamento_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__action__Deslocamento_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deslocamento_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deslocamento_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/action/Deslocamento_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_SendGoal_Request() }
  }
}


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__action__Deslocamento_SendGoal_Response__init(msg: *mut Deslocamento_SendGoal_Response) -> bool;
    fn robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_SendGoal_Response>, size: usize) -> bool;
    fn robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_SendGoal_Response>);
    fn robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deslocamento_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_SendGoal_Response>) -> bool;
}

// Corresponds to robo_interfaces__action__Deslocamento_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Deslocamento_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__action__Deslocamento_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__action__Deslocamento_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deslocamento_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deslocamento_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/action/Deslocamento_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_SendGoal_Response() }
  }
}


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__action__Deslocamento_GetResult_Request__init(msg: *mut Deslocamento_GetResult_Request) -> bool;
    fn robo_interfaces__action__Deslocamento_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_GetResult_Request>, size: usize) -> bool;
    fn robo_interfaces__action__Deslocamento_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_GetResult_Request>);
    fn robo_interfaces__action__Deslocamento_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deslocamento_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_GetResult_Request>) -> bool;
}

// Corresponds to robo_interfaces__action__Deslocamento_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Deslocamento_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__action__Deslocamento_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__action__Deslocamento_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deslocamento_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deslocamento_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/action/Deslocamento_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_GetResult_Request() }
  }
}


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__action__Deslocamento_GetResult_Response__init(msg: *mut Deslocamento_GetResult_Response) -> bool;
    fn robo_interfaces__action__Deslocamento_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_GetResult_Response>, size: usize) -> bool;
    fn robo_interfaces__action__Deslocamento_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_GetResult_Response>);
    fn robo_interfaces__action__Deslocamento_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deslocamento_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Deslocamento_GetResult_Response>) -> bool;
}

// Corresponds to robo_interfaces__action__Deslocamento_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deslocamento_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Deslocamento_Result,

}



impl Default for Deslocamento_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__action__Deslocamento_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__action__Deslocamento_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deslocamento_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__action__Deslocamento_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deslocamento_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deslocamento_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/action/Deslocamento_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__action__Deslocamento_GetResult_Response() }
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


