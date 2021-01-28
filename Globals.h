// Required
#pragma once
#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0))
#define R_LUA_TNONE -1
#define R_LUA_TUSERDATA 6
#define R_LUA_TFUNCTION 8
#define R_LUA_TSTRING 5
#define R_LUA_TBOOLEAN 1
#define R_LUA_TNUMBER 4
#define R_LUA_TTABLE 7
#define R_LUA_TNIL 0
#define R_LUA_TTHREAD 9
#define R_LUA_TVECTOR 3
#define R_LUA_TLIGHTUSERDATA 2
#define R_LUA_TPROTO 10
#define R_LUA_TUPVALUE 11

