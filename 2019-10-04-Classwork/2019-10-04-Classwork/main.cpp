// Name: Oba-ara Fashakin
// Intro to CS
// Period 1
// Mr. Williams
// 2019-10-04-Classwork

#include <iostream>
using namespace std;

int main()
{
	// 3
	float pi = 4 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0));
	float pi2 = 4 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0) + (1 / 13.0));
	cout << "Pi = " << pi << endl;
	cout << "Pi2 = " << pi2 << endl;

	// 4
	float c;
	cout << "Enter a degree in Celsius, young scholar: ";
	cin >> c;
	float f = (9 / 5.0) * c + 32;
	cout << c << "in Fahrenheit is " << f << endl;

	// 1
	float avspd;

	// Homework P1
	float circum = 2 * 5.5 * pi;
	float areaC = 2 * 5.5 * 5.5 * pi;
	cout << "Circumference = " << circum << endl;
	cout << "Area = " << areaC << endl;

	// Homework P2
	float perim = (2 * 4.5) + (2 * 7.9);
	float area = (4.5 * 7.9);
	cout << "Perimeter = " << perim << endl;
	cout << "Area = " << area << endl;
	
}
