#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "1) �����" << endl;
	cout << "2) ��������" << endl;
	cout << "3) ���������" << endl;
	cout << "4) �������" << endl;
	cout << "������� ����� ��������" << endl;
	cin >> a ;
	switch (a)
	{
	case 1: 
	{
		double  b1,b;
		cout << "������� ������ ����������" << endl;
		cin >> b1;
		cout << "������� ������ ����������" << endl;
		cin >> b;
		cout << MySum(b1, b) << endl;
		break;
	}
	case 2:
	{
		double c, c1;;
		cout << "������� ������ ����������" << endl;
		cin >> c1;
		cout << "������� ������ ����������" << endl;
		cin >> c;
		cout << MyVich(c1, c) << endl;
		break;
	}
	case 3:cout << "������� � ����������" << endl;
	case 4:cout << "������� � ����������" << endl;
	default:
		break;
	}
	system("pause");
	return 0;
}