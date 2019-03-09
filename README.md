# :open_file_folder: MessageBoxTests

### What?
MessageBox files (EXE, DLL) for testing purposes. These files will simply display a message box upon execution.

### Why?
I sometimes find myself needing to test or call an executable or DLL, either from rundll32, using other injections methods, or simply from another application. Surprisingly, there's hardly any like these on Github. I decided to create this repository so it could perhaps assist others.

### How?

#### Compiling

You should be able to compile the code, which is C++ and probably horrible, using either [Visual Studio](https://visualstudio.microsoft.com/) or [GCC](https://gcc.gnu.org/). 

Compiled versions (32-bit only) are also available:
* [EXE](MsgBoxEXE/bin/Release/MsgBoxEXE.exe) (MD5 hash: 7f3aad78d9023036188ac05afec4ee5e)
* [DLL](MsgBoxDLL/bin/Release/MsgBoxDLL.dll) (MD5 hash: 99b824d3f8cf9f0cb708e8c3b09cf8db)

#### Using

Execute or call the EXE or DLL. For the DLL, you can use _rundll_, for example:
> rundll32 MsgBoxDLL.dll, MsgBox

#### Screenshots:

EXE

![MsgBox EXE](/exe.PNG "EXE") 


DLL

![MsgBox DLL](/dll.png "DLL")

### What else?

If you don't like these, or you need 64-bit binaries, you can check out Matt Nelson's [MessageBox](https://github.com/enigma0x3/MessageBox) version.

If you're looking for injection methods, have a look at Rui's [injectAllTheThings](https://github.com/fdiskyou/injectAllTheThings) project.
