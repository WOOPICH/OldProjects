#pragma once
#include "Objects.h"
#include <cliext/vector>

namespace Kursach
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  On_button;
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	public: System::Windows::Forms::Timer^  timer1;
	public: System::Windows::Forms::Label^  Karp_Plus;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	public: System::Windows::Forms::Label^  Shuka_Plus;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	public: System::Windows::Forms::Label^  label3;
	private:
	public: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	public:



	public:

	private:
	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->On_button = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Karp_Plus = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->Shuka_Plus = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// On_button
			// 
			this->On_button->BackColor = System::Drawing::Color::Transparent;
			this->On_button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->On_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"On_button.Image")));
			this->On_button->Location = System::Drawing::Point(547, 276);
			this->On_button->Name = L"On_button";
			this->On_button->Size = System::Drawing::Size(79, 30);
			this->On_button->TabIndex = 0;
			this->On_button->Text = L"On";
			this->On_button->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->On_button->Click += gcnew System::EventHandler(this, &MyForm::On_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(320, 163);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(77, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// Karp_Plus
			// 
			this->Karp_Plus->BackColor = System::Drawing::Color::Transparent;
			this->Karp_Plus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Karp_Plus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Karp_Plus.Image")));
			this->Karp_Plus->Location = System::Drawing::Point(249, 9);
			this->Karp_Plus->Name = L"Karp_Plus";
			this->Karp_Plus->Size = System::Drawing::Size(79, 30);
			this->Karp_Plus->TabIndex = 2;
			this->Karp_Plus->Text = L"+ Karp";
			this->Karp_Plus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Karp_Plus->Visible = false;
			this->Karp_Plus->Click += gcnew System::EventHandler(this, &MyForm::Karp_Plus_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(775, 163);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(112, 59);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 15;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			// 
			// Shuka_Plus
			// 
			this->Shuka_Plus->BackColor = System::Drawing::Color::Transparent;
			this->Shuka_Plus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Shuka_Plus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Shuka_Plus.Image")));
			this->Shuka_Plus->Location = System::Drawing::Point(419, 9);
			this->Shuka_Plus->Name = L"Shuka_Plus";
			this->Shuka_Plus->Size = System::Drawing::Size(79, 30);
			this->Shuka_Plus->TabIndex = 16;
			this->Shuka_Plus->Text = L"+ Shuka";
			this->Shuka_Plus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Shuka_Plus->Visible = false;
			this->Shuka_Plus->Click += gcnew System::EventHandler(this, &MyForm::Shuka_Plus_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(334, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 30);
			this->label1->TabIndex = 17;
			this->label1->Text = L"- Karp";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(504, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 30);
			this->label2->TabIndex = 18;
			this->label2->Text = L"- Shuka";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(423, 389);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(330, 266);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(811, 29);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(26, 25);
			this->pictureBox4->TabIndex = 20;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(589, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 30);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Speed_up";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(674, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 30);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Slow_down";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(621, 184);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(26, 25);
			this->pictureBox5->TabIndex = 23;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1210, 614);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Shuka_Plus);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->Karp_Plus);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->On_button);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Аквариум";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
	
		
#pragma endregion

		// ARRAYS //
		vector<PictureBox^>^ Karp = gcnew vector<PictureBox^>;
		vector<PictureBox^>^ Shuk = gcnew vector<PictureBox^>;
		////////////
		TKarp^ Kar = gcnew TKarp;
		TPike^ Pik = gcnew TPike;
		////////////
		int _c = 0; int _c_s = 0; int _j = 0; int _j_s = 0;
		////////////
		
		////////////
		Image^ im = gcnew Bitmap("karp.png");
		Image^ im_s = gcnew Bitmap("schuka.png");
		////////////
	
	private: System::Void On_button_Click(System::Object^  sender, System::EventArgs^  e)		//ВКЛЮЧЕНИЕ
	{
		Taquarium^ a = gcnew Taquarium;
		a->Init(On_button, Karp, Karp_Plus, Shuka_Plus, label1, label2, pictureBox1, timer1, pictureBox15, Shuk, label3, label4);
		Rock^ r = gcnew Rock;
		r->Spawn(pictureBox3,ClientRectangle);
		newX = Karp[0]->Right + 1; newY = Karp[0]->Bottom + 1;
		new1X = Shuk[0]->Right + 1; new1Y = Shuk[0]->Bottom + 1;
	}
			 
			 int newX; int newY; bool Right = true; int dx = 1; int dy = 1;
			 int new1X; int new1Y; bool Left = true;
	private: System::Void Karp_Plus_Click(System::Object^  sender, System::EventArgs^  e)		//ДОБАВЛЕНИЕ КАРПА
	{
		PictureBox^ pic = gcnew PictureBox; 
		int c = _c; int j = _j;
		do_it_1(c, j);
		_c = c; _j = j;
		Kar->Draw(Karp, pictureBox1, pic, Controls, ClientRectangle, c, j);
		_c++;
		if (Karp->size() > 5)
			MessageBox::Show("Не рекомендуется добавлять очень много рыб");
	}

	private: System::Void Shuka_Plus_Click(System::Object^  sender, System::EventArgs^  e)		//ДОБАВЛЕНИЕ ЩУКИ
	{
		PictureBox^ pic_s = gcnew PictureBox;
		int c_s = _c_s; int j_s = _j_s;
		do_it_1(c_s, j_s);
		_c_s = c_s; _j_s = j_s;
		Pik->Draw(Shuk, pictureBox15, pic_s, Controls, ClientRectangle, c_s, j_s);
		_c_s++;
		if (Shuk->size() > 5)
			MessageBox::Show("Не рекомендуется добавлять очень много рыб");
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)		//УДАЛЕНИЕ КАРПА
	{
		Kar->Remove(Karp);
		int c = _c; int j = _j;
		do_it_2(c, j);
		_c = c; _j = j;
	}

	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e)		//УДАЛЕНИЕ ЩУКИ
	{
		Pik->Remove(Shuk);
		int c_s = _c_s; int j_s = _j_s;
		do_it_2(c_s, j_s);
		_c_s = c_s; _j_s = j_s;
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)		//ТАЙМЕР
	{
		TKarp^ kar = gcnew TKarp;
		int _newX = newX; int _newY = newY; bool _Right = Right; 
		kar->Run(Karp, im, ClientRectangle, pictureBox3, _newX, _newY, _Right, dx, dy);
		newX = _newX; newY = _newY; Right = _Right;
		dot^ d = gcnew dot;
		d->Draw(_newX, _newY, pictureBox4);
		//////////////
		TPike^ pik = gcnew TPike;
		int _new1X = new1X; int _new1Y = new1Y;  bool _Left = Left;
		pik->Run(Shuk, im_s, ClientRectangle, pictureBox3, _new1X, _new1Y, _Left, dx, dy);
		int c = _c;
		pik->Kill(Karp, Shuk, c);
		_c = c;
		new1X = _new1X; new1Y = _new1Y; Left = _Left;
		dot^ d1 = gcnew dot;
		d1->Draw(_new1X, _new1Y, pictureBox5);
	}

	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		dx++;
		dy++;
	}

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (dx > 1)
	{
		dx--;
		dy--;
	}
}
};
}
