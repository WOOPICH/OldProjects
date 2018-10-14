// ConsoleApplication12.cpp: РѕРїСЂРµРґРµР»СЏРµС‚ С‚РѕС‡РєСѓ РІС…РѕРґР° РґР»СЏ РєРѕРЅСЃРѕР»СЊРЅРѕРіРѕ РїСЂРёР»РѕР¶РµРЅРёСЏ.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void Inp(int& a)			//Ввод числа
{
	cout << "Введите число: ";
	cin >> a;
}

bool Check(int a)			//Проверка на наличие букв в числе
{
	cin.clear();
	cin.sync();
	string s;
	getline(cin, s, '\n');
	for (auto x : s)
	{
		if (isdigit(x))
		{

		}
		else
		{
			cin.clear();
			cin.sync();
			return false;
		}
	}
	a = atoi(s.c_str());
	return true;
}

void To_str(int a)			//Перевод числа в строку (с выводом)
{
	int count = 0;
	int b = a;
	int c;
	while (a != 0)
	{
		a /= 10;
		count++;
	}
	char* mas = (char *)malloc(sizeof(char)*count);
	for (int i = count; i >= 0; i--)
	{
		c =  b % 10;
		mas[i] = c + '0';
		b /= 10;
	}
	cout << "Полученная строка" << endl;
	for (int i = 1; i < count + 1; i++)
		cout << mas[i] << " ";
	cout << endl;
}

void change(char *&s, int &j)			//Поставить последнюю букву в начало слова
}
	for (int t = j - 1; t >= 0; t--) //смещение на 1 вправо
		}
		s[t + 1] = s[t];
		}
	s[0] = s[j];  //ставлю последнюю букву в начало
	s = (char*)realloc(s, j * sizeof(char));
}

void Delete(char *&s1, int &j)			 //удалениие в слове повторяющихся букв
{
	int k = 0;
	while (k < j) {
		bool copy = false;
		for (int l = 0; l < k; l++)
		{
			if (s1[k] == s1[l])
			{
				copy = true;
				break;
			}
		}
		if (copy)
		{
			j--;
			char buf = s1[k];
			s1[k] = s1[j];
			s1[j] = buf;
		}
		else
			k++;
	}
	s1 = (char*)realloc(s1, j * sizeof(char));
}

void words(char s[])				 //вывод всех слов предложения с условиями	
{
	int i = 0;
	char *s1 = NULL;
	while (s[i] != '\0') {
		int j = 0;
		s1 = (char*)malloc(20);
		while (s[i] != '\0' && s[i] != ' ' && s[i] != ',') //до конца слова, разделители пробел и запятая
		{
			s1[j] = s[i];
			j++;
			i++;
		}
		change(s1, j);
		Delete(s1, j);
		s1[j] = '\0';  //уйти с разделителя слова
		puts(s1);
		if (s[i] != '\0')
			i++;
	}
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int ans = 10;
	while (ans != 0)
	{
		system("cls");
		cout << "Лабораторная работа №3 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
		cout << "Меню" << endl;
		cout << "1) Задание 1" << endl;
		cout << "2) Задание 2" << endl;
		cout << "0) Выход" << endl;
		cout << "Ваш выбор: ";
		cin >> ans;
		system("cls");
		cout << "Лабораторная работа №2 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
		switch (ans)
		{
		case 1:				//1 Задание
		{
			int a;
			Inp(a);
			if (!Check(a))
			{
				cout << "Введенное число состоит не из цифр десятичной с/с" << endl;
				system("pause");
				break;
			}
			cout << "Введенное число состоит из цифр десятичной с/с" << endl;
			To_str(a);
			system("pause");
			break;
		}
		case 2:				//2 Задание
		{
			char s[256];
			cout << "Введите, пожалуйста, строку, отделяя слова пробелами ИЛИ запятыми: " << endl;
			cin.get();
			cin.get(s, 256, '\n');
			cout << endl;
			words(s);
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

