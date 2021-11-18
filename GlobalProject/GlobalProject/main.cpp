#include <iostream>
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
	system("pause");
	return 0;
}