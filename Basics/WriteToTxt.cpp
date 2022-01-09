#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream write("../Text/HelloWorld.txt");

    write << "Hello World!" << endl;

    write.close();

    return 0;
}