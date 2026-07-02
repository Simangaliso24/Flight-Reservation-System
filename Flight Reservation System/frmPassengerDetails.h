#pragma once
#include "AdminDBHelper.h"

namespace FlightReservationSystem {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPassengerDetails
	/// </summary>
	public ref class frmPassengerDetails : public System::Windows::Forms::Form
	{
	public:
		frmPassengerDetails(String^ id, String^ name, String^ contact, String^ email)
		{
			InitializeComponent();

			txtID->Text = id;
			txtFullName->Text = name;
			txtContact->Text = contact;
			txtEmail->Text = email;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPassengerDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::TextBox^ txtContact;

	private: System::Windows::Forms::TextBox^ txtFullName;

	private: System::Windows::Forms::TextBox^ txtID;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPassengerDetails::typeid));
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtContact = (gcnew System::Windows::Forms::TextBox());
			this->txtFullName = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnSave
			// 
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.Image")));
			this->btnSave->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btnSave->Location = System::Drawing::Point(28, 208);
			this->btnSave->Margin = System::Windows::Forms::Padding(4);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(168, 39);
			this->btnSave->TabIndex = 0;
			this->btnSave->Text = L"Save Passenger";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &frmPassengerDetails::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancel.Image")));
			this->btnCancel->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->btnCancel->Location = System::Drawing::Point(228, 208);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(118, 39);
			this->btnCancel->TabIndex = 1;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &frmPassengerDetails::btnCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(32, 93);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Identity Number:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label2->Location = System::Drawing::Point(32, 17);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Full Names:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label3->Location = System::Drawing::Point(32, 141);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Contact Number: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(32, 53);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Email:";
			// 
			// txtEmail
			// 
			this->txtEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtEmail->Location = System::Drawing::Point(215, 53);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(526, 29);
			this->txtEmail->TabIndex = 6;
			this->txtEmail->Text = L"Email Address";
			// 
			// txtContact
			// 
			this->txtContact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtContact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtContact->Location = System::Drawing::Point(215, 138);
			this->txtContact->Margin = System::Windows::Forms::Padding(4);
			this->txtContact->Name = L"txtContact";
			this->txtContact->Size = System::Drawing::Size(320, 29);
			this->txtContact->TabIndex = 7;
			this->txtContact->Text = L"Contact";
			// 
			// txtFullName
			// 
			this->txtFullName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtFullName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtFullName->Location = System::Drawing::Point(215, 11);
			this->txtFullName->Margin = System::Windows::Forms::Padding(4);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(601, 29);
			this->txtFullName->TabIndex = 8;
			this->txtFullName->Text = L"Full Name";
			// 
			// txtID
			// 
			this->txtID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtID->Location = System::Drawing::Point(215, 93);
			this->txtID->Margin = System::Windows::Forms::Padding(4);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(448, 29);
			this->txtID->TabIndex = 9;
			this->txtID->Text = L"ID";
			// 
			// frmPassengerDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(859, 287);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->txtFullName);
			this->Controls->Add(this->txtContact);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmPassengerDetails";
			this->Text = L"Add new/Edit Passenger";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ id = txtID->Text->Trim();
	String^ fullName = txtFullName->Text->Trim();
	String^ contact = txtContact->Text->Trim();
	String^ email = txtEmail->Text->Trim();

	String^ password = "Temp@123"; 

	if (!System::Text::RegularExpressions::Regex::IsMatch(fullName, "^[A-Za-z ]+$")) {
		MessageBox::Show("Full Name must contain letters only.", "Validation Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (!System::Text::RegularExpressions::Regex::IsMatch(contact, "^[0-9]{10}$")) {
		MessageBox::Show("Contact number must be exactly 10 digits.", "Validation Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (!System::Text::RegularExpressions::Regex::IsMatch(id, "^[0-9]{13}$")) {
		MessageBox::Show("Identity Number must be exactly 13 digits.", "Validation Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ emailLower = email->ToLower();
	if (!(emailLower->EndsWith("tut4life.ac.za") || emailLower->EndsWith("tut.ac.za"))) {
		MessageBox::Show("Email must end with tut4life.ac.za or tut.ac.za.", "Validation Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try
	{
		if (AdminDBHelper::PassengerExists(id, email))
		{
			MessageBox::Show("Passenger already exists (ID or Email duplicate).",
				"Duplicate Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}

		bool isUpdate = false;

		SqlConnection^ conn = gcnew SqlConnection(AdminDBHelper::GetConnectionString());
		SqlCommand^ checkCmd = gcnew SqlCommand(
			"SELECT COUNT(*) FROM Passenger WHERE PassengerID=@id", conn);

		checkCmd->Parameters->AddWithValue("@id", id);

		conn->Open();
		int exists = Convert::ToInt32(checkCmd->ExecuteScalar());
		conn->Close();

		if (exists > 0)
		{
			AdminDBHelper::UpdatePassenger(id, fullName, contact, email);
			isUpdate = true;
		}
		else
		{
			AdminDBHelper::AddPassenger(id, fullName, contact, email, password);
		}

		MessageBox::Show(
			isUpdate ? "Passenger updated successfully!" : "Passenger added successfully!",
			"Success",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
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
