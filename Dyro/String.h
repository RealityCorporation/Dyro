#ifndef _STRING_H
#define _STRING_H

using namespace std;

//C Runtime Header Files
#ifndef _TCHAR_INC_
#include <tchar.h>
#endif

#ifndef _STRING_
#include <string>
#endif

//Defines
#ifdef UNICODE
    #define tstring wstring
    #define TOSTRING(value) to_wstring(value)
#else
    #define tstring string
    #define TOSTRING(value) to_string(value)
#endif

#endif // _STRING_H
