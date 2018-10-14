#include "stdafx.h"
#include "Class.h"
#include "Second Class.h"
#include <vector>

using namespace std;
	
Type_Of_Book::Type_Of_Book()
{
	Type = "";
	Option = "";
}

Type_Of_Book::Type_Of_Book(int N, string A, string T, unsigned short day1, unsigned short month1, unsigned short year1, unsigned short day2, unsigned short month2, unsigned short year2) : LibraryUser(N,A,T,day1,month1,year1,day2,month2,year2)
{
	Type = "";
	Option = "";
}

Type_Of_Book::~Type_Of_Book()
{

}

///////////////////////////////////////

void Type_Of_Book::set_Type()
{
	cout << "������� ��� ����� (��� ��������!!!)" << endl;
	cin >> r;
	while (!spellcheck(r) || (r!="��������������" && r != "�����������" && r != "��������������" && r != "�����������"))
	{
		cout << "���������� ��� ���" << endl;
		cin >> r;
	}
	Type = r;
}

void Type_Of_Book::set_Option()
{
	if (Type == "��������������" || Type == "��������������")
	{
		cout << "������� ���� ����� (��� ��������!!!)" << endl;
		cin >> t;
		while (!spellcheck(t))
		{
			cout << "���������� ��� ���" << endl;
			cin >> t;
		}
		Option = t;
	}
	else
	{
		cout << "������� ��� ����������?" << endl;
		cin >> t;
		while (!spellcheck(t) || (t != "�������" && t != "����������" && t != "c������" && t != "c���������"))
		{
			cout << "���������� ��� ���" << endl;
			cin >> t;
		}
		Option = t;
	}
}

///////////////////////////////////////

string Type_Of_Book::get_Type()
{
	return Type;
}

string Type_Of_Book::get_Option()
{
	return Option;
}

void Type_Of_Book::Out_Type_Option(vector <Type_Of_Book> &Array)
{
	int a;
	cout << "������� ����������� ����� �����" << endl;
	cin >> a;
	while ((!digitcheck(a)) || a < 1 || a > 65535)
	{
		cout << "���������� ��� ���" << endl;
		cin >> a;
	}
	for each  (Type_Of_Book i in Array)
	{
		if (i.get_Number() == a)
		{
			cout << "��� ���� �����: ";
			cout << i.get_Type() << endl;
			cout << "������ �������� ���� �����: ";
			cout << i.get_Option() << endl;
		}
	}
}

bool Type_Of_Book::Is_Num_in_vector_v(int Num, vector <Type_Of_Book> Array)
{
	for each (Type_Of_Book i in Array)
	{
		if (Num == i.get_Number())
			return true;
	}
	return false;
}

void Type_Of_Book::solo_Art(vector <Type_Of_Book> &Array)
{
	int a, i1;
	string s;
	for (i1 = 0; i1 < 2; i1++)
	{
		cout << "������� ����������� ����� �����" << endl;
		cin >> a;
		while ((!digitcheck(a)) || a < 1 || a > 65535 || (!Is_Num_in_vector_v(a, Array)))
		{
			cout << "���������� ��� ���" << endl;
			cin >> a;
		}
		for each (Type_Of_Book i in Array)
		{
			if (i.get_Number() == a)
				if (i1 == 1)
					if ((i.get_Type() == "��������������" || i.get_Type() == "��������������") && s == i.get_Type())
						cout << "��� ��� ����� ��������������" << endl;
					else
						cout << "���� ��� ��� �� ���� ���� �� ��������������" << endl;
				else
					s = i.get_Type();
		}
	}
}

void Type_Of_Book::Inp_w(vector <Type_Of_Book> &Array)
{
	Type_Of_Book a;
	a.set_Number();
	a.set_Author();
	a.set_Title();
	a.set_Give();
	a.set_Back();
	a.set_Type();
	a.set_Option();

	Array.push_back(a);
}

void Type_Of_Book::Out_w(Type_Of_Book m)
{
	cout << m.get_Number() << ", " << m.get_Author() << ", " << m.get_Title() << endl;
	cout << m.get_Give().day << "." << m.get_Give().month << "." << m.get_Give().year << endl;
	cout << m.get_Back().day << "." << m.get_Back().month << "." << m.get_Back().year << endl;
	cout << m.get_Type() << ", " << m.get_Option() << endl << endl;
}