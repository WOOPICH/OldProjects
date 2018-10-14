#pragma once
#include "MyForm.h"
#include "MyNamespace.h"
#include <cliext/vector>
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Media;
using namespace System::Drawing;
using namespace cliext;


ref class Taquarium
{
public:
	Taquarium()
	{
		
	}

	~Taquarium()
	{

	}

	void Init(Label^ On_button, vector<PictureBox^>^ Karp, Label^ Karp_Plus, Label^ Shuk_Plus, Label^ l1, Label^ l2, PictureBox^ pictureBox1, Timer^ timer1, PictureBox^ pictureBox15,  vector<PictureBox^>^ Shuk, Label^ l3, Label^ l4)
	{
		SoundPlayer^ a = gcnew SoundPlayer("Sound.wav");
		a->Play();
		On_button->Visible = false;
		Karp_Plus->Visible = true;
		Shuk_Plus->Visible = true;
		pictureBox1->Visible = true;
		pictureBox15->Visible = true;
		l1->Visible = true;
		l2->Visible = true;
		l3->Visible = true;
		l4->Visible = true;
		Shuk->push_back(pictureBox15);
		Karp->push_back(pictureBox1);
		timer1->Enabled = true;
	}
};

ref class TFish : public Taquarium
{
public:
	TFish()
	{

	}

	~TFish()
	{

	}

	virtual void Draw(vector<PictureBox^>^ Karp, PictureBox^ pictureBox1, PictureBox^ pic, System::Windows::Forms::Control::ControlCollection^ Control_, System::Drawing::Rectangle^ ClientRectangle, int a, int j)
	{
		/////////////////////
	}
	
	virtual void Remove(vector<PictureBox^>^ Karp)
	{

	}

	virtual void Run(vector<PictureBox^>^ v, Image^ im, System::Drawing::Rectangle^ ClientRectangle, PictureBox^ p, int &newX, int &newY, bool &Right, int dx, int dy)
	{
	
	}

};

ref class dot : public Taquarium
{
public:
	dot()
	{

	}

	~dot()
	{

	}

	void Draw(int x, int y, PictureBox^ dot)
	{
		dot->Visible = true;
		dot->Left = x;
		dot->Top = y;
	}
private:

};

ref class Rock : public Taquarium
{
public:
	Rock()
	{

	}

	~Rock()
	{

	}

	void Spawn(PictureBox^ rock, System::Drawing::Rectangle^ ClientRectangle)
	{
		srand(time(NULL));
		rock->Visible = true;
		rock->Top = ClientRectangle->Height - rock->Height+ 50;
		rock->Left = rand() % ClientRectangle->Width;
		while(rock->Left >= ClientRectangle->Width - rock->Width)
			rock->Left = rand() % ClientRectangle->Width;
	}
};

