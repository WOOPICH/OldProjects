#include "stdafx.h"
#include "Class.h"
#include "Second Class.h"
#include "Menu.h"
#include <vector>
#include <Windows.h>
using namespace std;

Menu::Menu()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

Menu::~Menu()
{

}

void Menu::show_Menu()
{
	LibraryUser User_3{ 25, "B.B.Bee", "Honey", 25, 1, 1999, 24, 2, 1999 };
	LibraryUser w;
	Type_Of_Book v;
	vector<Type_Of_Book> Array1;
	vector <LibraryUser> Array;
	int ans = 10;
	while (ans != 0)
	{
		system("cls");
		cout << "������������ ������ �5 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		cout << "������� 1:" << endl;
		cout << "����" << endl;
		cout << "1) �������� ������" << endl;
		cout << "2) ������� ������� ��������� ������(� ������� ������������ � �����������)" << endl;
		cout << "3) ������� ��� ����������� �������" << endl;
		cout << "�������������� ��������:" << endl;
		cout << "4) �� ������������ ������ ������� �������� � ���� �������� �����" << endl;
		cout << "5) ����������, ���� �� ����� � ���� ����" << endl << endl;
		cout << "������� 2:" << endl;
		cout << "����" << endl;
		cout << "6) �������� ������" << endl;
		cout << "7) ������� ��� ����������� �������" << endl;
		cout << "�������������� ��������:" << endl;
		cout << "8) �� ������������ ������ ������� ��� � ������ �������� �����" << endl;
		cout << "9) ����������, ��������� ��� ��������� ����� � ��������������� ����" << endl << endl;
		cout << "0) �����" << endl;
		cout << "��� �����: ";
		cin >> ans;
		system("cls");
		cout << "������������ ������ �5 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		switch (ans)
		{
		case 1:
		{
			w.Inp_v(Array);
			system("pause");
			break;
		}
		case 2:
		{
			w.Out_v(User_3);
			system("pause");
			break;
		}
		case 3:
		{
			for each (LibraryUser i in Array)
			{
				w.Out_v(i);
			}
			system("pause");
			break;
		}
		case 4:
		{
			w.Out_Title_Back(Array);
			system("pause");
			break;
		}
		case 5:
		{
			w.solo_Author(Array);
			system("pause");
			break;
		}
		case 6:
		{
			v.Inp_w(Array1);
			system("pause");
			break;
		}
		case 7:
		{
			for each (Type_Of_Book i in Array1)
			{
				v.Out_w(i);
			}
			system("pause");
			break;
		}
		case 8:
		{
			v.Out_Type_Option(Array1);
			system("pause");
			break;
		}
		case 9:
		{
			v.solo_Art(Array1);
			system("pause");
			break;
		}
		default:
			break;
		}
	}
	system("pause");
}