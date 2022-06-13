#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "Base.h"
namespace Wisielec {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		Input(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Accept;
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Accept = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(42, 140);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 45);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 128);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Wpisz has³o:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Accept
			// 
			this->Accept->Location = System::Drawing::Point(97, 218);
			this->Accept->Name = L"Accept";
			this->Accept->Size = System::Drawing::Size(86, 23);
			this->Accept->TabIndex = 2;
			this->Accept->Text = L"Zatwierdz";
			this->Accept->UseVisualStyleBackColor = true;
			this->Accept->Click += gcnew System::EventHandler(this, &Input::Accept_Click);
			// 
			// Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->Accept);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Input";
			this->Text = L"Wisielec";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Accept_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ ms = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string s = context.marshal_as<std::string>(ms);
		openSecond(s);
	}
		   void openSecond(std::string s)
		   {
			   Base^ myForm = gcnew Base(s);
			   this->Hide();
			   myForm->ShowDialog();
		   }
	};
}
