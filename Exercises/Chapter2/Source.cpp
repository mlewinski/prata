#include <iostream>

using namespace std;

void print();
void convert();
void print1();
void print2();
void print3();
void AgeInMonths();
void CelciusToFahrenheit();
void LightYearsToAU();
void ParseTime(int, int);

int main() {
	CelciusToFahrenheit();

	cin.get();
	cin.get();
	return 0;
}

//	Task 1
void print() {
	cout << "Marek Lewinski github.com/mlewinski/";
}

//	Task 2
void convert() {
	cout << "Input length in meters:" << endl;
	double meters;
	cin >> meters;
	cout << meters << " m is " << meters / 1852.0 << " nautical miles" << endl;
}

// Task 3
void print1() {
	cout << "print1";
}
void print2() {
	cout << "print2";
}
void print3() {
	print1();
	print1();
	print2();
	print2();
}

// Task 4
void AgeInMonths() {
	cout << "Input age in years : " << endl;
	int age;
	cin >> age;
	cout << "Your age in months is " << 12 * age;
}

// Task 5
void CelciusToFahrenheit() {
	cout << "Input temperature in Celcius degrees" << endl;
	double celcius;
	cin >> celcius;
	cout << celcius << " in Celcius degrees is " << (1.8*celcius + 32.0) << " Fahenheit degrees" << endl;
}

// Task 6
void LightYearsToAU() {
	cout << "Input distance in light years" << endl;
	double lightYears;
	cin >> lightYears;
	cout << lightYears << " ly =  " << (63240 * lightYears) << " au" << endl;
}

void ParseTime(int hours, int minutes) {
	if (minutes >= 60) {
		hours += (minutes - (minutes % 60)) / 60;
	}
	cout << hours << ":" << minutes % 60;
}