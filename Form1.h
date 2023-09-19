#pragma once
#include "Zavdannya.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Input;
	private: System::Windows::Forms::TextBox^ A;
	private: System::Windows::Forms::TextBox^ B;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Button;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->A = (gcnew System::Windows::Forms::TextBox());
			this->B = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Табуляція функцій";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть номер вашого варіанту";
			// 
			// Input
			// 
			this->Input->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Input->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Input->Location = System::Drawing::Point(266, 50);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(50, 27);
			this->Input->TabIndex = 2;
			// 
			// A
			// 
			this->A->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->A->Location = System::Drawing::Point(190, 140);
			this->A->Multiline = true;
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(150, 200);
			this->A->TabIndex = 3;
			// 
			// B
			// 
			this->B->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B->Location = System::Drawing::Point(416, 140);
			this->B->Multiline = true;
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(150, 200);
			this->B->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(180, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Табулювання функції A";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(406, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Табулювання функції B";
			// 
			// Button
			// 
			this->Button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Button->AutoSize = true;
			this->Button->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button->Location = System::Drawing::Point(40, 140);
			this->Button->Name = L"Button";
			this->Button->Size = System::Drawing::Size(121, 29);
			this->Button->TabIndex = 7;
			this->Button->Text = L"Табулювати";
			this->Button->UseVisualStyleBackColor = true;
			this->Button->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 436);
			this->Controls->Add(this->Button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->B);
			this->Controls->Add(this->A);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Завдання 2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
		double N = System::Convert::ToDouble(Input->Text);
		Zavdannya Zavd;

		for (double x = -1.0; x <= 1.0; x += 0.2)
		{
			Zavd.F_B(N, x);
			Zavd.F_A(N, x);

			double b = Zavd.getb();
			double a = Zavd.geta();

			A->AppendText(a.ToString() + "\r\n");
			B->AppendText(b.ToString() + "\r\n");
		}
	}
};
}
