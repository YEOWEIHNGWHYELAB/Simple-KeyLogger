#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream read("../Text/HelloWorld.txt");

    string x;

    read >> x;

    cout << x;

    return 0;
}