#include "stdafx.h"
#include "Prototypes.h"
#include <Windows.h>
#include <vector>

using namespace std;

int main()
{
	vector<Specialization> s;
	ifstream ft;
	ifstream fbb;
	fbb.open("myfile_Spec_2.txt");
	ofstream fb;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 0;
	int count = 0;
	int ans = 10;
	while (ans != 0)
	{
		system("cls");
		cout << "������������ ������ �7 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		cout << "������� 1:" << endl;
		cout << "����" << endl;
		cout << "1) �������� ���������� �����" << endl;
		cout << "2) ����� ����������� ���������� �����" << endl;
		cout << "3) ���������� ����� ������ � �����" << endl;
		cout << "�������������� ��������:" << endl;
		cout << "4) �������� ������ ����� �� ���������, ������� ��� ����� �� ���������� �����" << endl << endl;
		cout << "������� 2:" << endl;
		cout << "����" << endl;
		cout << "5) �������������� ������ � �������� ����" << endl;
		cout << "6) ����������� ������� ��������� �����" << endl;
		cout << "�������������� ��������:" << endl;
		cout << "7) ������������ ������ �����, ������� ���������� ����-�� �� ����-�� � ��������� �������" << endl;
		cout << "8) �������� ��� ������������� �� ��������" << endl << endl;
		cout << "0) �����" << endl;
		cout << "��� �����: ";
		cin >> ans;
		system("cls");
		cout << "������������ ������ �7 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		switch (ans)
		{
		case 1: Create_txt(count); system("pause"); break;
		case 2: Out_File_txt(); system("pause"); break;
		case 3: Update_File(count); system("pause"); break;
		case 4: New_txt(count); system("pause"); break;
		case 5: Create_bin_file(ft, fb, s); system("pause"); break;
		case 6: Out_bin_file(fbb, a); system("pause"); break;
		case 7: New_txt_High_School(s); system("pause"); break;
		case 8: Change_Code(s); system("pause"); break;
		default: break;
		}
	}
	return 0;
}
