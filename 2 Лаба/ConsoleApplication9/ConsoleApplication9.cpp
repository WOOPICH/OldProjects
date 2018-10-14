#include "stdafx.h"
#include <iostream>
#include <iomanip>
#define row 11
#define col 4
using namespace std;

void autoin1(int arr[row][col])				//�������� ��� ������� �������
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			arr[i][j] = rand() % 30 + 15;
} 

void in1(int arr[row][col])					//���� ��� ������� �������
{
	cout << "������� ���������� ��������� ��� ������� ������ ������ ���������" << endl;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> arr[i][j];
}

void out1(int arr[row][col])					//����� ������� ��� ������� �������
{
	int c = 2;
	cout << "    �  �  �  �" << endl;
	cout << "1) ";
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
			if ((j == 3) && (c != 12))
			{
				cout << endl << c << ") ";
				c++;
			}
		}
}



void zad1(int arr[row][col])					//��������� � ������������ ������ ��������
{
	int temp = 0;
	int t = 0;
	int max = 0;
	int c = 1;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
		temp += arr[i][j];

		if ((max < temp) && (j == 3))
		{
			max = temp;
			t = i;
			cout << endl << "����� �������� " << c << " ��������� = " << temp;
			c++;
			temp = 0;
		} else
			if (j == 3)
			{
				cout << endl << "����� �������� " << c << " ��������� = " << temp;
				c++;
				temp = 0;
			}
		
	}
	cout << endl << "��������� � ������������ ����������� �������� - " << t + 1 << endl;
}

void ind(int **arr, int n, int m) // ���������� �������(�������������)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void autoind(int **arr, int n, int m) // ���������� �������(�������������,��������)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 999 + 500;
		}
	}
}

void out2(int **arr, int &n, int m)				//����� ������� ������� � �������� �������
{
	cout << "���������� ������" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) 
		{
			cout.width(5);
			cout << arr[i][j] << setw(3);
			if (j == m - 1 )
				cout << endl;
		}
}

bool kekus(int **arr, int n, int m)				//�������� ����� �� �����������
{
	int c = 0;
	for (int j = 0; j < m - 1; j++)
	{
		if (arr[n][j] < arr[n][j + 1])
		{
			c++;
			if (c == m - 1)
				return true;
		}
	}
	return false;
}

void zad2(int **arr, int &n, int m)                //�������� �����
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (kekus(arr, i, m))
		{
			for (int k = i; k < n - 1; k++)
			{
				for (int j = 0; j < m; j++)
				{
					arr[k][j] = arr[k + 1][j];
				}
			}
			i--;
			n--;
		}
	}
}

int zad3(int**arr, int n)				//������� 3
{
	int count = 0;
	int q;
	int c;
	double sum;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < n - i - 1)
			{
				sum = 0;
				c = 0;
				q = arr[i][j];
				while (q != 0)
				{
					sum += q % 10;
					q /= 10;
					c++;
				}
				sum /= c;
				if (sum > 7.5)
				{
					count++;
				}
			}
		}
	}
	return count;
}

int main()
{
	int  answer = 100;
	setlocale(LC_CTYPE, "RUS");
	srand(time(NULL));
	while (answer != 0)
	{
		system("cls");
		cout << "������������ ������ �2 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		cout << "����" << endl;
		cout << "1) ������� 1" << endl;
		cout << "2) ������� 2" << endl;
		cout << "3) ������� 3" << endl;
		cout << "0) �����" << endl;
		cout << "��� �����: ";
		cin >> answer;
		system("cls");
		cout << "������������ ������ �2 ����-07-17 ������� �.�. ������� 7" << endl << endl;
		switch (answer)
		{
		case 1:				//1 �������
		{
			int answer1;
			int A[row][col];
			cout << "����" << endl;
			cout << "1) �������������� ����" << endl;
			cout << "2) ��������������� ����" << endl;
			cout << "��� �����: ";
			cin >> answer1;
			system("cls");
			cout << "������������ ������ �2 ����-07-17 ������� �.�. ������� 7" << endl << endl;
			switch (answer1)
			{
			case 1:
			{
				autoin1(A);
				out1(A);
				zad1(A);
				system("pause");
				break;
			}
			case 2:
			{
				in1(A);
				out1(A);
				zad1(A);
				system("pause");
				break;
			}
			default:
				break;
			}
			break;
		}
		case 2:				//2 �������
		{
			int n;
			int m;
			int answer2 = 100;
			cout << "������� ���������� ����� �������" << endl;
			cin >> n;
			cout << "������� ���������� �������� �������" << endl;
			cin >> m;
				int **A1 = new int*[n];
			for (int i = 0; i < n; i++)
			{
				A1[i] = new int[m];
			}
			system("cls");
			cout << "����" << endl;
			cout << "1) �������������� ����" << endl;
			cout << "2) ��������������� ����" << endl;
			cout << "��� �����: ";
			cin >> answer2;
			system("cls");
			cout << "������������ ������ �2 ����-07-17 ������� �.�. ������� 7" << endl << endl;
			switch (answer2)
			{
				case 1:
				{
					autoind(A1, n, m);
					out2(A1, n, m);
					system("pause");
					break;
				}
				case 2:
				{
					ind(A1, n, m);
					out2(A1, n, m);
					system("pause");
					break;
				}
				default:
					break;
				}
			zad2(A1, n, m);
			out2(A1, n, m);
			system("pause");
			break;
		}
		case 3:				//3 �������
		{
			int n;
			int answer3 = 100;
			cout << "������� ���������� ����� � �������� �������" << endl;
			cin >> n;
			int **A2 = new int*[n];
			for (int i = 0; i < n; i++)
			{
				A2[i] = new int[n];
			}
			system("cls");
			cout << "����" << endl;
			cout << "1) �������������� ����" << endl;
			cout << "2) ��������������� ����" << endl;
			cout << "��� �����: ";
			cin >> answer3;
			system("cls");
			cout << "������������ ������ �2 ����-07-17 ������� �.�. ������� 7" << endl << endl;
			switch (answer3)
			{
			case 1:
			{
				autoind(A2, n, n);
				out2(A2, n, n);
				system("pause");
				break;
			}
			case 2:
			{
				ind(A2, n, n);
				out2(A2, n, n);
				system("pause");
				break;
			}
			default:
				break;
			}
			cout << endl << "�����, � ������� ����� ���� ������ 7.5 - " << zad3(A2, n) << endl;
			system("pause");
		}
		default:
			break;
		}
	}
	system("pause");
    return 0;
}

