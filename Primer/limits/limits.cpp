#include <iostream>
#include <climits>

using namespace std;

int main() {

	cout << "short : " << sizeof(short) << " B, max = " << SHRT_MAX << ", min = " << SHRT_MIN << endl;
	cout << "int : " << sizeof(int) << " B, max = " << INT_MAX << ", min = " << INT_MIN << endl;
	cout << "long : " << sizeof(long) << " B, max = " << LONG_MAX << ", min = " << LONG_MIN << endl;
	cout << "long long : " << sizeof(long long) << " B, max = " << LLONG_MAX << ", min = " << LLONG_MIN << endl;
	cout << "Bits per byte in current charset : " << CHAR_BIT << endl;

	cin.get();
	return 0;
}