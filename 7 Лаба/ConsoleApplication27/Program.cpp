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
		cout << "Лабораторная работа №7 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
		cout << "Задание 1:" << endl;
		cout << "Меню" << endl;
		cout << "1) Создание текстового файла" << endl;
		cout << "2) Вывод содержимого текстового файла" << endl;
		cout << "3) Добавление новой записи в конец" << endl;
		cout << "Дополнительные операции:" << endl;
		cout << "4) Создание нового файла из исходного, поделив все числа на количество строк" << endl << endl;
		cout << "Задание 2:" << endl;
		cout << "Меню" << endl;
		cout << "5) Преобразование данных в двоичный файл" << endl;
		cout << "6) Отображение записей двоичного файла" << endl;
		cout << "Дополнительные операции:" << endl;
		cout << "7) Сформировать список вузов, ведущих подготовку спец-ов по спец-ти с указанным номером" << endl;
		cout << "8) Изменить код специальности по названию" << endl << endl;
		cout << "0) Выход" << endl;
		cout << "Ваш выбор: ";
		cin >> ans;
		system("cls");
		cout << "Лабораторная работа №7 ИКБО-07-17 Данилов Д.Е. Вариант 7" << endl << endl;
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
