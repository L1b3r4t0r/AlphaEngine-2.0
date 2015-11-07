//
// Created by L1b3r4t0r on 11/6/2015.
// Copyright (c) 2015 L1b3r4t0r MIT licensed
//

#include "io.h"

namespace AlphaEngine
{
  IO::IO (string fp, IOModes ioFlags)
  {
    if ( ioFlags == IOModes::CompiledBank){

    }
    fs.open(fp.c_str (), ios::in | ios::binary);
  }

  IO::~IO ()
  {

  }
}
