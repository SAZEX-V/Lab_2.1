// Lab_02.cpp
// ��������� ����� �����������
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 9
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������

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
