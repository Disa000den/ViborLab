#include <iostream>
using namespace std;
#define USE_MATH_DEFINES
#include<math.h>
#include<Windows.h>
int laba2var9()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double result, x;
	cout << "������� �������� x\n";
	cin >> x;
	result = sqrt(pow(x, 4) + 3 * x + 5) + abs(x);
	cout << "�������� ��������� ����� " << result;
	return 0;
}