#include <iostream>
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
	case 2:cout << "������� � ����������" << endl;
	case 3:cout << "������� � ����������" << endl;
	case 4:cout << "������� � ����������" << endl;
	default:
		break;
	}
	system("pause");
	return 0;
}