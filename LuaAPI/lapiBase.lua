--
-- Copyright (C) 2015 L1b3r4t0r
--
-- lapi base file muyst be included on the game code

local AlphaLAPI = {}
AlphaLAPI.__index = AlphaLAPI

function AlphaLAPI.new()
  local self = setmetatable({}, AlphaLAPI)
  return self
end