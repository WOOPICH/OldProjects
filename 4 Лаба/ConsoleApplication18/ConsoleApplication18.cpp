// ConsoleApplication18.cpp: РѕРїСЂРµРґРµР»СЏРµС‚ С‚РѕС‡РєСѓ РІС…РѕРґР° РґР»СЏ РєРѕРЅСЃРѕР»СЊРЅРѕРіРѕ РїСЂРёР»РѕР¶РµРЅРёСЏ.
//

#include "stdafx.h"
#include "Unit_Def.h"
#include "Unit_Operation.h"
#include "Unit_Input_Output.h"

	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		LibraryUser TUser;
		vector<LibraryUser> Users;
		vector<LibraryUser> BadUsers;
		bool flag = false;
		bool flagV = false;
		int  answer = 100;
		while (answer != 0)
		{
			system("cls");
			cout << "Лабораторная работа №4 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
			cout << "Меню" << endl;
			cout << "1) Запись отдельной книги" << endl;
			cout << "2) Вывод отдельной книги" << endl;
			cout << "///////////////////////////////////" << endl;
			cout << "3) Добавление книги в общий список" << endl;
			cout << "4) Сортировка книг по дате выдачи" << endl;
			cout << "5) Вывести общий список книг" << endl;
			cout << "6) Список книг, которые не возвращены в месячный срок" << endl;
			cout << "0) Выход" << endl;
			cout << "Ваш выбор: ";
			cin >> answer;
			system("cls");
			cout << "Лабораторная работа №4 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
			switch (answer)
			{
			case 1:				//1 Задание
			{
				inp(TUser);
				flag = true;
				system("pause");
				break;
			}
			case 2:				//2 Задание
			{
				if (flag)
					out(TUser);
				else
					cout << "Нечего выводить \n Введите книгу";
				system("pause");
				break;
			}
			case 3:				//3 Задание
			{
				if (flag)
				{
					inpV(TUser, Users);
					flag = false;
					flagV = true;
				}
				else
					cout << "Нечего добавлять \n Введите книгу";
				system("pause");
				break;
			}
			case 4:				//4 Задание
			{
				if (Users.size() > 1)
					sort(Users);
				else
					cout << "Слишком мало элементов для сортировки \n Добавьте хотя бы еще одну книгу" << endl;
				system("pause");
				break;
			}
			case 5:				//5 Задание
			{
				cout << "Книги в списке: " << endl;
				outV(Users);
				system("pause");
				break;
			}
			case 6:				//6 Задание
			{
				if (flagV)
				{
					Not_back(Users, BadUsers);
					if (BadUsers.size() >= 1)
						outV(BadUsers);
					else
						cout << "Все вернули вовремя" << endl;
				}
				else
				{
					cout << "Список пуст" << endl;
				}
				BadUsers.clear();
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


