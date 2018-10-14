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

void inp(LibraryUser &a) //���� ���������
{
	cout << "�������� ����� �����" << endl;
	cin >> a.iNumber;
	while ((!digitcheck(a.iNumber)) || a.iNumber < 1 || a.iNumber > 65535)
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.iNumber;
	}
	///////////////////////////////////
	cout << "������� ������ ����� (��� ��������!!!)" << endl;
	cin >> a.Author;
	while (!spellcheck(a.Author))
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.Author;
	}
	///////////////////////////////////
	cout << "������� �������� ����� (��� ��������!!!)" << endl;
	cin >> a.Title;
	while (!spellcheck(a.Title))
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.Title;
	}
	///////////////////////////////////
	cout << "������� ���� ������ �����" << endl;
	cout << "����: ";
	cin >> a.Give.day;
	while ((!digitcheck(a.Give.day)) || a.Give.day < 1 || a.Give.day > 31)
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.Give.day;
	}
	cout << "�����: ";
	cin >> a.Give.month;
	while ((!digitcheck(a.Give.month)) || a.Give.month < 1 || a.Give.month > 12)
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.Give.month;
	}
	cout << "���: ";
	cin >> a.Give.year;
	while ((!digitcheck(a.Give.year)) || a.Give.year < 1 || a.Give.year > 2018)
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.Give.year;
	}
	///////////////////////////////////
	cout << "������� ���� �������� �����" << endl;
	cout << "����: ";
	cin >> a.Back.day;
	while ((!digitcheck(a.Back.day)) || a.Back.day < 1 || a.Back.day > 31)
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.Back.day;
	}
	cout << "�����: ";
	cin >> a.Back.month;
	while ((!digitcheck(a.Back.month)) || a.Back.month < 1 || a.Back.month > 12)
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.Back.month;
	}
	cout << "���: ";
	cin >> a.Back.year;
	while ((!digitcheck(a.Back.year)) || a.Back.year < 1 || a.Back.year > 2018 || (a.Back.day < a.Give.day && a.Back.month <= a.Give.month && a.Back.year <= a.Give.year) || (a.Back.month < a.Give.month && a.Back.year <= a.Give.year) || (a.Back.year < a.Give.year))
	{
		cout << "���������� ��� ���" << endl;
		cin >> a.Back.year;
	}
	cout << endl;
}

void out(LibraryUser a)
{
	cout << "����� ����� - " << a.iNumber << endl;
	cout << "����� ����� - " << a.Author << endl;
	cout << "�������� ����� - " << a.Title << endl;
	cout << "���� ������ - " << a.Give.day << "." << a.Give.month << "." << a.Give.year << endl;
	cout << "���� �������� - " << a.Back.day << "." << a.Back.month << "." << a.Back.year << endl;
}

void outV(vector<LibraryUser> a)
{
	for (unsigned int i = 0; i < a.size(); i++)
	{
		cout << (i + 1) << ")" << endl;
		cout << "����� ����� - " << a[i].iNumber << endl;
		cout << "����� ����� - " << a[i].Author << endl;
		cout << "�������� ����� - " << a[i].Title << endl;
		cout << "���� ������ - " << a[i].Give.day << "." << a[i].Give.month << "." << a[i].Give.year << endl;
		cout << "���� �������� - " << a[i].Back.day << "." << a[i].Back.month << "." << a[i].Back.year << endl << endl;
	}
}

