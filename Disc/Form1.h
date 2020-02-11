#include "vcclr.h"
#include <math.h>

#pragma once


namespace Disc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{   // Определение десятичного разделителя (точки или запятой)
			// из региональных настроек.
			NumberFormatInfo^ nfi = NumberFormatInfo::CurrentInfo;
			ds = (char)nfi->NumberDecimalSeparator[0];


			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

		private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl3;
	private: 
		    int x3;  // Вспомогательная переменная (имеется ли минус в строке)
            char ds; // Символ десятичного разделителя



	protected: 

	protected: 


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  lbl4;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lbl6;
	private: System::Windows::Forms::Label^  lbl7;
	private: System::Windows::Forms::Label^  lblOper;




	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnSolve;


	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Label^  lblOper2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{ 
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnSolve = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->lblOper2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(34, 60);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(34, 19);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"a = ";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(163, 60);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(35, 19);
			this->lbl2->TabIndex = 1;
			this->lbl2->Text = L"b = ";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(295, 61);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(34, 19);
			this->lbl3->TabIndex = 2;
			this->lbl3->Text = L"c = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(85, 25);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(204, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(85, 25);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(335, 58);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(85, 25);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(141, 125);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(85, 25);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(286, 125);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(85, 25);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(95, 128);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(40, 19);
			this->lbl4->TabIndex = 8;
			this->lbl4->Text = L"x1 = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(238, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"x2 = ";
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->lbl6->Location = System::Drawing::Point(173, 9);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(117, 38);
			this->lbl6->TabIndex = 10;
			this->lbl6->Text = L"Коэффициенты\r\n     уравения";
			this->lbl6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->lbl7->Location = System::Drawing::Point(167, 97);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(123, 19);
			this->lbl7->TabIndex = 11;
			this->lbl7->Text = L"Корни уравнения";
			this->lbl7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Location = System::Drawing::Point(85, 171);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 19);
			this->lblOper->TabIndex = 12;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->btnReset->FlatAppearance->BorderSize = 0;
			this->btnReset->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->btnReset->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReset->Location = System::Drawing::Point(72, 226);
			this->btnReset->Margin = System::Windows::Forms::Padding(0);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(85, 27);
			this->btnReset->TabIndex = 13;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// btnSolve
			// 
			this->btnSolve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->btnSolve->FlatAppearance->BorderSize = 0;
			this->btnSolve->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->btnSolve->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->btnSolve->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSolve->Location = System::Drawing::Point(204, 226);
			this->btnSolve->Margin = System::Windows::Forms::Padding(0);
			this->btnSolve->Name = L"btnSolve";
			this->btnSolve->Size = System::Drawing::Size(85, 27);
			this->btnSolve->TabIndex = 14;
			this->btnSolve->Text = L"Решить";
			this->btnSolve->UseVisualStyleBackColor = false;
			this->btnSolve->Click += gcnew System::EventHandler(this, &Form1::btnSolve_Click);
			// 
			// btnClose
			// 
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->btnClose->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Location = System::Drawing::Point(335, 226);
			this->btnClose->Margin = System::Windows::Forms::Padding(0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(85, 27);
			this->btnClose->TabIndex = 15;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// lblOper2
			// 
			this->lblOper2->AutoSize = true;
			this->lblOper2->Location = System::Drawing::Point(147, 180);
			this->lblOper2->Name = L"lblOper2";
			this->lblOper2->Size = System::Drawing::Size(0, 19);
			this->lblOper2->TabIndex = 16;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)), 
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ClientSize = System::Drawing::Size(464, 276);
			this->Controls->Add(this->lblOper2);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnSolve);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8, System::Drawing::FontStyle::Bold));
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"Form1";
			this->Text = L"Решение квадратного уравнения ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = L"";
			 textBox2->Text = L"";
			 textBox3->Text = L"";
			 textBox4->Text = L"";
			 textBox5->Text = L"";
			 lblOper->Text = L"";
			 lblOper2->Text = L"";
		 }  
		 
		 private: System::Void btnSolve_Click(System::Object^ sender, System::EventArgs^ e) {
					  double a,b,c;
					  double d;
					  double x1,x2;
					  lblOper2->Text= L"";
					  lblOper->Text= L"";
					  textBox4->Text = L"";
					  textBox5->Text = L"";
					  
					  if ((textBox1->Text != "")&&(textBox2->Text != "")&&(textBox3->Text != ""))// Если текстовое поле не пустое
					  {

						  a=Convert::ToDouble(textBox1->Text);
						  b=Convert::ToDouble(textBox2->Text);
						  c=Convert::ToDouble(textBox3->Text);
					 
						  if (a==0)//проверка на разные типы лин. уравнений
						  {  
							  if ((c!=0)&&(b!=0))
							  {
								  x1=(c*(-1))/b;
								  this->textBox4->Text=Convert::ToString(x1);
								  this->lblOper->Text = L"Линейное уравнение - имеет один корень.";

							  }

							  else if ((b==0)&&(c!=0))
								  this->lblOper->Text = L"Неверное равенство.";

							  else if ((c==0)&&(b!=0))
							  { 
								  x1=0;
								  x2=(b/a)*(-1);
								  this->textBox4->Text=Convert::ToString(x1);
								  this->textBox5->Text=Convert::ToString(x2);
								  this->lblOper->Text = L"Линейное уравнение - имеет один корень.";

							  }

							  else if ((c==0)&&(b==0))
							  { 
								  this->textBox4->Text=Convert::ToString(x1);
								  this->textBox5->Text=Convert::ToString(x2);
								  this->lblOper->Text = L"Верное равенство.";


							  }
						  }
						  else
						  {

							  d=(b*b)-(4*a*c);
							  if (d>0)//проверки на разный дискр. 
							  {         
								  x1=(-b+sqrt(d))/(2*a);
								  x2=(-b-sqrt(d))/(2*a); 
								  this->textBox4->Text=Convert::ToString(x1);
								  this->textBox5->Text=Convert::ToString(x2);
								  this->lblOper->Text = L"Дискриминант > 0. Уравнение имеет два корня.";
							  }
							  else if (d==0)
							  {
								  x1=(-b/2*a);
								  x2=(-b/2*a);
								  this->textBox4->Text=Convert::ToString(x1);
								  this->textBox5->Text=Convert::ToString(x2);
								  this->lblOper->Text = L"Дискриминант = 0.\nУравнение имеет два одинаковых корня.";
							  }
							  else
								  this->lblOper->Text = L"Дискриминант < 0.\nУравнение не имеет действительных корней.";
						  }

					  } 
					  else 
						  lblOper2->Text= L"Пустое поле. Введите число.";
				  }
