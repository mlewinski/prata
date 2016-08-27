#include <iostream>

using namespace std;

int main() {
	int a = 42;
	int b = 0x42;
	int c = 042;

	cout << a << " ?= " << b << " ?= " << c << endl;

	cout << hex;
	cout << a << " " << b << " " << c << endl;
	cin.get();
	return 0;
}