#include <iostream>
using namespace std;
#include <Windows.h>
int laba3var9()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c;
	cout << "������� �������� ������� a\n";
	cin >> a;
	cout << "������� �������� ������� b\n";
	cin >> b;
	cout << "������� �������� ������� c\n";
	cin >> c;
	if (a + b > c)
	{
		if (a + c > b)
		{
			if (b + c > a)
			{
				cout << "����������� ����������" << endl;
			}
			else {
				cout << "����������� �� ����������" << endl;
			}
		}
		else {
			cout << "����������� �� ����������" << endl;
		}
	}
	else {
		cout << "����������� �� ����������" << endl;
	}
	return 0;
}