private: System::Void textBox1_KeyPress(Object^ sender, KeyPressEventArgs^ e) {

			 Console::WriteLine("press1");
			 // Если нажатая клавиша не цифровая.
			 if (!Char::IsDigit(e->KeyChar))
				 // Запрет на ввод более одного знака минуса.
				 if (e->KeyChar != '-' || textBox1->Text->IndexOf('-') != -1)
					 // Запрет на ввод более одного десятичного разделителя.
					 if (e->KeyChar != ds || textBox1->Text->IndexOf(ds) != -1)
						 // Если нажатая клавиша не является клавишей BackSpace.
						 if (e->KeyChar != (char)Keys::Back)
							 e->Handled = true; // Запрет ввода

			 // Запрет ввода повторных нулей в начале числа.
			 if (e->KeyChar == (char)Keys::D0 ||
				 e->KeyChar == (char)Keys::NumPad0) // Если нажата клавиша 0
				 if (textBox1->Text->Length >= 1) // Если строка не пустая
					 if (textBox1->Text[0] == '0' && textBox1->SelectionStart < 2)
						 e->Handled = true; // Запрет ввода

			 // Замена десятичного разделителя в начале числа на "0,".
			 if (e->KeyChar == ds)
			 { // Если введен десятичный разделитель
				 x3 = 0;
				 if (textBox1->Text != "" && textBox1->Text[0] == '-')
				 { x3 = 1;}
				 if (textBox1->Text->IndexOf(ds) == -1 &&
					 textBox1->SelectionStart == x3)
				 {
					 // Если десятичный разделитель уже есть, то 0 вставлять не нужно
					 textBox1->Text = textBox1->Text->Insert(x3, "0"); // Вставка 0
					 textBox1->SelectionStart = x3 + 1; // Текстовый курсор в конец
				 }
			 }

			 // Перенос точки ввода минуса в начало (ввод минуса только спереди)
			 if (e->KeyChar == '-' && textBox1->Text->IndexOf('-') == -1)
				 textBox1->SelectionStart = 0; // Текстовый курсор в начало
		 }


