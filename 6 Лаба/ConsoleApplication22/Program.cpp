// ConsoleApplication22.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Class.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	Digit a, b;
	a.set_array();
	int ans = 10;
	while (ans != 0)
	{
		system("cls");
		cout << "������������ ������ �6 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		cout << "����" << endl;
		cout << "1) ���� �� ��������� ����� � ���������" << endl;
		cout << "2) �������� ��������� ����� � ���������" << endl;
		cout << "3) �������� ���� ����� ��������" << endl;
		cout << "4) �������� ��������� ���� ����� ��������" << endl;
		cout << "5) ����� ������������ �������" << endl;
		cout << "0) �����" << endl;
		cout << "��� �����: ";
		cin >> ans;
		system("cls");
		cout << "������������ ������ �6 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		switch (ans)
		{
			case 1:				
			{	
				if (a.isinclude_2())
					cout << "����� ����� ����" << endl;
				else
					cout << "������ ����� ���" << endl;
				system("pause");
				break;
			}
			case 2:				
			{
				a.include();
				cout << a << endl;
				system("pause");
				break;
			}
			case 3:
			{
				a = a || b;
				cout << a << endl;
				system("pause");
				break;
			}
			case 4:
			{
				if (a == b)
					cout << "��������� �����" << endl;
				else
					cout << "��������� �������" << endl;
				system("pause");
				break;
			}
			case 5:
			{
				cout << a << endl;
				system("pause");
				break;
			}
			default:
				break;
		}
	}
	system("pause");
    return 0;
}

