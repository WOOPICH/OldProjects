#pragma once
#include "stdafx.h"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

struct Specialization
{
	string Name;
	string Spec;
	int Code;
};

void Create_txt(int &c);
void Out_File_txt();
void Update_File(int &c);
void New_txt(int c);
void Create_bin_file(ifstream &ft, ofstream &fb, vector<Specialization> &s);
void Out_bin_file(ifstream &fb, int a);
void New_txt_High_School(vector<Specialization> s);
void Change_Code(vector<Specialization> &s);