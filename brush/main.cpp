#include <iostream>
#include <Windows.h>
#include <thread>

 void brush(){

 }

int _stdcall DllMain(void*, int r, void*) {
    if(r==1)
        std::thread(brush).detach();
    return 0;
}
