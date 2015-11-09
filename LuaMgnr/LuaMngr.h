//
// Created by Matheus on 11/7/2015.
//

#ifndef ALPHAENGINE_LUAMNGR_H
#define ALPHAENGINE_LUAMNGR_H
#include "../base/base.h"
extern "C" {
  #include "../lua/src/lua.h"
  #include "../lua/src/lualib.h"
  #include "../lua/src/lauxlib.h"
}

namespace AlphaEngine
{
  class LuaMngr : Base
  {
  public:
    LuaMngr();
    ~LuaMngr();
    /**
     * Set global var to the lua system
     * ```c++
     * setGlobal<type>(name, contents);
     * ```
     */
    template <class T>
    bool setGlobal(string, T);
    template <>
    bool setGlobal(string, string);
  private:
    lua_State *L;
  };
}


#endif //ALPHAENGINE_LUAMNGR_H
