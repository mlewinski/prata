#include <iostream>

double stonetolb(double);

int main() {
	using namespace std;

	double stone;
	cout << "Input weight in stones" << endl;
	cin >> stone;
	double pounds = stonetolb(stone);
	cout << stone << " stones = " << pounds << " pounds" << endl;
	cin.get();
	cin.get();
	return 0;
}

double stonetolb(double stone) {
	return 14 * stone;
}