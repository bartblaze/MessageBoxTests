#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>

#define DLL_EXPORT __declspec(dllexport)

#ifdef __cplusplus
extern "C"
{
#endif
//Call export here
int DLL_EXPORT MsgBox(int x);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
