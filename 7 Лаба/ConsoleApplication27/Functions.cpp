#include "stdafx.h"
#include "Prototypes.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <string.h>

using namespace std;

void Create_txt(int &c)
{
	ofstream f("myfile.txt");
	cout << "¬ведите количество строк" << endl;
	cin >> c;
	for (int i = 1; i <= c; i++)
	{
		f << i << endl;
	}
	f.close();
}

void Out_File_txt()
{
	char ch = 0;
	ifstream in("myfile.txt");
	while ((ch = in.get()) != EOF)
	{
		cout << ch;
	}
	in.close();
}

void Update_File(int &c)
{
	ofstream f;
	string a;
	getchar();
	getline(cin, a, '\n');
	f.open("myfile.txt", ios::out | ios::app);
	f << a << endl;
	c++;
	f.close();
}

void New_txt(int c)
{
	int a;
	ofstream f("myfile_1.txt");
	ifstream in("myfile.txt");
	for (int i = 1; i <= c; i++)
	{
		in >> a;
		a /= c;
		f << a << endl;
		a = 0;
	}
	f.close();
	in.close();
}


void Create_bin_file(ifstream &ft, ofstream &fb, vector<Specialization> &s)
{
	ft.open("myfile_Spec.txt", ios::out);
	fb.open("myfile_Spec_2.txt", ios::out | ios::binary);
	Specialization x;
	while (!ft.eof())
	{
		getline(ft, x.Name);
		getline(ft, x.Spec);
		ft >> x.Code;
		ft.get();
		fb.write((char *)&x, sizeof(Specialization));
		fb.clear();
		s.push_back(x);
	}
	ft.close();
	fb.close();
}


void Out_bin_file(ifstream &fb, int a)	
{
	Specialization x;
	fb.read((char *)&x, sizeof(Specialization));
	while (!fb.eof())
	{
		cout << x.Name << endl;
		cout << x.Spec << endl;
		cout << x.Code << endl;
		fb.read((char *)&x, sizeof(Specialization));	
	}
	fb.close();
}

void New_txt_High_School(vector<Specialization> s)
{
	int a;
	ofstream f("High_School.txt");
	cout << "¬ведите код специальности" << endl;
	cin >> a;
	for (int i = 0; i < s.size(); i++)
		if (a == s[i].Code)
			f << s[i].Name << endl;
}

void Change_Code(vector<Specialization> &s)
{
	ofstream ft("myfile_Spec.txt", ios::out);
	string ss;
	int a;
	int temp;
	cout << "¬ведите название вуза" << endl;
	cin >> ss;
	for (int i = 0; i < s.size(); i++)
	{
		if (ss == s[i].Name)
		{
			cout << "¬ведите новый код специальности" << endl;
			cin >> a;
			temp = s[i].Code;
			for (int j = 0; j < s.size(); j++)
			{
				if (s[j].Code == temp)
				{
					s[j].Code = a;
				}
			}
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		ft << s[i].Name << endl;
		ft << s[i].Spec << endl;
		ft << s[i].Code << endl;
	}
}