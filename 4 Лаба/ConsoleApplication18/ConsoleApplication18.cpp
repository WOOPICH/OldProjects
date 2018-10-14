// ConsoleApplication18.cpp: определяет точку входа для консольного приложения.
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
			cout << "������������ ������ �4 ����-07-17 ������� �.�. ������� 7" << endl << endl;
			cout << "����" << endl;
			cout << "1) ������ ��������� �����" << endl;
			cout << "2) ����� ��������� �����" << endl;
			cout << "///////////////////////////////////" << endl;
			cout << "3) ���������� ����� � ����� ������" << endl;
			cout << "4) ���������� ���� �� ���� ������" << endl;
			cout << "5) ������� ����� ������ ����" << endl;
			cout << "6) ������ ����, ������� �� ���������� � �������� ����" << endl;
			cout << "0) �����" << endl;
			cout << "��� �����: ";
			cin >> answer;
			system("cls");
			cout << "������������ ������ �4 ����-07-17 ������� �.�. ������� 7" << endl << endl;
			switch (answer)
			{
			case 1:				//1 �������
			{
				inp(TUser);
				flag = true;
				system("pause");
				break;
			}
			case 2:				//2 �������
			{
				if (flag)
					out(TUser);
				else
					cout << "������ �������� \n ������� �����";
				system("pause");
				break;
			}
			case 3:				//3 �������
			{
				if (flag)
				{
					inpV(TUser, Users);
					flag = false;
					flagV = true;
				}
				else
					cout << "������ ��������� \n ������� �����";
				system("pause");
				break;
			}
			case 4:				//4 �������
			{
				if (Users.size() > 1)
					sort(Users);
				else
					cout << "������� ���� ��������� ��� ���������� \n �������� ���� �� ��� ���� �����" << endl;
				system("pause");
				break;
			}
			case 5:				//5 �������
			{
				cout << "����� � ������: " << endl;
				outV(Users);
				system("pause");
				break;
			}
			case 6:				//6 �������
			{
				if (flagV)
				{
					Not_back(Users, BadUsers);
					if (BadUsers.size() >= 1)
						outV(BadUsers);
					else
						cout << "��� ������� �������" << endl;
				}
				else
				{
					cout << "������ ����" << endl;
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


