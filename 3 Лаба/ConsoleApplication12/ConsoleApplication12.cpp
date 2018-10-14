// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void Inp(int& a)			//���� �����
{
	cout << "������� �����: ";
	cin >> a;
}

bool Check(int a)			//�������� �� ������� ���� � �����
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

void To_str(int a)			//������� ����� � ������ (� �������)
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
	cout << "���������� ������" << endl;
	for (int i = 1; i < count + 1; i++)
		cout << mas[i] << " ";
	cout << endl;
}

void change(char *&s, int &j)			//��������� ��������� ����� � ������ �����
}
	for (int t = j - 1; t >= 0; t--) //�������� �� 1 ������
		}
		s[t + 1] = s[t];
		}
	s[0] = s[j];  //������ ��������� ����� � ������
	s = (char*)realloc(s, j * sizeof(char));
}

void Delete(char *&s1, int &j)			 //��������� � ����� ������������� ����
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

void words(char s[])				 //����� ���� ���� ����������� � ���������	
{
	int i = 0;
	char *s1 = NULL;
	while (s[i] != '\0') {
		int j = 0;
		s1 = (char*)malloc(20);
		while (s[i] != '\0' && s[i] != ' ' && s[i] != ',') //�� ����� �����, ����������� ������ � �������
		{
			s1[j] = s[i];
			j++;
			i++;
		}
		change(s1, j);
		Delete(s1, j);
		s1[j] = '\0';  //���� � ����������� �����
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
		cout << "������������ ������ �3 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		cout << "����" << endl;
		cout << "1) ������� 1" << endl;
		cout << "2) ������� 2" << endl;
		cout << "0) �����" << endl;
		cout << "��� �����: ";
		cin >> ans;
		system("cls");
		cout << "������������ ������ �2 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		switch (ans)
		{
		case 1:				//1 �������
		{
			int a;
			Inp(a);
			if (!Check(a))
			{
				cout << "��������� ����� ������� �� �� ���� ���������� �/�" << endl;
				system("pause");
				break;
			}
			cout << "��������� ����� ������� �� ���� ���������� �/�" << endl;
			To_str(a);
			system("pause");
			break;
		}
		case 2:				//2 �������
		{
			char s[256];
			cout << "�������, ����������, ������, ������� ����� ��������� ��� ��������: " << endl;
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

