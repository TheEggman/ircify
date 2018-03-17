/* 
Copyright © 2013 Notrace
This program is free software. It comes without any warranty, to
the extent permitted by applicable law. You can redistribute it
and/or modify it under the terms of the Do What The Fuck You Want
To Public License, Version 2, as published by Sam Hocevar. See
http://www.wtfpl.net/ for more details.

===================================================================

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
*/

#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <string>
#include "gitversion.h" //this file is autogenerated by my compile script just remove it and change the Version function to show your version
#include "SpotifyLookupApi.h"

#ifndef IRCIFY_H_INCLUDE
#define IRCIFY_H_INCLUDE

#define IRCIFY_API  __declspec(dllexport) int __stdcall

#define POLY 0x8408

extern  void mCmd(const char * cmd);
extern  void mMsg(const char * cmd);
extern  void mEcho(const char * cmd);
extern  void mEval(const char * data, char * res, int maxlen);

extern int CreateOutput(char *out, int type, TRACKINFO *ct);
extern int Status();
extern int convert_time(char *out, int sec);


#endif