ref class TKarp : public TFish
{
public:
	TKarp()
	{

	}

	~TKarp()
	{

	}

	void Run(vector<PictureBox^>^ v, Image^ im, System::Drawing::Rectangle^ ClientRectangle, PictureBox^ p, int &newX, int &newY, bool &Right, int dx, int dy) override
	{
		bool check = false;
		if (v[0]->Right == newX && v[0]->Top == newY)
		{
			if (v[0]->Top > p->Top && v[0]->Right < p->Left) //Сектор 1
			{
				newY = rand() % ClientRectangle->Height;
				while (newY == p->Top || newY <= p->Top + v[0]->Height / 2 && newY >= p->Top - v[0]->Height)
					newY = rand() % ClientRectangle->Height;
				newX = rand() % ClientRectangle->Width;
				while (newX >= p->Left - v[0]->Width || newX <= v[0]->Width / 2)
					newX = rand() % ClientRectangle->Width;
			}

			if (v[0]->Top <= p->Top && (v[0]->Top + v[0]->Height) <= p->Top && v[0]->Right <= p->Left) //Сектор 2
			{
				while (!check)
				{
					newY = rand() % ClientRectangle->Height;
					while (newY <= p->Top + v[0]->Height / 2 && newY >= p->Top - v[0]->Height || newY >= ClientRectangle->Height - v[0]->Height / 2)
						newY = rand() % ClientRectangle->Height;

					if (newY <= p->Top - v[0]->Height / 2)
					{
						newX = rand() % ClientRectangle->Width;
						while (newX >= p->Left - v[0]->Width && newX <= p->Left + v[0]->Width || newX >= p->Right - v[0]->Width && newX <= p->Right + v[0]->Width || newX <= v[0]->Width / 2 || newX >= ClientRectangle->Width - v[0]->Width)
							newX = rand() % ClientRectangle->Width;
						check = true;
					}
					else
					{
						if (newY >= p->Top)
						{
							newX = rand() % ClientRectangle->Width;
							while (newX >= p->Left - v[0]->Width || newX <= v[0]->Width / 2)
								newX = rand() % ClientRectangle->Width;
							check = true;
						}
					}
				}
				check = false;
			}

			if (v[0]->Bottom < p->Top && v[0]->Right >= p->Left && v[0]->Right <= p->Right) //Сектор 3
			{
				newY = rand() % ClientRectangle->Height;
				while (newY >= p->Top || newY <= p->Top + v[0]->Height && newY >= p->Top - v[0]->Height)
					newY = rand() % ClientRectangle->Height;
				newX = rand() % ClientRectangle->Width;
				while (newX >= p->Left - v[0]->Width && newX <= p->Left + v[0]->Width || newX >= p->Right - v[0]->Width && newX <= p->Right + v[0]->Width || newX <= v[0]->Width / 2 || newX >= ClientRectangle->Width - v[0]->Width)
					newX = rand() % ClientRectangle->Width;

			}

			if (v[0]->Top <= p->Top && v[0]->Bottom <= p->Top && v[0]->Left >= p->Right || v[0]->Right >= p->Right) //Сектор 4
			{
				while (!check)
				{
					newY = rand() % ClientRectangle->Height;
					while (newY <= p->Top + v[0]->Height / 2 && newY >= p->Top - v[0]->Height || newY >= ClientRectangle->Height - v[0]->Height / 2)
						newY = rand() % ClientRectangle->Height;
					if (newY <= p->Top - v[0]->Height / 2)
					{
						newX = rand() % ClientRectangle->Width;
						while (newX >= p->Left - v[0]->Width && newX <= p->Left + v[0]->Width || newX >= p->Right - v[0]->Width && newX <= p->Right + v[0]->Width || newX <= v[0]->Width / 2 || newX >= ClientRectangle->Width - v[0]->Width)
							newX = rand() % ClientRectangle->Width;
						check = true;
					}
					else
					{
						if (newY >= p->Top + v[0]->Height / 2)
						{
							newX = rand() % ClientRectangle->Width;
							while (newX <= p->Left + v[0]->Width || newX >= ClientRectangle->Width - v[0]->Width)
								newX = rand() % ClientRectangle->Width;
						}
					}
				}
				check = false;
			}

			if (v[0]->Top >= p->Top && v[0]->Left >= p->Right) //Сектор 5
			{
				newY = rand() % ClientRectangle->Height;
				while (newY == p->Top || newY <= p->Top + v[0]->Height / 2 && newY >= p->Top - v[0]->Height)
					newY = rand() % ClientRectangle->Height;
				while (newX <= p->Left + v[0]->Width || newX >= ClientRectangle->Width - v[0]->Width)
					newX = rand() % ClientRectangle->Width;
			}
		}


		Turn_Around(v[0]->Right, newX, im, Right, v);
		if (v[0]->Right != newX && v[0]->Top != newY)
		{
			for (int i = 0; i < v->size(); i++)
			{
				if (v[0]->Right < newX && v[0]->Top < newY)
				{
					v[i]->Left += dx;
					v[i]->Top += dy;
				}
				if (v[0]->Right > newX && v[0]->Top > newY)
				{
					v[i]->Left -= dx;
					v[i]->Top -= dy;
				}
				if (v[0]->Right > newX && v[0]->Top < newY)
				{
					v[i]->Left -= dx;
					v[i]->Top += dy;
				}
				if (v[0]->Right < newX && v[0]->Top > newY)
				{
					v[i]->Left += dx;
					v[i]->Top -= dy;
				}
			}
		}
		else
		{
			if (v[0]->Right == newX)
			{
				for (int i = 0; i < v->size(); i++)
				{
					if (v[0]->Top < newY)
						v[i]->Top += dy;
					else
						v[i]->Top -= dy;
				}
			}
			else
			{
				if (v[0]->Top == newY)
				{
					for (int i = 0; i < v->size(); i++)
					{
						if (v[0]->Right < newX)
							v[i]->Left += dx;
						else
							v[i]->Left -= dx;
					}

				}
			}
		}


	}

	void Draw(vector<PictureBox^>^ Karp, PictureBox^ pictureBox1, PictureBox^ pic, System::Windows::Forms::Control::ControlCollection^ Control_, System::Drawing::Rectangle^ ClientRectangle, int a, int j) override
	{

		if (Check(Karp, ClientRectangle))
		{
			if (a == 0 && Karp[j]->Location.Y - Karp[j]->Height - 1 > 0)
			{
				pic->Location = System::Drawing::Point(Karp[j]->Location.X, Karp[j]->Location.Y - Karp[j]->Height - 1);
				pic->Size = pictureBox1->Size;
				pic->SizeMode = pictureBox1->SizeMode;
				pic->Image = pictureBox1->Image;
				pic->BackColor = pictureBox1->BackColor;
				Karp->push_back(pic);
				Control_->Add(pic);
			}
			else
			{
				if (a == 1 && Karp[j]->Location.Y + Karp[j]->Height + 1 < ClientRectangle->Height)
				{
					pic->Location = System::Drawing::Point(Karp[j]->Location.X, Karp[j]->Location.Y + Karp[j]->Height + 1);
					pic->Size = pictureBox1->Size;
					pic->SizeMode = pictureBox1->SizeMode;
					pic->Image = pictureBox1->Image;
					pic->BackColor = pictureBox1->BackColor;
					Karp->push_back(pic);
					Control_->Add(pic);
				}
				else
				{
					if (a == 2 && Karp[j]->Location.X - pictureBox1->Width - 1 > 0)
					{
						pic->Location = System::Drawing::Point(Karp[j]->Location.X - Karp[j]->Width - 1, Karp[j]->Location.Y);
						pic->Size = pictureBox1->Size;
						pic->SizeMode = pictureBox1->SizeMode;
						pic->Image = pictureBox1->Image;
						pic->BackColor = pictureBox1->BackColor;
						Karp->push_back(pic);
						Control_->Add(pic);
					}
				}

			}
		}
		else
			MessageBox::Show("Nezya");
	}

	void Remove(vector<PictureBox^>^ Karp) override
	{
		if (Karp->size() > 1)
		{
			Karp[Karp->size() - 1]->Image = nullptr;
			Karp[Karp->size() - 1]->Visible = false;
			Karp->pop_back();
		}
		else
			MessageBox::Show("Не а");
	}

};

