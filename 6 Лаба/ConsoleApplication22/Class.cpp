#include "stdafx.h"
#include "Class.h"
#include <iostream>
#include <string>
#include <vector>

Digit::Digit()
{

}

Digit::Digit(vector<int> array)
{
	Array = array;
}

Digit::~Digit()
{

}

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

void Digit::set_array()
{
	cout << "Введите количество элементов множества" << endl;
	cin >> N;
	while (!digitcheck(N))
	{
		cout << "Неверный ввод" << endl;
		cin >> N;
	}
	cout << "Введите " << N << " целых числа(чисел) множества" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		while (!digitcheck(a) || isinclude(a))
		{
			cout << "Неверный ввод или такое число уже имеется" << endl;
			cin >> a;
		}
		Array.push_back(a);
	}
}

vector<int> Digit::get_array()
{
	return Array;
}

bool Digit::isinclude(int a)
{
	len = Array.size();
	for (int i = 0; i < len; i++)
	{
		if (Array[i] == a)
			return true;
	}
	return false;
}

bool Digit::isinclude_2()
{
	cout << "Введите число" << endl;
	cin >> a;
	while (!digitcheck(a))
	{
		cout << "Неверный ввод" << endl;
		cin >> a;
	}
	len = Array.size();
	for (int i = 0; i < len; i++)
	{
		if (Array[i] == a)
			return true;
	}
	return false;
}

void Digit::include()
{
	cout << "Введите число" << endl;
	cin >> a;
	while (!digitcheck(a) || isinclude(a))
	{
		cout << "Неверный ввод или такое число уже имеется" << endl;
		cin >> a;
	}
	Array.push_back(a);
}
	
ostream &operator<<(ostream &os, Digit v)
{
	for (int i = 0; i < v.get_array().size(); i++)
	{
		os << v.Array[i] << " ";
	}
	os << endl;
	return os;
}

Digit Digit::operator||(Digit& v)
{
	v.Array.clear();
	v.set_array();
	vector<int> s = v.Array;
	cout << "Множество 1 " << endl << v;
	v.Array.clear();
	v.set_array();
	vector<int> s1 = v.Array;
	cout << "Множество 2 " << endl << v;
	for (int i = 0; i < s1.size(); i++)
	{
		s.push_back(s1[i]);
	}
	cout << "Общее множество" << endl;
	return Digit(s);
}

bool Digit::operator==(Digit& v)
{
	v.Array.clear();
	v.set_array();
	vector<int> s = v.Array;
	cout << "Множество 1 " << endl << v;
	v.Array.clear();
	v.set_array();
	vector<int> s1 = v.Array;
	cout << "Множество 2 " << endl << v;
	if (s.size() == s1.size())
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == s1[i])
				count++;
		}
	if (count == s.size())
		return true;
	return false;
}