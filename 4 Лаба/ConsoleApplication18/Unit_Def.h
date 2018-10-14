#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

struct Date
{
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

struct LibraryUser
{
	unsigned int iNumber;
	string Author;
	string Title;
	Date Give;
	Date Back;
};