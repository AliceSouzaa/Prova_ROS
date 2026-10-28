#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to robo_interfaces__srv__ColetaMaterial_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ColetaMaterial_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub profundidade: f64,

}



impl Default for ColetaMaterial_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ColetaMaterial_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ColetaMaterial_Request {
  type RmwMsg = super::srv::rmw::ColetaMaterial_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        profundidade: msg.profundidade,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      profundidade: msg.profundidade,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      profundidade: msg.profundidade,
    }
  }
}


// Corresponds to robo_interfaces__srv__ColetaMaterial_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ColetaMaterial_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sucesso: bool,

}



impl Default for ColetaMaterial_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ColetaMaterial_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ColetaMaterial_Response {
  type RmwMsg = super::srv::rmw::ColetaMaterial_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sucesso: msg.sucesso,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sucesso: msg.sucesso,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sucesso: msg.sucesso,
    }
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


