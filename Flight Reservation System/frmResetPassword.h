#pragma once
#include "ResetPasswordDBHelper.h"
namespace FlightReservationSystem {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmResetPassword
	/// </summary>
	public ref class frmResetPassword : public System::Windows::Forms::Form
	{
	public:
		frmResetPassword(void)
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
		~frmResetPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtNewPassword;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;
	private: System::Windows::Forms::Button^ btnResetPassword;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmResetPassword::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnResetPassword = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Location = System::Drawing::Point(31, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Email:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(31, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"New Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label3->Location = System::Drawing::Point(31, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Confirm Password:";
			// 
			// txtEmail
			// 
			this->txtEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtEmail->Location = System::Drawing::Point(172, 84);
			this->txtEmail->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(374, 27);
			this->txtEmail->TabIndex = 3;
			// 
			// txtNewPassword
			// 
			this->txtNewPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtNewPassword->Location = System::Drawing::Point(172, 138);
			this->txtNewPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtNewPassword->Name = L"txtNewPassword";
			this->txtNewPassword->PasswordChar = '*';
			this->txtNewPassword->Size = System::Drawing::Size(342, 27);
			this->txtNewPassword->TabIndex = 4;
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtConfirmPassword->Location = System::Drawing::Point(172, 191);
			this->txtConfirmPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->PasswordChar = '*';
			this->txtConfirmPassword->Size = System::Drawing::Size(342, 27);
			this->txtConfirmPassword->TabIndex = 5;
			// 
			// btnResetPassword
			// 
			this->btnResetPassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResetPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnResetPassword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnResetPassword.Image")));
			this->btnResetPassword->Location = System::Drawing::Point(31, 243);
			this->btnResetPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnResetPassword->Name = L"btnResetPassword";
			this->btnResetPassword->Size = System::Drawing::Size(135, 35);
			this->btnResetPassword->TabIndex = 6;
			this->btnResetPassword->Text = L"Reset Password";
			this->btnResetPassword->UseVisualStyleBackColor = true;
			this->btnResetPassword->Click += gcnew System::EventHandler(this, &frmResetPassword::btnResetPassword_Click);
			// 
			// frmResetPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(569, 291);
			this->Controls->Add(this->btnResetPassword);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->txtNewPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmResetPassword";
			this->Text = L"Reset Password";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnResetPassword_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ email = txtEmail->Text->Trim();
		String^ newPass = txtNewPassword->Text;
		String^ confirmPass = txtConfirmPassword->Text;

		if (String::IsNullOrWhiteSpace(email) ||
			String::IsNullOrWhiteSpace(newPass) ||
			String::IsNullOrWhiteSpace(confirmPass))
		{
			MessageBox::Show("Please fill in all fields.");
			return;
		}

		if (newPass != confirmPass)
		{
			MessageBox::Show("Passwords do not match.");
			return;
		}

		if (!ResetPasswordDBHelper::EmailExists(email))
		{
			MessageBox::Show("Email not found.");
			return;
		}

		ResetPasswordDBHelper::UpdatePassword(email, newPass);

		MessageBox::Show("Password reset successful!");

		this->Close();
	}
};
}
