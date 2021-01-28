// Make a Header File called QuickAddies.h

// Paste this Code Inside the H File
#pragma once
#include <Windows.h>

DWORD ADDYcall = 0x01333270;
DWORD ADDYcheckstack = 0x013332E0;
DWORD ADDYclose = 0x0133FDB0;
DWORD ADDYconcat = 0x01333380;
DWORD ADDYcreatetable = 0x01333430;
DWORD ADDYerror = 0x01333570;
DWORD ADDYgc = 0x01333580;
DWORD ADDYgetfenv = 0x013336A0;
DWORD ADDYgetfield = 0x01333740;
DWORD ADDYgetinfo = 0x01340870;
DWORD ADDYgetlocal = 0x01340940;
DWORD ADDYgetmetatable = 0x013337E0;
DWORD ADDYgetstack = 0x013409F0;
DWORD ADDYgettable = 0x013338A0;
DWORD ADDYgettop = 0x01333910;
DWORD ADDYgetupvalue = 0x01333930;
DWORD ADDYinsert = 0x013339C0;
DWORD ADDYiscfunction = 0x01333A40;
DWORD ADDYisstring = 0x01333B40;
DWORD ADDYisnumber = 0x01333AE0;
DWORD ADDYnewstate = 0x0133FDE0;
DWORD ADDYnewthread = 0x01333C40;
DWORD ADDYnewuserdata = 0x01333CD0;
DWORD ADDYnext = 0x01333D50;
DWORD ADDYobjlen = 0x01333DE0;
DWORD ADDYpcall = 0x01333EC0;
DWORD ADDYpushboolean = 0x01333F80;
DWORD ADDYpushcclosure = 0x01333FD0;
DWORD ADDYpushfstring = 0x013340A0;
DWORD ADDYpushinteger = 0x01334110;
DWORD ADDYpushlightuserdata = 0x01334170;
DWORD ADDYpushlstring = 0x013341C0;
DWORD ADDYpushnil = 0x01334240;
DWORD ADDYpushnumber = 0x01334290;
DWORD ADDYpushstring = 0x013342F0;
DWORD ADDYpushthread = 0x013343D0;
DWORD ADDYpushvalue = 0x013344A0;
DWORD ADDYpushvfstring = 0x01334510;
DWORD ADDYrawequal = 0x013345F0;
DWORD ADDYrawget = 0x01334670;
DWORD ADDYrawgeti = 0x01334790;
DWORD ADDYrawset = 0x01334810;
DWORD ADDYrawseti = 0x013348E0;
DWORD ADDYremove = 0x013349B0;
DWORD ADDYreplace = 0x01334A40;
DWORD ADDYresume = 0x013368B0;
DWORD ADDYsetfenv = 0x01334B40;
DWORD ADDYsetfield = 0x01334C10;
DWORD ADDYsetlocal = 0x01340A80;
DWORD ADDYsetmetatable = 0x01334CC0;
DWORD ADDYsetreadonly = 0x01334DD0;
DWORD ADDYsettable = 0x01334EB0;
DWORD ADDYsettop = 0x01334F30;
DWORD ADDYsetupvalue = 0x01334FB0;
DWORD ADDYtoboolean = 0x01335060;
DWORD ADDYtointeger = 0x013350B0;
DWORD ADDYtolstring = 0x01335130;
DWORD ADDYtonumber = 0x01335250;
DWORD ADDYtopointer = 0x013352D0;
DWORD ADDYtostring = 0x01335390;
DWORD ADDYtothread = 0x01335410;
DWORD ADDYtouserdata = 0x013354E0;
DWORD ADDYtype = 0x013355D0;
DWORD ADDYtypename = 0x01335610;
DWORD ADDYxmove = 0x01335680;
DWORD ADDYyield = 0x01336B10;
DWORD ADDYVexecute = 0x013372B0;
DWORD ADDYVgettable = 0x0134B3B0;
DWORD ADDYVlessequal = 0x0134B4C0;
DWORD ADDYVlessthan = 0x0134B560;
DWORD ADDYVsettable = 0x0134B600;
DWORD ADDYVtonumber = 0x0134B790;
DWORD ADDYVtostring = 0x0134B7F0;
DWORD ADDYSnewlstr = 0x01349490;
DWORD ADDYSnewudata = 0x01349360;
DWORD ADDYLaddlstring = 0x013357F0;
DWORD ADDYLaddvalue = 0x01335860;
DWORD ADDYLargerror = 0x013358E0;
DWORD ADDYLcheckinteger = 0x01335A20;
DWORD ADDYLchecklstring = 0x01335A50;
DWORD ADDYLchecknumber = 0x01335A80;
DWORD ADDYLchecktype = 0x01335AF0;
DWORD ADDYLerror = 0x01335B50;
DWORD ADDYLfindtable = 0x01335B80;
DWORD ADDYLgetmetafield = 0x01335C70;
DWORD ADDYLoptinteger = 0x01335D40;
DWORD ADDYLoptlstring = 0x01335D90;
DWORD ADDYLref = 0x01335EF0;
DWORD ADDYLregister = 0x01335FB0;
DWORD ADDYLtypename = 0x013360A0;
DWORD ADDYLtyperror = 0x7C8590;
DWORD ADDYLunref = 0x01336140;
DWORD ADDYLwhere = 0x013361A0;
#define CCVcall __cdecl
#define CCVcheckstack __cdecl
#define CCVclose __cdecl
#define CCVconcat __cdecl
#define CCVcreatetable __cdecl
#define CCVerror __cdecl
#define CCVgc __cdecl
#define CCVgetfenv __cdecl
#define CCVgetfield __cdecl
#define CCVgethook __cdecl
#define CCVgetinfo __cdecl
#define CCVgetlocal __cdecl
#define CCVgetmetatable _stdcall
#define CCVgetstack __cdecl
#define CCVgettable __cdecl
#define CCVgettop __cdecl
#define CCVgetupvalue _fastcall
#define CCVinsert __cdecl
#define CCViscfunction __cdecl
#define CCVisstring __cdecl
#define CCVisnumber __cdecl
#define CCVnewstate __cdecl
#define CCVnewthread __cdecl
#define CCVnewuserdata __cdecl
#define CCVnext __cdecl
#define CCVobjlen __cdecl
#define CCVpcall __cdecl
#define CCVpushboolean __cdecl
#define CCVpushcclosure _fastcall
#define CCVpushfstring __cdecl
#define CCVpushinteger __cdecl
#define CCVpushlightuserdata __cdecl
#define CCVpushlstring __cdecl
#define CCVpushnil __cdecl
#define CCVpushnumber _stdcall
#define CCVpushstring __cdecl
#define CCVpushthread __cdecl
#define CCVpushvalue _stdcall
#define CCVpushvfstring __cdecl
#define CCVrawequal __cdecl
#define CCVrawget __cdecl
#define CCVrawgeti __cdecl
#define CCVrawset _fastcall
#define CCVrawseti _fastcall
#define CCVremove __cdecl
#define CCVreplace __cdecl
#define CCVresume __cdecl
#define CCVsetfenv __cdecl
#define CCVsetfield __cdecl
#define CCVsethook __cdecl
#define CCVsetlocal __cdecl
#define CCVsetmetatable __cdecl
#define CCVsetreadonly __cdecl
#define CCVsettable __cdecl
#define CCVsettop __cdecl
#define CCVsetupvalue __cdecl
#define CCVtoboolean __cdecl
#define CCVtointeger __cdecl
#define CCVtolstring _fastcall
#define CCVtonumber __cdecl
#define CCVtopointer __cdecl
#define CCVtostring __cdecl
#define CCVtothread __cdecl
#define CCVtouserdata __cdecl
#define CCVtype __cdecl
#define CCVtypename __cdecl
#define CCVxmove __cdecl
#define CCVyield __cdecl
#define CVCVexecute __cdecl
#define CVCVgettable _cdecl
#define CVCVlessequal __cdecl
#define CVCVlessthan __cdecl
#define CVCVsettable __cdecl
#define CVCVtonumber __cdecl 
#define CVCVtostring __cdecl 
#define CVCVnewlstr _fastcall
#define CVCVnewudata _fastcall
#define CVCVaddlstring __cdecl
#define CVCVaddvalue __cdecl
#define CVCVargerror __cdecl
#define CVCVcheckinteger __cdecl
#define CVCVchecklstring __cdecl
#define CVCVchecknumber __cdecl
#define CVCVcheckoption _fastcall
#define CVCVchecktype __cdecl
#define CVCVerror __cdecl
#define CVCVfindtable __cdecl
#define CVCVgetmetafield __cdecl
#define CVCVoptinteger __cdecl
#define CVCVoptlstring __cdecl
#define CVCVoptnumber __cdecl
#define CVCVref __cdecl
#define CVCVregister __cdecl
#define CVCVtypename _fastcall	
#define CVCVtyperror _fastcall
#define CVCVunref __cdecl
#define CVCVwhere __cdecl

// You do need to update so don't be surprised.
