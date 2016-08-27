#include <iostream>
#include <climits>
#define ZERO 0
using namespace std;

int main() {
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " $, Sue has " << sue << " $" << endl;
	cout << "Add 1$ to both accounts" << endl;
	sam += 1;
	sue += 1;
	cout << "Sam : " << sam << " Sue : " << sue << endl;
	sam = sue = ZERO;
	cout << "Sam : " << sam << " Sue : " << sue << endl;
	cout << "Take 1$ from both accounts" << endl;
	sam -= 1;
	sue -= 1;
	cout << "Sam : " << sam << " Sue : " << sue << endl;
	cin.get();
	return 0;
}