#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robo_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__msg__Monitoramento() -> *const std::ffi::c_void;
}

#[link(name = "robo_interfaces__rosidl_generator_c")]
extern "C" {
    fn robo_interfaces__msg__Monitoramento__init(msg: *mut Monitoramento) -> bool;
    fn robo_interfaces__msg__Monitoramento__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Monitoramento>, size: usize) -> bool;
    fn robo_interfaces__msg__Monitoramento__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Monitoramento>);
    fn robo_interfaces__msg__Monitoramento__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Monitoramento>, out_seq: *mut rosidl_runtime_rs::Sequence<Monitoramento>) -> bool;
}

// Corresponds to robo_interfaces__msg__Monitoramento
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Monitoramento {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nivel_oxigenio: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperatura: f64,

}



impl Default for Monitoramento {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robo_interfaces__msg__Monitoramento__init(&mut msg as *mut _) {
        panic!("Call to robo_interfaces__msg__Monitoramento__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Monitoramento {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__msg__Monitoramento__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__msg__Monitoramento__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robo_interfaces__msg__Monitoramento__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Monitoramento {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Monitoramento where Self: Sized {
  const TYPE_NAME: &'static str = "robo_interfaces/msg/Monitoramento";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robo_interfaces__msg__Monitoramento() }
  }
}


