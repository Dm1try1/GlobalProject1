#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "1) Сумма" << endl;
	cout << "2) Разность" << endl;
	cout << "3) Умножение" << endl;
	cout << "4) Деление" << endl;
	cout << "Введите номер операции" << endl;
	cin >> a ;
	switch (a)
	{
	case 1: 
	{
		double  b1,b;
		cout << "Введите первую переменную" << endl;
		cin >> b1;
		cout << "Введите вторую переменную" << endl;
		cin >> b;
		cout << MySum(b1, b) << endl;
		break;
	}
	case 2:
	{
		double c, c1;;
		cout << "Введите первую переменную" << endl;
		cin >> c1;
		cout << "Введите вторую переменную" << endl;
		cin >> c;
		cout << MyVich(c1, c) << endl;
		break;
	}
	case 3:cout << "Функция в разработке" << endl;
	case 4:cout << "Функция в разработке" << endl;
	default:
		break;
	}
	system("pause");
	return 0;
}