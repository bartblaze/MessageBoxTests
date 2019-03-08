#include "main.h"
#include <windows.h>
#include <psapi.h>
#include <string>
#include <algorithm>
#include <tlhelp32.h>
#include "Shlobj.h"

// a sample exported function
int DLL_EXPORT MsgBox(int x = 0){
    MessageBox(0, "Hello from DLL", "DLL", MB_OK);
    return x;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
             break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; //success
}
