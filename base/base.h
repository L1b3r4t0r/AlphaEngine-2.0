//
// Created by L1b3r4t0r on 11/6/2015.
// Copyright (c) 2015 L1b3r4t0r MIT licensed
//

#ifndef ALPHAENGINE_BASE_H
#define ALPHAENGINE_BASE_H

// Some default most used includes
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

namespace AlphaEngine
{
    class Base
    {
    private:

    public:
      Base();
      ~Base();
      /**
      * Throw ecxeption if exeption id is in the fatal range then engine will exit with error.
      * usage
      * ```c++
      * Base::ThrowErr(msg, code);
      * ```
      */
      void ThrowErr(string, int);
    };
}

#endif //ALPHAENGINE_BASE_H
