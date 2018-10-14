#pragma once
#include "Unit_Def.h"

void inpV(LibraryUser a, vector<LibraryUser> &b)
{
	b.push_back(a);
}

void sort(vector<LibraryUser> &a)
{
	int min;
	for (unsigned int i = 0; i < (a.size() - 1); i++)
	{
		min = i;
		for (unsigned int j = i + 1; j < a.size(); j++)
		{
			if (((a[j].Give.day < a[min].Give.day) && (a[j].Give.month == a[min].Give.month) && (a[j].Give.year == a[min].Give.year)) || ((a[j].Give.month < a[min].Give.month) && (a[j].Give.year == a[min].Give.year)) || ((a[j].Give.year < a[min].Give.year)))
				min = j;
		}
		swap(a[i], a[min]);
	}
}

void Not_back(vector<LibraryUser> a, vector<LibraryUser> &b)
{
	for (unsigned int i = 0; i < a.size(); i++)
	{
		if (!((a[i].Back.day >= a[i].Give.day && a[i].Back.month == a[i].Give.month && a[i].Back.year == a[i].Give.year) || (a[i].Back.day <= a[i].Give.day && (a[i].Back.month - 1) == a[i].Give.month && a[i].Back.year == a[i].Give.year) || (a[i].Back.day <= a[i].Give.day && a[i].Back.month == 1 && a[i].Give.month == 12 && (a[i].Back.year - 1) == a[i].Give.year)))
			b.push_back(a[i]);
	}
}