private: System::Void textBox2_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
			 Console::WriteLine("press2");
			 // Если нажатая клавиша не цифровая.
			 if (!Char::IsDigit(e->KeyChar))
				 // Запрет на ввод более одного знака минуса.
				 if (e->KeyChar != '-' || textBox2->Text->IndexOf('-') != -1)
					 // Запрет на ввод более одного десятичного разделителя.
					 if (e->KeyChar != ds || textBox2->Text->IndexOf(ds) != -1)
						 // Если нажатая клавиша не является клавишей BackSpace.
						 if (e->KeyChar != (char)Keys::Back)
							 e->Handled = true; // Запрет ввода

			 // Запрет ввода повторных нулей в начале числа.
			 if (e->KeyChar == (char)Keys::D0 ||
				 e->KeyChar == (char)Keys::NumPad0) // Если нажата клавиша 0
				 if (textBox2->Text->Length >= 1) // Если строка не пустая
					 if (textBox2->Text[0] == '0' && textBox2->SelectionStart < 2)
						 e->Handled = true; // Запрет ввода

			 // Замена десятичного разделителя в начале числа на "0,".
			 if (e->KeyChar == ds) { // Если введен десятичный разделитель
				 x3 = 0;
				 if (textBox2->Text != "" && textBox2->Text[0] == '-') { x3 = 1; }
				 if (textBox2->Text->IndexOf(ds) == -1 &&
					 textBox2->SelectionStart == x3) {
						 // Если десятичный разделитель уже есть, то 0 вставлять не нужно
						 textBox2->Text = textBox2->Text->Insert(x3, "0"); // Вставка 0
						 textBox2->SelectionStart = x3 + 1; // Текстовый курсор в конец
				 }
			 }

			 // Перенос точки ввода минуса в начало (ввод минуса только спереди)
			 if (e->KeyChar == '-' && textBox2->Text->IndexOf('-') == -1)
				 textBox2->SelectionStart = 0; // Текстовый курсор в начало
		 }
 private: System::Void textBox3_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
			 //Console::WriteLine("press2");
			 // Если нажатая клавиша не цифровая.
			 if (!Char::IsDigit(e->KeyChar))
				 // Запрет на ввод более одного знака минуса.
				 if (e->KeyChar != '-' || textBox3->Text->IndexOf('-') != -1)
					 // Запрет на ввод более одного десятичного разделителя.
					 if (e->KeyChar != ds || textBox3->Text->IndexOf(ds) != -1)
						 // Если нажатая клавиша не является клавишей BackSpace.
						 if (e->KeyChar != (char)Keys::Back)
							 e->Handled = true; // Запрет ввода

			 // Запрет ввода повторных нулей в начале числа.
			 if (e->KeyChar == (char)Keys::D0 ||
				 e->KeyChar == (char)Keys::NumPad0) // Если нажата клавиша 0
				 if (textBox3->Text->Length >= 1) // Если строка не пустая
					 if (textBox3->Text[0] == '0' && textBox3->SelectionStart < 2)
						 e->Handled = true; // Запрет ввода

			 // Замена десятичного разделителя в начале числа на "0,".
			 if (e->KeyChar == ds) { // Если введен десятичный разделитель
				 x3 = 0;
				 if (textBox3->Text != "" && textBox3->Text[0] == '-') { x3 = 1; }
				 if (textBox3->Text->IndexOf(ds) == -1 &&
					 textBox3->SelectionStart == x3) {
						 // Если десятичный разделитель уже есть, то 0 вставлять не нужно
						 textBox3->Text = textBox3->Text->Insert(x3, "0"); // Вставка 0
						 textBox3->SelectionStart = x3 + 1; // Текстовый курсор в конец
				 }
			 }

			 // Перенос точки ввода минуса в начало (ввод минуса только спереди)
			 if (e->KeyChar == '-' && textBox3->Text->IndexOf('-') == -1)
				 textBox3->SelectionStart = 0; // Текстовый курсор в начало
		 }

};
}