ref class TPike : public TFish
{
public:
	TPike()
	{

	}

	~TPike()
	{

	}

	void Draw(vector<PictureBox^>^ Karp, PictureBox^ pictureBox1, PictureBox^ pic, System::Windows::Forms::Control::ControlCollection^ Control_, System::Drawing::Rectangle^ ClientRectangle, int a, int j) override
	{

		if (Check(Karp, ClientRectangle))
		{
			if (a == 0 && Karp[j]->Location.Y + Karp[j]->Height + 1 > 0)
			{
				pic->Location = System::Drawing::Point(Karp[j]->Location.X, Karp[j]->Location.Y + Karp[j]->Height + 1);
				pic->Size = pictureBox1->Size;
				pic->SizeMode = pictureBox1->SizeMode;
				pic->Image = pictureBox1->Image;
				pic->BackColor = pictureBox1->BackColor;
				Karp->push_back(pic);
				Control_->Add(pic);
			}
			else
			{
				if (a == 1 && Karp[j]->Location.Y - Karp[j]->Height - 1 < ClientRectangle->Height)
				{
					pic->Location = System::Drawing::Point(Karp[j]->Location.X, Karp[j]->Location.Y - Karp[j]->Height - 1);
					pic->Size = pictureBox1->Size;
					pic->SizeMode = pictureBox1->SizeMode;
					pic->Image = pictureBox1->Image;
					pic->BackColor = pictureBox1->BackColor;
					Karp->push_back(pic);
					Control_->Add(pic);
				}
				else
				{
					if (a == 2 && Karp[j]->Location.X + pictureBox1->Width + 1 > 0)
					{
						pic->Location = System::Drawing::Point(Karp[j]->Location.X + Karp[j]->Width + 1, Karp[j]->Location.Y);
						pic->Size = pictureBox1->Size;
						pic->SizeMode = pictureBox1->SizeMode;
						pic->Image = pictureBox1->Image;
						pic->BackColor = pictureBox1->BackColor;
						Karp->push_back(pic);
						Control_->Add(pic);
					}
				}

			}
		}
		else
			MessageBox::Show("Nezya");
	}

	void Run(vector<PictureBox^>^ v, Image^ im, System::Drawing::Rectangle^ ClientRectangle, PictureBox^ p, int &newX, int &newY, bool &Right, int dx, int dy) override
	{
		bool check = false;
		if (v[0]->Right == newX && v[0]->Top == newY)
		{
			if (v[0]->Top > p->Top && v[0]->Right < p->Left) //Сектор 1
			{
				newY = rand() % ClientRectangle->Height;
				while (newY == p->Top || newY <= p->Top + v[0]->Height / 2 && newY >= p->Top - v[0]->Height)
					newY = rand() % ClientRectangle->Height;
				newX = rand() % ClientRectangle->Width;
				while(newX >=p->Left-v[0]->Width || newX <= v[0]->Width/2)
					newX = rand() % ClientRectangle->Width;
			}

			if (v[0]->Top <= p->Top && (v[0]->Top + v[0]->Height) <= p->Top && v[0]->Right <= p->Left) //Сектор 2
			{
				while (!check)
				{
					newY = rand() % ClientRectangle->Height;
					while (newY <= p->Top + v[0]->Height / 2 && newY >= p->Top - v[0]->Height || newY >= ClientRectangle->Height - v[0]->Height/2)
						newY = rand() % ClientRectangle->Height;

					if (newY <= p->Top - v[0]->Height / 2)
					{
						newX = rand() % ClientRectangle->Width;
						while (newX >= p->Left - v[0]->Width && newX <= p->Left + v[0]->Width || newX >= p->Right - v[0]->Width && newX <= p->Right + v[0]->Width || newX <= v[0]->Width / 2 || newX >= ClientRectangle->Width - v[0]->Width)
							newX = rand() % ClientRectangle->Width;
						check = true;
					}
					else
					{
						if (newY >= p->Top)
						{
							newX = rand() % ClientRectangle->Width;
							while (newX >= p->Left - v[0]->Width || newX <= v[0]->Width/2)
								newX = rand() % ClientRectangle->Width;
							check = true;
						}
					}
				}
				check = false;
			}

			if (v[0]->Bottom < p->Top && v[0]->Right >= p->Left && v[0]->Right <= p->Right) //Сектор 3
			{
				newY = rand() % ClientRectangle->Height;
				while (newY >= p->Top || newY <= p->Top + v[0]->Height && newY >= p->Top - v[0]->Height)
					newY = rand() % ClientRectangle->Height;
				newX = rand() % ClientRectangle->Width;
				while (newX >= p->Left - v[0]->Width && newX <= p->Left + v[0]->Width || newX >= p->Right - v[0]->Width && newX <= p->Right + v[0]->Width || newX <= v[0]->Width / 2 || newX >= ClientRectangle->Width -v[0]->Width)
					newX = rand() % ClientRectangle->Width;

			}

			if (v[0]->Top <= p->Top && v[0]->Bottom <= p->Top && v[0]->Left >= p->Right || v[0]->Right >=p->Right) //Сектор 4
			{
				while (!check)
				{
					newY = rand() % ClientRectangle->Height;
					while (newY <= p->Top + v[0]->Height / 2 && newY >= p->Top - v[0]->Height || newY >= ClientRectangle->Height - v[0]->Height / 2)
						newY = rand() % ClientRectangle->Height;
					if (newY <= p->Top - v[0]->Height / 2)
					{
						newX = rand() % ClientRectangle->Width;
						while (newX >= p->Left - v[0]->Width && newX <= p->Left + v[0]->Width || newX >= p->Right - v[0]->Width && newX <= p->Right + v[0]->Width || newX <= v[0]->Width / 2 || newX >= ClientRectangle->Width - v[0]->Width)
							newX = rand() % ClientRectangle->Width;
						check = true;
					}
					else
					{
						if (newY >= p->Top + v[0]->Height / 2)
						{
							newX = rand() % ClientRectangle->Width;
							while (newX <= p->Left + v[0]->Width || newX >= ClientRectangle->Width - v[0]->Width)
								newX = rand() % ClientRectangle->Width;
						}
					}
				}
				check = false;
			}

			if (v[0]->Top >= p->Top && v[0]->Left >= p->Right) //Сектор 5
			{
				newY = rand() % ClientRectangle->Height;
				while (newY == p->Top || newY <= p->Top + v[0]->Height / 2 && newY >= p->Top - v[0]->Height)
					newY = rand() % ClientRectangle->Height;
				while (newX <= p->Left + v[0]->Width || newX >= ClientRectangle->Width - v[0]->Width)
					newX = rand() % ClientRectangle->Width;
			}
		}


		Turn_Around1(v[0]->Right, newX, im, Right, v);
		if (v[0]->Right != newX && v[0]->Top != newY)
		{
			for (int i = 0; i < v->size(); i++)
			{
				if (v[0]->Right < newX && v[0]->Top < newY)
				{
					v[i]->Left += dx;
					v[i]->Top += dy;
				}
				if (v[0]->Right > newX && v[0]->Top > newY)
				{
					v[i]->Left -= dx;
					v[i]->Top -= dy;
				}
				if (v[0]->Right > newX && v[0]->Top < newY)
				{
					v[i]->Left -= dx;
					v[i]->Top += dy;
				}
				if (v[0]->Right < newX && v[0]->Top > newY)
				{
					v[i]->Left += dx;
					v[i]->Top -= dy;
				}
			}
		}
		else
		{
			if (v[0]->Right == newX)
			{
				for (int i = 0; i < v->size(); i++)
				{
					if (v[0]->Top < newY)
						v[i]->Top += dy;
					else
						v[i]->Top -= dy;
				}
			}
			else
			{
				if (v[0]->Top == newY)
				{
					for (int i = 0; i < v->size(); i++)
					{
						if (v[0]->Right < newX)
							v[i]->Left += dx;
						else
							v[i]->Left -= dx;
					}

				}
			}
		}


	}

	void Remove(vector<PictureBox^>^ Karp) override
	{
		if (Karp->size() > 1)
		{
			Karp[Karp->size() - 1]->Image = nullptr;
			Karp[Karp->size() - 1]->Visible = false;
			Karp->pop_back();
		}
		else
			MessageBox::Show("Не а");
	}

	void Kill(vector<PictureBox^>^ Karp, vector<PictureBox^>^ Pike, int &c)
	{
		if (Karp->size() > 1)
		{
			for (int i = 0; i < Pike->size(); i++)
			{
				for (int j = 1; j < Karp->size(); j++)
				{
					if (((Pike[i]->Left <= Karp[j]->Right && Pike[i]->Left >=Karp[j]->Left) || (Pike[i]->Right >=Karp[j]->Left && Pike[i]->Right <= Karp[j]->Right)) && (Pike[i]->Top + Pike[i]->Height/2) >=Karp[j]->Top && (Pike[i]->Top + Pike[i]->Height / 2) <= Karp[j]->Top + Karp[j]->Height)
					{
						Karp[j]->Image = nullptr;
						Karp[j]->Visible = false;
						Karp->erase(Karp->begin() + j);
						SoundPlayer^ a = gcnew SoundPlayer("eat1.wav");
						a->Play();
						c--;
					}
				}
			}
		}
	}
};

