#include <iostream>

void simon(int);

using namespace std;

int main() {
	int n;
	cout << "Number of times : " << endl;
	cin >> n;
	simon(n);
	cin.get();
	cin.get();
	return 0;
}

void simon(int n) {
	cout << "Touch your toes " << n << " times!" << endl;
}