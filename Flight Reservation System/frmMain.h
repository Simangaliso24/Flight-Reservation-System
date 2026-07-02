#pragma once
#include "frmPassenger.h"
#include "frmBooking.h"
#include "frmLogin.h"



namespace FlightReservationSystem {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{

	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:












	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSignIn;
	private: System::Windows::Forms::Button^ btnSignUp;
	private: System::Windows::Forms::Button^ btnBookFlight;
	private: System::Windows::Forms::Button^ btnExit;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->btnBookFlight = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(421, 286);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 3;
			// 
			// btnSignIn
			// 
			this->btnSignIn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSignIn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignIn.BackgroundImage")));
			this->btnSignIn->ForeColor = System::Drawing::Color::White;
			this->btnSignIn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignIn.Image")));
			this->btnSignIn->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnSignIn->Location = System::Drawing::Point(521, 395);
			this->btnSignIn->Margin = System::Windows::Forms::Padding(4);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(126, 48);
			this->btnSignIn->TabIndex = 4;
			this->btnSignIn->Text = L"SIGN IN";
			this->btnSignIn->UseVisualStyleBackColor = true;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &frmMain::btnSignIn_Click);
			// 
			// btnSignUp
			// 
			this->btnSignUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignUp.BackgroundImage")));
			this->btnSignUp->ForeColor = System::Drawing::Color::White;
			this->btnSignUp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignUp.Image")));
			this->btnSignUp->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnSignUp->Location = System::Drawing::Point(668, 395);
			this->btnSignUp->Margin = System::Windows::Forms::Padding(4);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Size = System::Drawing::Size(123, 48);
			this->btnSignUp->TabIndex = 5;
			this->btnSignUp->Text = L"SIGN UP";
			this->btnSignUp->UseVisualStyleBackColor = true;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &frmMain::btnSignUp_Click);
			// 
			// btnBookFlight
			// 
			this->btnBookFlight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBookFlight.BackgroundImage")));
			this->btnBookFlight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBookFlight->ForeColor = System::Drawing::Color::White;
			this->btnBookFlight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBookFlight.Image")));
			this->btnBookFlight->Location = System::Drawing::Point(596, 341);
			this->btnBookFlight->Margin = System::Windows::Forms::Padding(4);
			this->btnBookFlight->Name = L"btnBookFlight";
			this->btnBookFlight->Size = System::Drawing::Size(155, 46);
			this->btnBookFlight->TabIndex = 6;
			this->btnBookFlight->Text = L"BOOK FLIGHT";
			this->btnBookFlight->UseVisualStyleBackColor = true;
			this->btnBookFlight->Click += gcnew System::EventHandler(this, &frmMain::btnBookFlight_Click);
			// 
			// btnExit
			// 
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Red;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(2, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(179, 37);
			this->btnExit->TabIndex = 7;
			this->btnExit->Text = L"Exit Application";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmMain::btnExit_Click);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1258, 657);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnBookFlight);
			this->Controls->Add(this->btnSignUp);
			this->Controls->Add(this->btnSignIn);
			this->Controls->Add(this->label2);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmMain";
			this->Text = L"Home";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	frmLogin^ loginst = gcnew frmLogin();
	loginst->ShowDialog();
}

private: System::Void btnSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
	frmPassenger^ registerForm = gcnew frmPassenger();
	registerForm->ShowDialog();
}


private: System::Void btnBookFlight_Click(System::Object^ sender, System::EventArgs^ e) 
{
	frmLogin^ loginForm = gcnew frmLogin();
	loginForm->ShowDialog();
}

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
