#pragma once
#include "Unit_Def.h"

bool digitcheck(unsigned int a)
{
	cin.clear();
	cin.sync();
	string s;
	getline(cin, s, '\n');
	for (auto x : s)
	{
		if (!isdigit(x))
		{
			cin.clear();
			cin.sync();
			return false;
		}
	}
	return true;
}

bool spellcheck(string a)
{
	cin.clear();
	cin.sync();
	for (auto x : a)
	{
		if (isdigit(x))
		{
			cin.clear();
			cin.sync();
			return false;
		}
	}
	return true;
}

void inp(LibraryUser &a) //Ввод структуры
{
	cout << "Введиите номер книги" << endl;
	cin >> a.iNumber;
	while ((!digitcheck(a.iNumber)) || a.iNumber < 1 || a.iNumber > 65535)
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.iNumber;
	}
	///////////////////////////////////
	cout << "Введите автора книги (Без пробелов!!!)" << endl;
	cin >> a.Author;
	while (!spellcheck(a.Author))
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.Author;
	}
	///////////////////////////////////
	cout << "Введите название книги (Без пробелов!!!)" << endl;
	cin >> a.Title;
	while (!spellcheck(a.Title))
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.Title;
	}
	///////////////////////////////////
	cout << "Введите дату выдачи книги" << endl;
	cout << "День: ";
	cin >> a.Give.day;
	while ((!digitcheck(a.Give.day)) || a.Give.day < 1 || a.Give.day > 31)
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.Give.day;
	}
	cout << "Месяц: ";
	cin >> a.Give.month;
	while ((!digitcheck(a.Give.month)) || a.Give.month < 1 || a.Give.month > 12)
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.Give.month;
	}
	cout << "Год: ";
	cin >> a.Give.year;
	while ((!digitcheck(a.Give.year)) || a.Give.year < 1 || a.Give.year > 2018)
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.Give.year;
	}
	///////////////////////////////////
	cout << "Введите дату возврата книги" << endl;
	cout << "День: ";
	cin >> a.Back.day;
	while ((!digitcheck(a.Back.day)) || a.Back.day < 1 || a.Back.day > 31)
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.Back.day;
	}
	cout << "Месяц: ";
	cin >> a.Back.month;
	while ((!digitcheck(a.Back.month)) || a.Back.month < 1 || a.Back.month > 12)
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.Back.month;
	}
	cout << "Год: ";
	cin >> a.Back.year;
	while ((!digitcheck(a.Back.year)) || a.Back.year < 1 || a.Back.year > 2018 || (a.Back.day < a.Give.day && a.Back.month <= a.Give.month && a.Back.year <= a.Give.year) || (a.Back.month < a.Give.month && a.Back.year <= a.Give.year) || (a.Back.year < a.Give.year))
	{
		cout << "Попробуйте еще раз" << endl;
		cin >> a.Back.year;
	}
	cout << endl;
}

void out(LibraryUser a)
{
	cout << "Номер книги - " << a.iNumber << endl;
	cout << "Автор книги - " << a.Author << endl;
	cout << "Название книги - " << a.Title << endl;
	cout << "Дата выдачи - " << a.Give.day << "." << a.Give.month << "." << a.Give.year << endl;
	cout << "Дата возврата - " << a.Back.day << "." << a.Back.month << "." << a.Back.year << endl;
}

void outV(vector<LibraryUser> a)
{
	for (unsigned int i = 0; i < a.size(); i++)
	{
		cout << (i + 1) << ")" << endl;
		cout << "Номер книги - " << a[i].iNumber << endl;
		cout << "Автор книги - " << a[i].Author << endl;
		cout << "Название книги - " << a[i].Title << endl;
		cout << "Дата выдачи - " << a[i].Give.day << "." << a[i].Give.month << "." << a[i].Give.year << endl;
		cout << "Дата возврата - " << a[i].Back.day << "." << a[i].Back.month << "." << a[i].Back.year << endl << endl;
	}
}

