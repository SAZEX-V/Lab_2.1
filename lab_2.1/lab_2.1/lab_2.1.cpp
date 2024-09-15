// Lab_02.cpp
// Парфенюка Єгора Максимовича
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 9
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	z1 = pow((cos(x) - cos(y)), 2) - pow((sin(x) - sin(y)), 2);
	z2 = -4 * pow(sin(x - y / 2), 2) * cos(x + y);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
