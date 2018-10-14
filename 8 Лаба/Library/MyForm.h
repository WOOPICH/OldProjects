#pragma once
#include "Struct.h"
#include <cliext\vector>

namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace cliext;
//////////////////////////////////////////////

//////////////////////////////////////////////

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(228, 20);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(463, 208);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Инвентарный номер";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Автор";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Название книги";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Дата выдачи";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Дата возврата";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Инвентарный номер";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Автор";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Название книги";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"День выдачи";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Месяц выдачи";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(53, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Год выдачи";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 189);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"День возврата";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 216);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Месяц возврата";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(43, 243);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Год возврата";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(124, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(124, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownHeight = 80;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox1->Location = System::Drawing::Point(124, 105);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(58, 21);
			this->comboBox1->TabIndex = 13;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownHeight = 80;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->IntegralHeight = false;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox2->Location = System::Drawing::Point(124, 132);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(58, 21);
			this->comboBox2->TabIndex = 14;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownHeight = 80;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->IntegralHeight = false;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"1990", L"1991", L"1992", L"1993", L"1994", L"1995",
					L"1996", L"1997", L"1998", L"1999", L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008", L"2009",
					L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018"
			});
			this->comboBox3->Location = System::Drawing::Point(124, 159);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(58, 21);
			this->comboBox3->TabIndex = 15;
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownHeight = 80;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->IntegralHeight = false;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox4->Location = System::Drawing::Point(124, 186);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(58, 21);
			this->comboBox4->TabIndex = 16;
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownHeight = 80;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->IntegralHeight = false;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox5->Location = System::Drawing::Point(124, 213);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(58, 21);
			this->comboBox5->TabIndex = 17;
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownHeight = 80;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->IntegralHeight = false;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"1990", L"1991", L"1992", L"1993", L"1994", L"1995",
					L"1996", L"1997", L"1998", L"1999", L"2000", L"2001", L"2002", L"2003", L"2004", L"2005", L"2006", L"2007", L"2008", L"2009",
					L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018"
			});
			this->comboBox6->Location = System::Drawing::Point(124, 240);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(58, 21);
			this->comboBox6->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(124, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 44);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(288, 234);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 40);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Вывод пользователей библиотеки";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(477, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(214, 40);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Работа с бинарным файлом (создание, заполнение, вывод)";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(288, 283);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 44);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Сортировка по дате выдачи";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(477, 283);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(214, 44);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Список книг, не возвращенных вовремя";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(10, 283);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"No u";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 334);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		vector<LibraryUser^> array_v;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (comboBox1->SelectedIndex == -1 || comboBox2->SelectedIndex == -1 || comboBox3->SelectedIndex == -1 || comboBox4->SelectedIndex == -1 || comboBox5->SelectedIndex == -1 || comboBox6->SelectedIndex == -1 || textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || comboBox1->Text == "" || comboBox2->Text == "" || comboBox3->Text == "" || comboBox4->Text == "" || comboBox5->Text == "" || comboBox6->Text == "" || (Int32::Parse(comboBox4->Text) < Int32::Parse(comboBox1->Text) && Int32::Parse(comboBox5->Text) <= Int32::Parse(comboBox2->Text) && Int32::Parse(comboBox6->Text) <= Int32::Parse(comboBox3->Text)) || (Int32::Parse(comboBox5->Text) < Int32::Parse(comboBox2->Text) && Int32::Parse(comboBox6->Text) <= Int32::Parse(comboBox3->Text)) || (Int32::Parse(comboBox6->Text) < Int32::Parse(comboBox3->Text)))
		{
			MessageBox::Show("Заполните правильно форму", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			LibraryUser^ e = gcnew LibraryUser;
			e->iNumber = UInt32::Parse(textBox1->Text);
			e->Author = textBox2->Text;
			e->Title = textBox3->Text;
			e->Give->day = UInt16::Parse(comboBox1->Text);
			e->Give->month = UInt16::Parse(comboBox2->Text);
			e->Give->year = UInt16::Parse(comboBox3->Text);
			e->Back->day = UInt16::Parse(comboBox4->Text);
			e->Back->month = UInt16::Parse(comboBox5->Text);
			e->Back->year = UInt16::Parse(comboBox6->Text);
			array_v.push_back(e);
			dataGridView1->Rows->Clear();
			dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->Cells[0]->Value = e->iNumber;
			dataGridView1->Rows[0]->Cells[1]->Value = e->Author;
			dataGridView1->Rows[0]->Cells[2]->Value = e->Title;
			dataGridView1->Rows[0]->Cells[3]->Value = e->Give->day + "." + e->Give->month + "." + e->Give->year;
			dataGridView1->Rows[0]->Cells[4]->Value = e->Back->day + "." + e->Back->month + "." + e->Back->year;
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (array_v.size() > 0)
		{
			dataGridView1->Rows->Clear();
			while (dataGridView1->RowCount < array_v.size())
			{
				dataGridView1->Rows->Add();
			}
			for (unsigned int i = 0; i < array_v.size(); i++)
			{
				dataGridView1->Rows[i]->Cells[0]->Value = array_v[i]->iNumber;
				dataGridView1->Rows[i]->Cells[1]->Value = array_v[i]->Author;
				dataGridView1->Rows[i]->Cells[2]->Value = array_v[i]->Title;
				dataGridView1->Rows[i]->Cells[3]->Value = array_v[i]->Give->day + "." + array_v[i]->Give->month + "." + array_v[i]->Give->year;
				dataGridView1->Rows[i]->Cells[4]->Value = array_v[i]->Back->day + "." + array_v[i]->Back->month + "." + array_v[i]->Back->year;
			}
		}
		else
		{
			MessageBox::Show("Заполните хотя бы одного пользователя", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		LibraryUser^ temp;
		if (array_v.size() > 1)
		{
			unsigned int min;
			for (unsigned int i = 0; i < (array_v.size() - 1); i++)
			{
				min = i;
				for (unsigned int j = i + 1; j < array_v.size(); j++)
				{
					if (((array_v[j]->Give->day < array_v[min]->Give->day) && (array_v[j]->Give->month == array_v[min]->Give->month) && (array_v[j]->Give->year == array_v[min]->Give->year)) || ((array_v[j]->Give->month < array_v[min]->Give->month) && (array_v[j]->Give->year == array_v[min]->Give->year)) || ((array_v[j]->Give->year < array_v[min]->Give->year)))
						min = j;
				}
				temp = array_v[i];
				array_v[i] = array_v[min];
				array_v[min] = temp;
			}
			button2->PerformClick();
		}
		else
		{
			MessageBox::Show("Заполните хотя бы одного пользователя", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (array_v.size() > 0)
		{
			String^ Bad_Users = "";
			for (unsigned int i = 0; i < array_v.size(); i++)
			{
				if (!((array_v[i]->Back->day >= array_v[i]->Give->day && array_v[i]->Back->month == array_v[i]->Give->month && array_v[i]->Back->year == array_v[i]->Give->year) || (array_v[i]->Back->day <= array_v[i]->Give->day && (array_v[i]->Back->month - 1) == array_v[i]->Give->month && array_v[i]->Back->year == array_v[i]->Give->year) || (array_v[i]->Back->day <= array_v[i]->Give->day && array_v[i]->Back->month == 1 && array_v[i]->Give->month == 12 && (array_v[i]->Back->year - 1) == array_v[i]->Give->year)))
				{
					if (Bad_Users == "")
						Bad_Users += array_v[i]->Title;
					else
						Bad_Users += ", " + array_v[i]->Title;
				}
			}
			MessageBox::Show(Bad_Users, "Книги, не возвращенные вовремя", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Заполните хотя бы одного пользователя", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
			BinaryWriter^ bw = gcnew BinaryWriter(File::OpenWrite("Binary.txt"));
			while (!sr->EndOfStream)
			{
				bw->Write(sr->ReadLine());
				bw->Write(sr->ReadLine());
				bw->Write(sr->ReadLine());
				bw->Write(sr->ReadLine());
				bw->Write(sr->ReadLine());
				bw->Write(sr->ReadLine());
				bw->Write(sr->ReadLine());
				bw->Write(sr->ReadLine());
				bw->Write(sr->ReadLine());
			}
			delete (IDisposable^)sr;
			delete (IDisposable^)bw;
			BinaryReader^br = gcnew BinaryReader(File::OpenRead("Binary.txt"));
			LibraryUser^ User = gcnew LibraryUser;
			while (br->PeekChar()>0)
			{
				UInt32::TryParse(br->ReadString(), User->iNumber);
				User->Author = br->ReadString();
				User->Title = br->ReadString();
				UInt16::TryParse(br->ReadString(), User->Give->day);
				UInt16::TryParse(br->ReadString(), User->Give->month);
				UInt16::TryParse(br->ReadString(), User->Give->year);
				UInt16::TryParse(br->ReadString(), User->Back->day);
				UInt16::TryParse(br->ReadString(), User->Back->month);			
				UInt16::TryParse(br->ReadString(), User->Back->year);
				array_v.push_back(User);
				User = gcnew LibraryUser;
			}
			delete (IDisposable^)br;
			button2->PerformClick();
		}

	}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Мать твоя", "Пидр", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
};
}
