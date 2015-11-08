//
// Created by Matheus on 11/6/2015.
//

#include "base.h"

namespace AlphaEngine
{
  Base::Base()
  {

  }

  Base::~Base()
  {

  }

  void Base::ThrowErr(string msg, int code)
  {
    cout << msg << hex << code;
  }
}




