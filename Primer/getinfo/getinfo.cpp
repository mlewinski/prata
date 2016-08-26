#include <iostream>

int main() {
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here, two more" << endl;
	carrots += 2;
	cout << "Now you have " << carrots << " carrots" << endl;
	cin.get();
	cin.get();
	return 0;
}