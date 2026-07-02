#pragma once
#include "frmBooking.h"
#include "frmAdmin.h"
#include "frmResetPassword.h"
#include "LoginDBHelper.h"


namespace FlightReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
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
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnSignIn;
	private: System::Windows::Forms::Button^ btnForgotPassword;
	private: System::Windows::Forms::Button^ btnClose;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLogin::typeid));
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->btnForgotPassword = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtUsername->Location = System::Drawing::Point(504, 352);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(439, 30);
			this->txtUsername->TabIndex = 0;
			this->txtUsername->Text = L"passenger@tut4life.ac.za / admin@tut.ac.za";
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPassword->Location = System::Drawing::Point(504, 481);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(439, 30);
			this->txtPassword->TabIndex = 1;
			this->txtPassword->Text = L"User@345";
			// 
			// btnSignIn
			// 
			this->btnSignIn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignIn.BackgroundImage")));
			this->btnSignIn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignIn->ForeColor = System::Drawing::Color::White;
			this->btnSignIn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSignIn.Image")));
			this->btnSignIn->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btnSignIn->Location = System::Drawing::Point(531, 536);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(165, 30);
			this->btnSignIn->TabIndex = 2;
			this->btnSignIn->Text = L"SIGN IN";
			this->btnSignIn->UseVisualStyleBackColor = true;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &frmLogin::btnSignIn_Click);
			// 
			// btnForgotPassword
			// 
			this->btnForgotPassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnForgotPassword->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnForgotPassword->ForeColor = System::Drawing::Color::Red;
			this->btnForgotPassword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnForgotPassword.Image")));
			this->btnForgotPassword->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->btnForgotPassword->Location = System::Drawing::Point(736, 536);
			this->btnForgotPassword->Name = L"btnForgotPassword";
			this->btnForgotPassword->Size = System::Drawing::Size(169, 30);
			this->btnForgotPassword->TabIndex = 3;
			this->btnForgotPassword->Text = L"Forgot Password\?";
			this->btnForgotPassword->UseVisualStyleBackColor = true;
			this->btnForgotPassword->Click += gcnew System::EventHandler(this, &frmLogin::btnForgotPassword_Click);
			// 
			// btnClose
			// 
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::White;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnClose->Location = System::Drawing::Point(1, 1);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(118, 40);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &frmLogin::btnClose_Click);
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1336, 683);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnForgotPassword);
			this->Controls->Add(this->btnSignIn);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->DoubleBuffered = true;
			this->Name = L"frmLogin";
			this->Text = L"Log In";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void btnSignIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ email = txtUsername->Text->Trim();
	String^ password = txtPassword->Text->Trim();

	try
	{
		if (email->ToLower()->EndsWith("@tut.ac.za"))
		{
			bool validAdmin = LoginDBHelper::ValidateAdmin(email, password);

			if (validAdmin)
			{
				frmAdmin^ adminForm = gcnew frmAdmin();
				adminForm->ShowDialog();
			}
			else
			{
				MessageBox::Show("Invalid admin email or password.",
					"Admin Login Failed",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}

			return;
		}

		if (email->ToLower()->EndsWith("@tut4life.ac.za"))
		{
			bool validUser = LoginDBHelper::ValidatePassenger(email, password);

			if (validUser)
			{
				frmBooking^ bookingForm = gcnew frmBooking();
				bookingForm->ShowDialog();
			}
			else
			{
				MessageBox::Show("Invalid email or password. Please sign up if you are new.",
					"Login Failed",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}

			return;
		}

		MessageBox::Show("Invalid email domain. Use your TUT email address.",
			"Login Failed",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Database error: " + ex->Message,
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}


private: System::Void btnForgotPassword_Click(System::Object^ sender, System::EventArgs^ e) {

	frmResetPassword^ resetForm = gcnew frmResetPassword();
	resetForm->ShowDialog();

}

private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
