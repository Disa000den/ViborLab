#include<iostream>
using namespace std;
#include<Windows.h>
int laba1var9()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double diag, plosh;
	cout << "¬ведите диагональ квадрата\n"; cin >> diag;
	plosh = diag * diag;
	cout << "ѕлощадь квадрата = " << plosh;
	return 0;
}