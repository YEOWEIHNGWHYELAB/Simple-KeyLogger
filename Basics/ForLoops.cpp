#include <iostream>
#include <Winuser.h>

using namespace std;

int main() {
	char c;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "I am SECOND:" << j << endl;

		}
		cout << "I am First:" << i << endl;
	}
}