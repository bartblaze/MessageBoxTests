#include <iostream>
#include <windows.h>

using namespace std;

typedef int (*MsgFunction)(int);

HINSTANCE hinstDLL;

int main(){
  MsgFunction MsgBox(0);
  hinstDLL = LoadLibrary("MsgBoxDLL.dll");
  if(hinstDLL != 0){
      MsgBox = (MsgFunction)GetProcAddress(hinstDLL, "MsgBox");
  }
  if(MsgBox == 0)cout << "MsgBox is NULL\n";
  int x = MsgBox(5);
  if(x == 5){
    cout << "Message displayed!\n";
  }
  FreeLibrary(hinstDLL);
  return 0;
}