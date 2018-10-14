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
		cout << "Лабораторная работа №5 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
		cout << "Задание 1:" << endl;
		cout << "Меню" << endl;
		cout << "1) Добавить объект" << endl;
		cout << "2) Вывести заранее созданный объект(с помощью конструктора с параметрами)" << endl;
		cout << "3) Вывести все добавленные объекты" << endl;
		cout << "Дополнительные операции:" << endl;
		cout << "4) По инвентарному номеру вернуть название и дату возврата книги" << endl;
		cout << "5) Определить, один ли автор у двух книг" << endl << endl;
		cout << "Задание 2:" << endl;
		cout << "Меню" << endl;
		cout << "6) Добавить объект" << endl;
		cout << "7) Вывести все добавленные объекты" << endl;
		cout << "Дополнительные операции:" << endl;
		cout << "8) По инвентарному номеру вернуть вид и второй параметр книги" << endl;
		cout << "9) Определить, относятся две выбранные книги к художественному виду" << endl << endl;
		cout << "0) Выход" << endl;
		cout << "Ваш выбор: ";
		cin >> ans;
		system("cls");
		cout << "Лабораторная работа №5 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
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