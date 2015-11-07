//
// Created by Matheus on 11/7/2015.
//

#ifndef ALPHAENGINE_IO_H
#define ALPHAENGINE_IO_H

#include <iosfwd>
#include "../base/base.h"


namespace AlphaEngine
{
  class IO : Base
  {
  public:
    enum IOModes
    {
      CompiledBank = 0x0,
      plainFile,
      db
    };

    IO (string, IOModes);

    ~IO ();

  private:
    fstream fs;
  };
}


#endif //ALPHAENGINE_IO_H
