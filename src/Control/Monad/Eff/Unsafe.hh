///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Unsafe.hh
// Copyright   :  (c) Andy Arvanitis 2015
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Control.Monad.Eff.Unsafe FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Control_Monad_Eff_UnsafeFFI_HH
#define Control_Monad_Eff_UnsafeFFI_HH

#include "PureScript/PureScript.hh"

namespace Control_Monad_Eff_Unsafe {
  using namespace PureScript;

  // foreign import unsafeCoerceEff
  //   :: forall eff1 eff2 a
  //    . Eff eff1 a
  //   -> Eff eff2 a
  //
  inline auto unsafeCoerceEff(const any& f) -> any {
    return f;
  }
}


#endif // Control_Monad_Eff_UnsafeFFI_HH
