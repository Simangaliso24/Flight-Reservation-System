#pragma once
#include "frmBooking.h"
#include "frmLogin.h"


namespace FlightReservationSystem {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPassenger
	/// </summary>
	public ref class frmPassenger : public System::Windows::Forms::Form
	{
	public:
		frmPassenger(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}






	//public:
	//	property String^ ID 
	//	{
	//		String^ get() 
	//		{ 
	//			return txtPasswordID->Text; 
	//		} 
	//	}
	//	property String^ FullName 
	//	{ 
	//		String^ get() 
	//		{ 
	//			return txtFullName->Text; 
	//		} 
	//	}
	//	property String^ Contact 
	//	{ 
	//		String^ get() 
	//		{ 
	//			return txtContact->Text; 
	//		} 
	//	}
	//	property String^ Email 
	//	{ 
	//		String^ get() 
	//		{ 
	//			return txtEmail->Text; 
	//		} 
	//	}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPassenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtFullName;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtContact;
	private: System::Windows::Forms::TextBox^ txtPassword;


	protected:

	protected:



	private: System::Windows::Forms::Button^ btnSignUp;
	private: System::Windows::Forms::TextBox^ txtIdentity;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPassenger::typeid));
			this->txtFullName = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtContact = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->txtIdentity = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtFullName
			// 
			this->txtFullName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFullName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtFullName->Location = System::Drawing::Point(31, 45);
			this->txtFullName->Margin = System::Windows::Forms::Padding(4);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(545, 23);
			this->txtFullName->TabIndex = 0;
			this->txtFullName->Text = L"Sleka Hlongwane";
			// 
			// txtEmail
			// 
			this->txtEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtEmail->Location = System::Drawing::Point(31, 200);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(545, 23);
			this->txtEmail->TabIndex = 1;
			this->txtEmail->Text = L"passenger@tut4life.ac.za / administrator@tut.ac.za";
			// 
			// txtContact
			// 
			this->txtContact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtContact->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtContact->Location = System::Drawing::Point(31, 272);
			this->txtContact->Margin = System::Windows::Forms::Padding(4);
			this->txtContact->Name = L"txtContact";
			this->txtContact->Size = System::Drawing::Size(545, 23);
			this->txtContact->TabIndex = 2;
			this->txtContact->Text = L"0718387172";
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPassword->Location = System::Drawing::Point(31, 346);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(545, 23);
			this->txtPassword->TabIndex = 3;
			this->txtPassword->Text = L"User@345";
			// 
			// btnSignUp
			// 
			this->btnSignUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignUp->ForeColor = System::Drawing::Color::White;
			this->btnSignUp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignUp.Image")));
			this->btnSignUp->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnSignUp->Location = System::Drawing::Point(31, 394);
			this->btnSignUp->Margin = System::Windows::Forms::Padding(4);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Size = System::Drawing::Size(213, 35);
			this->btnSignUp->TabIndex = 4;
			this->btnSignUp->Text = L"SIGN UP";
			this->btnSignUp->UseVisualStyleBackColor = true;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &frmPassenger::btnSignUp_Click);
			// 
			// txtIdentity
			// 
			this->txtIdentity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtIdentity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtIdentity->Location = System::Drawing::Point(31, 122);
			this->txtIdentity->Name = L"txtIdentity";
			this->txtIdentity->Size = System::Drawing::Size(545, 23);
			this->txtIdentity->TabIndex = 5;
			this->txtIdentity->Text = L"9111252369086";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Location = System::Drawing::Point(36, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Full Names:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(35, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Identity Number:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(35, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Username:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(35, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Contact Number:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label5->Location = System::Drawing::Point(35, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Password:";
			// 
			// frmPassenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(647, 446);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtIdentity);
			this->Controls->Add(this->btnSignUp);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtContact);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtFullName);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmPassenger";
			this->Text = L"Sign Up";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ fullName = txtFullName->Text->Trim();
	String^ identity = txtIdentity->Text->Trim();
	String^ email = txtEmail->Text->Trim();
	String^ contact = txtContact->Text->Trim();
	String^ password = txtPassword->Text->Trim();

	//  Validate Full Name (letters only)
	if (!System::Text::RegularExpressions::Regex::IsMatch(fullName, "^[A-Za-z ]+$")) 
	{
		MessageBox::Show("Full Name must contain letters only (no numbers or special characters).",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validate Email format
	String^ emailLower = email->ToLower();
	if (!(emailLower->EndsWith("@tut4life.ac.za") || emailLower->EndsWith("@tut.ac.za"))) 
	{
		MessageBox::Show("Email must be in the format user@tut4life.ac.za or admin@tut.ac.za.",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	//Validate Contact (10 digits only)
	if (!System::Text::RegularExpressions::Regex::IsMatch(contact, "^[0-9]{10}$")) 
	{
		MessageBox::Show("Contact number must be exactly 10 digits.",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	//Validate Identity (13 digits only)
	if (!System::Text::RegularExpressions::Regex::IsMatch(identity, "^[0-9]{13}$")) 
	{
		MessageBox::Show("Identity Number must be exactly 13 digits.",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Password validation 
	if(String::IsNullOrWhiteSpace(password) || password->Length < 4)
	{
		MessageBox::Show("Password must be at least 4 characters long.",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	

	try
	{
		if (AdminDBHelper::PassengerExists(identity, email))
		{
			MessageBox::Show("Passenger already exists (ID or Email duplicate).",
				"Duplicate Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}

		AdminDBHelper::AddPassenger(identity, fullName, contact, email, password);

		MessageBox::Show(
			email->EndsWith("@tut.ac.za")
			? "You Successfully signed up as Administrator."
			: "You Successfully signed up as Passenger.",
			"Success",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();

		frmLogin^ loginForm = gcnew frmLogin();
		loginForm->ShowDialog();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error saving passenger: " + ex->Message,
			"Database Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}





};
}
