#include <iostream>
#include<Windows.h>
using namespace std;
int laba5var9()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, fact = 1, n1, i;
	cout << "������� �����\n"; cin >> n;
	n1 = n;
	while (n1 > 1)
	{
		fact = fact * n1;
		n1 = n1 - 1;
	}
	cout << "��������� ����� " << n << " ����� " << fact;
	for (i = 3; i < 1000000; i++)
	{
		if ((i - 2) * (i - 1) * (i) == fact)
		{
			cout << "\n�����";
			break;
		}
		if (i == 1000000 - 1)
		{
			cout << "\n������";
		}
	}
	return 0;
}