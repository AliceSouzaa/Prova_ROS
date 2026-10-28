#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robo_interfaces__msg__Monitoramento

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Monitoramento::default())
  }
}

impl rosidl_runtime_rs::Message for Monitoramento {
  type RmwMsg = super::msg::rmw::Monitoramento;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        nivel_oxigenio: msg.nivel_oxigenio,
        temperatura: msg.temperatura,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      nivel_oxigenio: msg.nivel_oxigenio,
      temperatura: msg.temperatura,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      nivel_oxigenio: msg.nivel_oxigenio,
      temperatura: msg.temperatura,
    }
  }
}


