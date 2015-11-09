//
// Created by Matheus on 11/7/2015.
//

#include "LuaMngr.h"

namespace AlphaEngine
{
  LuaMngr::LuaMngr()
  {
    L = luaL_newstate();
    luaL_openlibs(L);

  }

  LuaMngr::~LuaMngr()
  {
    lua_close(L);
  }

  template<class T>
  bool LuaMngr::setGlobal(string name, T val)
  {

    return 0;
  }
}
