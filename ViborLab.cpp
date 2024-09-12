#include "laba1var9.h"
#include "laba2var9.h"
#include "laba3var9.h"
#include "laba4var9.h"
#include "laba5var9.h"
#include <iostream>
#include <stdlib.h>
#include<Windows.h>
#define USE_MATH_DEFINES
#include<math.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool flag=TRUE;
	char answ_bukv, temp;
	int answ_numb;
	while (flag == TRUE)
	{
		cout << "Вы сейчас в меню выбора лабораторных работ\n";
		cout << "У каждой работы свой ключ он написан после знака =\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Лабораторная работа 1 = 1\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Лабораторная работа 2 = 2\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Лабораторная работа 3 = 3\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Лабораторная работа 4 = 4\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Лабораторная работа 5 = 5\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Выберите ключ\n";
		cin >> answ_numb;
		system("cls");
		switch (answ_numb)
		{
		case 1:
			laba1var9();
			cout << "\n";
			cout << "--------------------------------------------------------------------";
			cout << "\n";
			break;
		case 2:
			laba2var9();
			cout << "\n";
			cout << "--------------------------------------------------------------------";
			cout << "\n";
			break;
		case 3:
			laba3var9();
			cout << "\n";
			cout << "--------------------------------------------------------------------";
			cout << "\n";
			break;
		case 4:
			laba4var9();
			cout << "\n";
			cout << "--------------------------------------------------------------------";
			cout << "\n";
			break;
		case 5:
			laba5var9();
			cout << "\n";
			cout << "--------------------------------------------------------------------";
			cout << "\n";
			break;
		default:
			cout << "\nРаботы с таким ключом нет\n";
		}
		cout << "Хотите ли вы продолжить запуск других работ?\n";
		cout << "Продолжить - Y/y\nЗавершить - N/n\n";
		cin >> answ_bukv;
		if (answ_bukv == 'Y' or answ_bukv == 'y')
		{
			flag = TRUE;
		}
		else if (answ_bukv == 'N' or answ_bukv == 'n')
		{
			flag = FALSE;
		}
		else
		 {
			cout << "Введён неверный символ, программа завершает работу\n";
			cout << "Введите любой символ и нажмите enter для выхода из программы\n";
			cin >> temp;
			flag = FALSE;
		}
		system("cls");
	}
	return 0;
}