#include <iostream>
#include <cmath>

int main() {
	using namespace std;

	double area;
	cout << "Input area in square meters : " << endl;
	cin >> area;
	cout << "It's square with " << sqrt(area) << " meters long edge!" << endl;
	cin.get();
	cin.get();
	return 0;
}