// ConsoleApplication22.cpp: РѕРїСЂРµРґРµР»СЏРµС‚ С‚РѕС‡РєСѓ РІС…РѕРґР° РґР»СЏ РєРѕРЅСЃРѕР»СЊРЅРѕРіРѕ РїСЂРёР»РѕР¶РµРЅРёСЏ.
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
		cout << "Лабораторная работа №6 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
		cout << "Меню" << endl;
		cout << "1) Есть ли введенное число в множестве" << endl;
		cout << "2) Добавить введенное число в множество" << endl;
		cout << "3) Сложение двух новых множеств" << endl;
		cout << "4) Проверка равенства двух новых множеств" << endl;
		cout << "5) Вывод изначального массива" << endl;
		cout << "0) Выход" << endl;
		cout << "Ваш выбор: ";
		cin >> ans;
		system("cls");
		cout << "Лабораторная работа №6 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
		switch (ans)
		{
			case 1:				
			{	
				if (a.isinclude_2())
					cout << "Такое число есть" << endl;
				else
					cout << "Такого числа нет" << endl;
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
					cout << "Множества равны" << endl;
				else
					cout << "Множества неравны" << endl;
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

