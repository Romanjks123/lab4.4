// Lab_03_1.cpp
// < Огоновський Роман >
// Лабораторна робота № 4.4
// Табуляція функції, заданої
//Табуляція функції, заданої графіком.
// Варіант 24

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double R, x, xS, xE, dX;

	cout << "xS = "; cin >> xS;
	cout << "xE = "; cin >> xE;
	cout << "R = "; cin >> R;
	cout << "dX = "; cin >> dX;

	cout << setw(1) << "x" << setw(11) << "f(x)" << endl;
	cout << "---------------------------------" << endl;

	for (x = xS; x < xE; x += dX) {
		if (x <= 0) {
			cout << "x= " << x << "\t" << "f(x)= " << -((R/6)*x)-R << endl;
		}
		else if (0 <= x && x <= R) {
			cout << "x= " << x << "\t" << "f(x)= " << -sqrt((R * R) - (x * x)) << endl;
		}
		else if (R <= x && x <= 2 * R) {
			cout << "x= " << x << "\t" << "f(x)= " << sqrt((R * R) - pow(x - (2 * R), 2)) << endl;
		}
		else {
			cout << "x= " << x << "\t" << "f(x)= " << R << endl;
		}
		cout << "---------------------------------" << endl;
	}
	return 0;
}
