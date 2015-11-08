//
// Created by L1b3r4t0r on 11/6/2015.
// Copyright (c) 2015 L1b3r4t0r MIT licensed
//

#include "io.h"

namespace AlphaEngine
{
  IO::IO(string fp, IOModes ioFlags)
  {
    const char *CsFP = fp.c_str();
    switch(ioFlags){
      case CompiledBank:
        fs.open (CsFP, ios::in | ios::binary);
        break;
      case db:
        fs.open(CsFP,ios::in | ios::binary);
        break;
      case plainFile:
        try
        {
          fs.open(CsFP, ios::in);
        } catch(int e){
          Base::ThrowErr("File could not be open" + e, 0x2B4);
        };
        break;
      default:
        Base::ThrowErr("Invalid IO mode", 0xF1);
        break;
    }
  }

  IO::~IO()
  {

  }
}
