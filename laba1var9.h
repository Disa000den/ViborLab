#include<iostream>
using namespace std;
#include<Windows.h>
int laba1var9()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double diag, plosh;
	cout << "������� ��������� ��������\n"; cin >> diag;
	plosh = diag * diag;
	cout << "������� �������� = " << plosh;
	return 0;
}