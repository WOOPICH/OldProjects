#pragma once
#include "MyForm.h"
#include <cliext/vector>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Media;
using namespace System::Drawing;
using namespace cliext;


	bool Check(vector<PictureBox^>^ v, System::Drawing::Rectangle^ ClientRectangle)
	{
		for (int i = 0; i < v->size(); i++)
		{
			if (!(v[i]->Location.X - v[i]->Width - 1 > 0 && v[i]->Location.Y - v[i]->Height - 1 > 0 && v[i]->Location.X + v[i]->Width + 1 < ClientRectangle->Width && v[i]->Location.Y + v[i]->Height + 1 < ClientRectangle->Height))
			{
				return false;
			}
		}
		return true;
	}

	void do_it_1(int &c, int &j)
	{
		if (c == 3)
		{
			c = 0;
			j += 3;
		}
	}

	void do_it_2(int &c, int &j)
	{
		if (c > 0)
			c--;
		else if (j > 0)
		{
			j -= 3;
			c = 2;
		}
	}

	void Turn_Around(int X, int newX, Image^ im, bool &Right, vector<PictureBox^>^ v)
	{
		if (X > newX && Right)
		{
			im->RotateFlip(System::Drawing::RotateFlipType::Rotate180FlipY);
			for (int i = 0; i < v->size(); i++)
			{
				v[i]->Image = im;
			}
			Right = false;
		}
		if (X < newX && !Right)
		{
			im->RotateFlip(System::Drawing::RotateFlipType::Rotate180FlipY);
			for (int i = 0; i < v->size(); i++)
			{
				v[i]->Image = im;
			}
			Right = true;
		}
	}

	void Turn_Around1(int X, int newX, Image^ im, bool &Left, vector<PictureBox^>^ v)
	{
		if (X > newX && !Left)
		{
			im->RotateFlip(System::Drawing::RotateFlipType::Rotate180FlipY);
			for (int i = 0; i < v->size(); i++)
			{
				v[i]->Image = im;
			}
			Left = true;
		}
		if (X < newX && Left)
		{
			im->RotateFlip(System::Drawing::RotateFlipType::Rotate180FlipY);
			for (int i = 0; i < v->size(); i++)
			{
				v[i]->Image = im;
			}
			Left = false;
		}
	}
