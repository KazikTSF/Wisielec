#pragma once
#include <string>
#include <iostream>
#include "Game.h"
namespace Wisielec {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Base : public System::Windows::Forms::Form
	{
	public:
		Base(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Base(std::string s)
		{
			InitializeComponent();
			game = new Game(s);
			changeText();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Base()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ImageBox;
	protected:

	private: System::Windows::Forms::Button^ buttonF;
	private: System::Windows::Forms::Button^ buttonG;
	private: System::Windows::Forms::Button^ buttonH;
	private: System::Windows::Forms::Button^ buttonJ;
	private: System::Windows::Forms::Button^ buttonK;
	private: System::Windows::Forms::Button^ buttonL;
	private: System::Windows::Forms::Button^ buttonZ;
	private: System::Windows::Forms::Button^ buttonX;
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonV;
	private: System::Windows::Forms::Button^ buttonB;
	private: System::Windows::Forms::Button^ buttonN;
	private: System::Windows::Forms::Button^ buttonM;
	protected:













	private: System::Windows::Forms::Button^ buttonQ;
	private: System::Windows::Forms::Button^ buttonW;
	private: System::Windows::Forms::Button^ buttonE;
	private: System::Windows::Forms::Button^ buttonR;
	private: System::Windows::Forms::Button^ buttonT;
	private: System::Windows::Forms::Button^ buttonY;
	private: System::Windows::Forms::Button^ buttonU;
	private: System::Windows::Forms::Button^ buttonI;
	private: System::Windows::Forms::Button^ buttonO;
	private: System::Windows::Forms::Button^ buttonP;
	private: System::Windows::Forms::Button^ buttonA;
	private: System::Windows::Forms::Button^ buttonS;
	private: System::Windows::Forms::Button^ buttonD;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::ImageList^ imageList1;















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		Game* game;

		void changeText()
		{
			String^ ss = gcnew String(game->getShowed().c_str());
			label1->Text = ss;
		}
		void checkGameState()
		{
			
			switch (game->getFailCount())
			{
			case 1:
			{
				ImageBox->Image = Image::FromFile("1.jpg");
				break;
			}
			case 2:
			{
				ImageBox->Image = Image::FromFile("2.jpg");
				break;
			}
			case 3:
			{
				ImageBox->Image = Image::FromFile("3.jpg");
				break;
			}
			case 4:
			{
				ImageBox->Image = Image::FromFile("4.jpg");
				break;
			}
			case 5:
			{
				ImageBox->Image = Image::FromFile("5.jpg");
				break;
			}
			case 6:
			{
				ImageBox->Image = Image::FromFile("6.jpg");
				break;
			}
			case 7:
			{
				ImageBox->Image = Image::FromFile("7.jpg");
				break;
			}
			case 8:
			{
				ImageBox->Image = Image::FromFile("8.jpg");
				break;
			}
			case 9:
			{
				ImageBox->Image = Image::FromFile("9.jpg");
				break;
			}
			case 10:
			{
				ImageBox->Image = Image::FromFile("10.jpg");
				break;
			}
			}
			int state = game->gameState();
			if (state == 1)
			{
				if (MessageBox::Show("Wygra³eœ, czy chcesz zagraæ jeszcze raz?", "Wygra³eœ",
					MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
				{
					Application::Restart();
				}
				else
				{
					Application::Exit();
				}
			}
			if (state == 2)
			{
				if (MessageBox::Show("Przegra³eœ, czy chcesz zagraæ jeszcze raz?", "Przegra³eœ",
					MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
				{
					Application::Restart();
				}
				else
				{
					Application::Exit();
				}
			}
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->ImageBox = (gcnew System::Windows::Forms::PictureBox());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->buttonG = (gcnew System::Windows::Forms::Button());
			this->buttonH = (gcnew System::Windows::Forms::Button());
			this->buttonJ = (gcnew System::Windows::Forms::Button());
			this->buttonK = (gcnew System::Windows::Forms::Button());
			this->buttonL = (gcnew System::Windows::Forms::Button());
			this->buttonZ = (gcnew System::Windows::Forms::Button());
			this->buttonX = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonV = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonN = (gcnew System::Windows::Forms::Button());
			this->buttonM = (gcnew System::Windows::Forms::Button());
			this->buttonQ = (gcnew System::Windows::Forms::Button());
			this->buttonW = (gcnew System::Windows::Forms::Button());
			this->buttonE = (gcnew System::Windows::Forms::Button());
			this->buttonR = (gcnew System::Windows::Forms::Button());
			this->buttonT = (gcnew System::Windows::Forms::Button());
			this->buttonY = (gcnew System::Windows::Forms::Button());
			this->buttonU = (gcnew System::Windows::Forms::Button());
			this->buttonI = (gcnew System::Windows::Forms::Button());
			this->buttonO = (gcnew System::Windows::Forms::Button());
			this->buttonP = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonS = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImageBox))->BeginInit();
			this->SuspendLayout();
			// 
			// ImageBox
			// 
			this->ImageBox->Location = System::Drawing::Point(870, 12);
			this->ImageBox->Name = L"ImageBox";
			this->ImageBox->Size = System::Drawing::Size(378, 650);
			this->ImageBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ImageBox->TabIndex = 0;
			this->ImageBox->TabStop = false;
			// 
			// buttonF
			// 
			this->buttonF->Location = System::Drawing::Point(12, 601);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(60, 60);
			this->buttonF->TabIndex = 1;
			this->buttonF->Text = L"F";
			this->buttonF->UseVisualStyleBackColor = true;
			this->buttonF->Click += gcnew System::EventHandler(this, &Base::buttonF_Click);
			// 
			// buttonG
			// 
			this->buttonG->Location = System::Drawing::Point(78, 601);
			this->buttonG->Name = L"buttonG";
			this->buttonG->Size = System::Drawing::Size(60, 60);
			this->buttonG->TabIndex = 2;
			this->buttonG->Text = L"G";
			this->buttonG->UseVisualStyleBackColor = true;
			this->buttonG->Click += gcnew System::EventHandler(this, &Base::buttonG_Click);
			// 
			// buttonH
			// 
			this->buttonH->Location = System::Drawing::Point(144, 601);
			this->buttonH->Name = L"buttonH";
			this->buttonH->Size = System::Drawing::Size(60, 60);
			this->buttonH->TabIndex = 3;
			this->buttonH->Text = L"H";
			this->buttonH->UseVisualStyleBackColor = true;
			this->buttonH->Click += gcnew System::EventHandler(this, &Base::buttonH_Click);
			// 
			// buttonJ
			// 
			this->buttonJ->Location = System::Drawing::Point(210, 601);
			this->buttonJ->Name = L"buttonJ";
			this->buttonJ->Size = System::Drawing::Size(60, 60);
			this->buttonJ->TabIndex = 4;
			this->buttonJ->Text = L"J";
			this->buttonJ->UseVisualStyleBackColor = true;
			this->buttonJ->Click += gcnew System::EventHandler(this, &Base::buttonJ_Click);
			// 
			// buttonK
			// 
			this->buttonK->Location = System::Drawing::Point(276, 601);
			this->buttonK->Name = L"buttonK";
			this->buttonK->Size = System::Drawing::Size(60, 60);
			this->buttonK->TabIndex = 5;
			this->buttonK->Text = L"K";
			this->buttonK->UseVisualStyleBackColor = true;
			this->buttonK->Click += gcnew System::EventHandler(this, &Base::buttonK_Click);
			// 
			// buttonL
			// 
			this->buttonL->Location = System::Drawing::Point(342, 601);
			this->buttonL->Name = L"buttonL";
			this->buttonL->Size = System::Drawing::Size(60, 60);
			this->buttonL->TabIndex = 6;
			this->buttonL->Text = L"L";
			this->buttonL->UseVisualStyleBackColor = true;
			this->buttonL->Click += gcnew System::EventHandler(this, &Base::buttonL_Click);
			// 
			// buttonZ
			// 
			this->buttonZ->Location = System::Drawing::Point(408, 601);
			this->buttonZ->Name = L"buttonZ";
			this->buttonZ->Size = System::Drawing::Size(60, 60);
			this->buttonZ->TabIndex = 7;
			this->buttonZ->Text = L"Z";
			this->buttonZ->UseVisualStyleBackColor = true;
			this->buttonZ->Click += gcnew System::EventHandler(this, &Base::buttonZ_Click);
			// 
			// buttonX
			// 
			this->buttonX->Location = System::Drawing::Point(474, 601);
			this->buttonX->Name = L"buttonX";
			this->buttonX->Size = System::Drawing::Size(60, 60);
			this->buttonX->TabIndex = 8;
			this->buttonX->Text = L"X";
			this->buttonX->UseVisualStyleBackColor = true;
			this->buttonX->Click += gcnew System::EventHandler(this, &Base::buttonX_Click);
			// 
			// buttonC
			// 
			this->buttonC->Location = System::Drawing::Point(540, 601);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(60, 60);
			this->buttonC->TabIndex = 9;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &Base::buttonC_Click);
			// 
			// buttonV
			// 
			this->buttonV->Location = System::Drawing::Point(606, 601);
			this->buttonV->Name = L"buttonV";
			this->buttonV->Size = System::Drawing::Size(60, 60);
			this->buttonV->TabIndex = 10;
			this->buttonV->Text = L"V";
			this->buttonV->UseVisualStyleBackColor = true;
			this->buttonV->Click += gcnew System::EventHandler(this, &Base::buttonV_Click);
			// 
			// buttonB
			// 
			this->buttonB->Location = System::Drawing::Point(672, 601);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(60, 60);
			this->buttonB->TabIndex = 11;
			this->buttonB->Text = L"B";
			this->buttonB->UseVisualStyleBackColor = true;
			this->buttonB->Click += gcnew System::EventHandler(this, &Base::buttonB_Click);
			// 
			// buttonN
			// 
			this->buttonN->Location = System::Drawing::Point(738, 601);
			this->buttonN->Name = L"buttonN";
			this->buttonN->Size = System::Drawing::Size(60, 60);
			this->buttonN->TabIndex = 12;
			this->buttonN->Text = L"N";
			this->buttonN->UseVisualStyleBackColor = true;
			this->buttonN->Click += gcnew System::EventHandler(this, &Base::buttonN_Click);
			// 
			// buttonM
			// 
			this->buttonM->Location = System::Drawing::Point(804, 601);
			this->buttonM->Name = L"buttonM";
			this->buttonM->Size = System::Drawing::Size(60, 60);
			this->buttonM->TabIndex = 13;
			this->buttonM->Text = L"M";
			this->buttonM->UseVisualStyleBackColor = true;
			this->buttonM->Click += gcnew System::EventHandler(this, &Base::buttonM_Click);
			// 
			// buttonQ
			// 
			this->buttonQ->Location = System::Drawing::Point(12, 535);
			this->buttonQ->Name = L"buttonQ";
			this->buttonQ->Size = System::Drawing::Size(60, 60);
			this->buttonQ->TabIndex = 14;
			this->buttonQ->Text = L"Q";
			this->buttonQ->UseVisualStyleBackColor = true;
			this->buttonQ->Click += gcnew System::EventHandler(this, &Base::buttonQ_Click);
			// 
			// buttonW
			// 
			this->buttonW->Location = System::Drawing::Point(78, 535);
			this->buttonW->Name = L"buttonW";
			this->buttonW->Size = System::Drawing::Size(60, 60);
			this->buttonW->TabIndex = 15;
			this->buttonW->Text = L"W";
			this->buttonW->UseVisualStyleBackColor = true;
			this->buttonW->Click += gcnew System::EventHandler(this, &Base::buttonW_Click);
			// 
			// buttonE
			// 
			this->buttonE->Location = System::Drawing::Point(144, 535);
			this->buttonE->Name = L"buttonE";
			this->buttonE->Size = System::Drawing::Size(60, 60);
			this->buttonE->TabIndex = 16;
			this->buttonE->Text = L"E";
			this->buttonE->UseVisualStyleBackColor = true;
			this->buttonE->Click += gcnew System::EventHandler(this, &Base::buttonE_Click);
			// 
			// buttonR
			// 
			this->buttonR->Location = System::Drawing::Point(210, 535);
			this->buttonR->Name = L"buttonR";
			this->buttonR->Size = System::Drawing::Size(60, 60);
			this->buttonR->TabIndex = 17;
			this->buttonR->Text = L"R";
			this->buttonR->UseVisualStyleBackColor = true;
			this->buttonR->Click += gcnew System::EventHandler(this, &Base::buttonR_Click);
			// 
			// buttonT
			// 
			this->buttonT->Location = System::Drawing::Point(276, 535);
			this->buttonT->Name = L"buttonT";
			this->buttonT->Size = System::Drawing::Size(60, 60);
			this->buttonT->TabIndex = 18;
			this->buttonT->Text = L"T";
			this->buttonT->UseVisualStyleBackColor = true;
			this->buttonT->Click += gcnew System::EventHandler(this, &Base::buttonT_Click);
			// 
			// buttonY
			// 
			this->buttonY->Location = System::Drawing::Point(342, 535);
			this->buttonY->Name = L"buttonY";
			this->buttonY->Size = System::Drawing::Size(60, 60);
			this->buttonY->TabIndex = 19;
			this->buttonY->Text = L"Y";
			this->buttonY->UseVisualStyleBackColor = true;
			this->buttonY->Click += gcnew System::EventHandler(this, &Base::buttonY_Click);
			// 
			// buttonU
			// 
			this->buttonU->Location = System::Drawing::Point(408, 535);
			this->buttonU->Name = L"buttonU";
			this->buttonU->Size = System::Drawing::Size(60, 60);
			this->buttonU->TabIndex = 20;
			this->buttonU->Text = L"U";
			this->buttonU->UseVisualStyleBackColor = true;
			this->buttonU->Click += gcnew System::EventHandler(this, &Base::buttonU_Click);
			// 
			// buttonI
			// 
			this->buttonI->Location = System::Drawing::Point(474, 535);
			this->buttonI->Name = L"buttonI";
			this->buttonI->Size = System::Drawing::Size(60, 60);
			this->buttonI->TabIndex = 21;
			this->buttonI->Text = L"I";
			this->buttonI->UseVisualStyleBackColor = true;
			this->buttonI->Click += gcnew System::EventHandler(this, &Base::buttonI_Click);
			// 
			// buttonO
			// 
			this->buttonO->Location = System::Drawing::Point(540, 535);
			this->buttonO->Name = L"buttonO";
			this->buttonO->Size = System::Drawing::Size(60, 60);
			this->buttonO->TabIndex = 22;
			this->buttonO->Text = L"O";
			this->buttonO->UseVisualStyleBackColor = true;
			this->buttonO->Click += gcnew System::EventHandler(this, &Base::buttonO_Click);
			// 
			// buttonP
			// 
			this->buttonP->Location = System::Drawing::Point(606, 535);
			this->buttonP->Name = L"buttonP";
			this->buttonP->Size = System::Drawing::Size(60, 60);
			this->buttonP->TabIndex = 23;
			this->buttonP->Text = L"P";
			this->buttonP->UseVisualStyleBackColor = true;
			this->buttonP->Click += gcnew System::EventHandler(this, &Base::buttonP_Click);
			// 
			// buttonA
			// 
			this->buttonA->Location = System::Drawing::Point(672, 535);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(60, 60);
			this->buttonA->TabIndex = 24;
			this->buttonA->Text = L"A";
			this->buttonA->UseVisualStyleBackColor = true;
			this->buttonA->Click += gcnew System::EventHandler(this, &Base::buttonA_Click);
			// 
			// buttonS
			// 
			this->buttonS->Location = System::Drawing::Point(738, 535);
			this->buttonS->Name = L"buttonS";
			this->buttonS->Size = System::Drawing::Size(60, 60);
			this->buttonS->TabIndex = 25;
			this->buttonS->Text = L"S";
			this->buttonS->UseVisualStyleBackColor = true;
			this->buttonS->Click += gcnew System::EventHandler(this, &Base::buttonS_Click);
			// 
			// buttonD
			// 
			this->buttonD->Location = System::Drawing::Point(804, 535);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(60, 60);
			this->buttonD->TabIndex = 26;
			this->buttonD->Text = L"D";
			this->buttonD->UseVisualStyleBackColor = true;
			this->buttonD->Click += gcnew System::EventHandler(this, &Base::buttonD_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(852, 520);
			this->label1->TabIndex = 27;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// Base
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonS);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->buttonP);
			this->Controls->Add(this->buttonO);
			this->Controls->Add(this->buttonI);
			this->Controls->Add(this->buttonU);
			this->Controls->Add(this->buttonY);
			this->Controls->Add(this->buttonT);
			this->Controls->Add(this->buttonR);
			this->Controls->Add(this->buttonE);
			this->Controls->Add(this->buttonW);
			this->Controls->Add(this->buttonQ);
			this->Controls->Add(this->buttonM);
			this->Controls->Add(this->buttonN);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonV);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonX);
			this->Controls->Add(this->buttonZ);
			this->Controls->Add(this->buttonL);
			this->Controls->Add(this->buttonK);
			this->Controls->Add(this->buttonJ);
			this->Controls->Add(this->buttonH);
			this->Controls->Add(this->buttonG);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->ImageBox);
			this->Name = L"Base";
			this->Text = L"Wisielec";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImageBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void buttonQ_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonQ->Enabled = false;
		if (game->check('q'))
		{
			changeText();
			buttonQ->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonQ->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
	}
	private: System::Void buttonW_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonW->Enabled = false;
		if (game->check('w'))
		{
			changeText();
			buttonW->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonW->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonE_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonE->Enabled = false;
		if (game->check('e'))
		{
			changeText();
			buttonE->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonE->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonR_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonR->Enabled = false;
		if (game->check('r'))
		{
			changeText();
			buttonR->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonR->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonT_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonT->Enabled = false;
		if (game->check('t'))
		{
			changeText();
			buttonT->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonT->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonY_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonY->Enabled = false;
		if (game->check('y'))
		{
			changeText();
			buttonY->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonY->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonU_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonU->Enabled = false;
		if (game->check('u'))
		{
			changeText();
			buttonU->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonU->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonI_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonI->Enabled = false;
		if (game->check('i'))
		{
			changeText();
			buttonI->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonI->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonO_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonO->Enabled = false;
		if (game->check('o'))
		{
			changeText();
			buttonO->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonO->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonP_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonP->Enabled = false;
		if (game->check('p'))
		{
			changeText();
			buttonP->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonP->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonA_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonA->Enabled = false;
		if (game->check('a'))
		{
			changeText();
			buttonA->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonA->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonS_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonS->Enabled = false;
		if (game->check('s'))
		{
			changeText();
			buttonS->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonS->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonD_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonD->Enabled = false;
		if (game->check('d'))
		{
			changeText();
			buttonD->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonD->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonF_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonF->Enabled = false;
		if (game->check('f'))
		{
			changeText();
			buttonF->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonF->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonG_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonG->Enabled = false;
		if (game->check('g'))
		{
			changeText();
			buttonG->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonG->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonH_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonH->Enabled = false;
		if (game->check('h'))
		{
			changeText();
			buttonH->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonH->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonJ_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonJ->Enabled = false;
		if (game->check('j'))
		{
			changeText();
			buttonJ->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonJ->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonK_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonK->Enabled = false;
		if (game->check('k'))
		{
			changeText();
			buttonK->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonK->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonL_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonL->Enabled = false;
		if (game->check('l'))
		{
			changeText();
			buttonL->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonL->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonZ_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonZ->Enabled = false;
		if (game->check('z'))
		{
			changeText();
			buttonZ->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonZ->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonX_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonX->Enabled = false;
		if (game->check('x'))
		{
			changeText();
			buttonX->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonX->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonC->Enabled = false;
		if (game->check('c'))
		{
			changeText();
			buttonC->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonC->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonV_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonV->Enabled = false;
		if (game->check('v'))
		{
			changeText();
			buttonV->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonV->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonB_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonB->Enabled = false;
		if (game->check('b'))
		{
			changeText();
			buttonB->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonB->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonN_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonN->Enabled = false;
		if (game->check('n'))
		{
			changeText();
			buttonN->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonN->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	private: System::Void buttonM_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonM->Enabled = false;
		if (game->check('m'))
		{
			changeText();
			buttonM->BackColor = System::Drawing::Color::ForestGreen;
		}
		else
		{
			buttonM->BackColor = System::Drawing::Color::Red;
		}
		checkGameState();
		;
	}
	};
}