#ifndef UNICODE
#define UNICODE
#endif

#include <windows.h>

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hprevinstance, LPSTR szCmdLine, int nCmdShow)
{
MessageBox(NULL,L"Hello from EXE",L"EXE",MB_OK);
return 0;

}
