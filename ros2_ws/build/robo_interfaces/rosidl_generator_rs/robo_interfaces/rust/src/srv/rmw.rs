#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__srv__ColetaMaterial_Request() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__srv__ColetaMaterial_Request__init(msg: *mut ColetaMaterial_Request) -> bool;
    fn robo_interfaces__srv__ColetaMaterial_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ColetaMaterial_Request>, size: usize) -> bool;
    fn robo_interfaces__srv__ColetaMaterial_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ColetaMaterial_Request>);
    fn robo_interfaces__srv__ColetaMaterial_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ColetaMaterial_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ColetaMaterial_Request>) -> bool;
}

// Corresponds to robo_interfaces__srv__ColetaMaterial_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ColetaMaterial_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub profundidade: f64,

}



impl Default for ColetaMaterial_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__srv__ColetaMaterial_Request__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__srv__ColetaMaterial_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ColetaMaterial_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__srv__ColetaMaterial_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__srv__ColetaMaterial_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__srv__ColetaMaterial_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ColetaMaterial_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ColetaMaterial_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/srv/ColetaMaterial_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__srv__ColetaMaterial_Request() }
  }
}


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__srv__ColetaMaterial_Response() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__srv__ColetaMaterial_Response__init(msg: *mut ColetaMaterial_Response) -> bool;
    fn robo_interfaces__srv__ColetaMaterial_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ColetaMaterial_Response>, size: usize) -> bool;
    fn robo_interfaces__srv__ColetaMaterial_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ColetaMaterial_Response>);
    fn robo_interfaces__srv__ColetaMaterial_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ColetaMaterial_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ColetaMaterial_Response>) -> bool;
}

// Corresponds to robo_interfaces__srv__ColetaMaterial_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ColetaMaterial_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sucesso: bool,

}



impl Default for ColetaMaterial_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__srv__ColetaMaterial_Response__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__srv__ColetaMaterial_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ColetaMaterial_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__srv__ColetaMaterial_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__srv__ColetaMaterial_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__srv__ColetaMaterial_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ColetaMaterial_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ColetaMaterial_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/srv/ColetaMaterial_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__srv__ColetaMaterial_Response() }
  }
}






#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robo_interfaces__srv__ColetaMaterial() -> *const std::ffi::c_void;
}

// Corresponds to robo_interfaces__srv__ColetaMaterial
#[allow(missing_docs, non_camel_case_types)]
pub struct ColetaMaterial;

impl rosidl_runtime_rs::Service for ColetaMaterial {
    type Request = ColetaMaterial_Request;
    type Response = ColetaMaterial_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robo_interfaces__srv__ColetaMaterial() }
    }
}


