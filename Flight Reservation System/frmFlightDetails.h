#pragma once

namespace FlightReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmFlightDetails
	/// </summary>
	public ref class frmFlightDetails : public System::Windows::Forms::Form
	{

	public:
		frmFlightDetails(String^ flightID, String^ from, String^ to,
			DateTime departure, DateTime arrival,
			String^ seats, String^ price) {
			InitializeComponent();

			txtFlightID->Text = flightID;
			txtFrom->Text = from;
			txtTo->Text = to;
			dateDeparture->Value = departure;
			dateArrival->Value = arrival;
			txtSeats->Text = seats;
			txtPrice->Text = price;
		}

		property String^ FlightID { String^ get() { return txtFlightID->Text; } }
		property String^ From { String^ get() { return txtFrom->Text; } }
		property String^ To { String^ get() { return txtTo->Text; } }
		property DateTime DepartureDate { DateTime get() { return dateDeparture->Value; } }
		property DateTime ArrivalDate { DateTime get() { return dateArrival->Value; } }
		property String^ Seats { String^ get() { return txtSeats->Text; } }
		property String^ Price { String^ get() { return txtPrice->Text; } }


	public:
		frmFlightDetails(void)
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
		~frmFlightDetails()
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

	private: System::Windows::Forms::Label^ lblSeats;

	private: System::Windows::Forms::Label^ lbldateArrival;

	private: System::Windows::Forms::Label^ lblFlightID;
	private: System::Windows::Forms::Label^ lblFrom;
	private: System::Windows::Forms::Label^ lblTo;
	private: System::Windows::Forms::Label^ lbldateDeparture;
	private: System::Windows::Forms::Label^ lblPrice;






	private: System::Windows::Forms::TextBox^ txtFlightID;

	private: System::Windows::Forms::TextBox^ txtPrice;



	private: System::Windows::Forms::TextBox^ txtTo;
	private: System::Windows::Forms::TextBox^ txtSeats;
	private: System::Windows::Forms::TextBox^ txtFrom;




	private: System::Windows::Forms::DateTimePicker^ dateDeparture;
	private: System::Windows::Forms::DateTimePicker^ dateArrival;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmFlightDetails::typeid));
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lblSeats = (gcnew System::Windows::Forms::Label());
			this->lbldateArrival = (gcnew System::Windows::Forms::Label());
			this->lblFlightID = (gcnew System::Windows::Forms::Label());
			this->lblFrom = (gcnew System::Windows::Forms::Label());
			this->lblTo = (gcnew System::Windows::Forms::Label());
			this->lbldateDeparture = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->txtFlightID = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtTo = (gcnew System::Windows::Forms::TextBox());
			this->txtSeats = (gcnew System::Windows::Forms::TextBox());
			this->txtFrom = (gcnew System::Windows::Forms::TextBox());
			this->dateDeparture = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateArrival = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// btnSave
			// 
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.Image")));
			this->btnSave->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btnSave->Location = System::Drawing::Point(31, 272);
			this->btnSave->Margin = System::Windows::Forms::Padding(4);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(215, 52);
			this->btnSave->TabIndex = 0;
			this->btnSave->Text = L"Save Flight Details";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &frmFlightDetails::btnSave_Click_1);
			// 
			// btnCancel
			// 
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancel.Image")));
			this->btnCancel->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->btnCancel->Location = System::Drawing::Point(276, 272);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(154, 52);
			this->btnCancel->TabIndex = 1;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &frmFlightDetails::btnCancel_Click);
			// 
			// lblSeats
			// 
			this->lblSeats->AutoSize = true;
			this->lblSeats->ForeColor = System::Drawing::Color::White;
			this->lblSeats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblSeats.Image")));
			this->lblSeats->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->lblSeats->Location = System::Drawing::Point(29, 173);
			this->lblSeats->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSeats->Name = L"lblSeats";
			this->lblSeats->Size = System::Drawing::Size(151, 22);
			this->lblSeats->TabIndex = 2;
			this->lblSeats->Text = L"Seats Available:";
			// 
			// lbldateArrival
			// 
			this->lbldateArrival->AutoSize = true;
			this->lbldateArrival->ForeColor = System::Drawing::Color::White;
			this->lbldateArrival->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbldateArrival.Image")));
			this->lbldateArrival->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->lbldateArrival->Location = System::Drawing::Point(670, 128);
			this->lbldateArrival->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbldateArrival->Name = L"lbldateArrival";
			this->lbldateArrival->Size = System::Drawing::Size(124, 22);
			this->lbldateArrival->TabIndex = 3;
			this->lbldateArrival->Text = L"Arrival Date:";
			// 
			// lblFlightID
			// 
			this->lblFlightID->AutoSize = true;
			this->lblFlightID->ForeColor = System::Drawing::Color::White;
			this->lblFlightID->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblFlightID.Image")));
			this->lblFlightID->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->lblFlightID->Location = System::Drawing::Point(29, 23);
			this->lblFlightID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFlightID->Name = L"lblFlightID";
			this->lblFlightID->Size = System::Drawing::Size(94, 22);
			this->lblFlightID->TabIndex = 4;
			this->lblFlightID->Text = L"Flight ID:";
			// 
			// lblFrom
			// 
			this->lblFrom->AutoSize = true;
			this->lblFrom->ForeColor = System::Drawing::Color::White;
			this->lblFrom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblFrom.Image")));
			this->lblFrom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblFrom->Location = System::Drawing::Point(29, 75);
			this->lblFrom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFrom->Name = L"lblFrom";
			this->lblFrom->Size = System::Drawing::Size(64, 22);
			this->lblFrom->TabIndex = 5;
			this->lblFrom->Text = L"From:";
			// 
			// lblTo
			// 
			this->lblTo->AutoSize = true;
			this->lblTo->ForeColor = System::Drawing::Color::White;
			this->lblTo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblTo.Image")));
			this->lblTo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblTo->Location = System::Drawing::Point(670, 72);
			this->lblTo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTo->Name = L"lblTo";
			this->lblTo->Size = System::Drawing::Size(38, 22);
			this->lblTo->TabIndex = 6;
			this->lblTo->Text = L"To:";
			// 
			// lbldateDeparture
			// 
			this->lbldateDeparture->AutoSize = true;
			this->lbldateDeparture->ForeColor = System::Drawing::Color::White;
			this->lbldateDeparture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbldateDeparture.Image")));
			this->lbldateDeparture->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbldateDeparture->Location = System::Drawing::Point(29, 128);
			this->lbldateDeparture->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbldateDeparture->Name = L"lbldateDeparture";
			this->lbldateDeparture->Size = System::Drawing::Size(143, 22);
			this->lbldateDeparture->TabIndex = 7;
			this->lbldateDeparture->Text = L"Depature Date:";
			// 
			// lblPrice
			// 
			this->lblPrice->AutoSize = true;
			this->lblPrice->ForeColor = System::Drawing::Color::White;
			this->lblPrice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblPrice.Image")));
			this->lblPrice->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->lblPrice->Location = System::Drawing::Point(670, 23);
			this->lblPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(62, 22);
			this->lblPrice->TabIndex = 8;
			this->lblPrice->Text = L"Price:";
			// 
			// txtFlightID
			// 
			this->txtFlightID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtFlightID->Location = System::Drawing::Point(187, 20);
			this->txtFlightID->Margin = System::Windows::Forms::Padding(4);
			this->txtFlightID->Name = L"txtFlightID";
			this->txtFlightID->Size = System::Drawing::Size(398, 29);
			this->txtFlightID->TabIndex = 9;
			// 
			// txtPrice
			// 
			this->txtPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPrice->Location = System::Drawing::Point(806, 13);
			this->txtPrice->Margin = System::Windows::Forms::Padding(4);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(415, 29);
			this->txtPrice->TabIndex = 11;
			this->txtPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmFlightDetails::txtPrice_KeyPress);
			// 
			// txtTo
			// 
			this->txtTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtTo->Location = System::Drawing::Point(806, 65);
			this->txtTo->Margin = System::Windows::Forms::Padding(4);
			this->txtTo->Name = L"txtTo";
			this->txtTo->Size = System::Drawing::Size(415, 29);
			this->txtTo->TabIndex = 12;
			// 
			// txtSeats
			// 
			this->txtSeats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtSeats->Location = System::Drawing::Point(187, 166);
			this->txtSeats->Margin = System::Windows::Forms::Padding(4);
			this->txtSeats->Name = L"txtSeats";
			this->txtSeats->Size = System::Drawing::Size(148, 29);
			this->txtSeats->TabIndex = 13;
			this->txtSeats->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmFlightDetails::txtSeats_KeyPress);
			// 
			// txtFrom
			// 
			this->txtFrom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtFrom->Location = System::Drawing::Point(187, 72);
			this->txtFrom->Margin = System::Windows::Forms::Padding(4);
			this->txtFrom->Name = L"txtFrom";
			this->txtFrom->Size = System::Drawing::Size(398, 29);
			this->txtFrom->TabIndex = 14;
			// 
			// dateDeparture
			// 
			this->dateDeparture->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dateDeparture->Location = System::Drawing::Point(187, 121);
			this->dateDeparture->Margin = System::Windows::Forms::Padding(4);
			this->dateDeparture->Name = L"dateDeparture";
			this->dateDeparture->Size = System::Drawing::Size(398, 29);
			this->dateDeparture->TabIndex = 16;
			// 
			// dateArrival
			// 
			this->dateArrival->Location = System::Drawing::Point(806, 121);
			this->dateArrival->Margin = System::Windows::Forms::Padding(4);
			this->dateArrival->Name = L"dateArrival";
			this->dateArrival->Size = System::Drawing::Size(415, 29);
			this->dateArrival->TabIndex = 17;
			// 
			// frmFlightDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1256, 381);
			this->Controls->Add(this->dateArrival);
			this->Controls->Add(this->dateDeparture);
			this->Controls->Add(this->txtFrom);
			this->Controls->Add(this->txtSeats);
			this->Controls->Add(this->txtTo);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtFlightID);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->lbldateDeparture);
			this->Controls->Add(this->lblTo);
			this->Controls->Add(this->lblFrom);
			this->Controls->Add(this->lblFlightID);
			this->Controls->Add(this->lbldateArrival);
			this->Controls->Add(this->lblSeats);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmFlightDetails";
			this->Text = L"Add new/Edit Flight";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnSave_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	if (String::IsNullOrWhiteSpace(txtFlightID->Text) ||
		String::IsNullOrWhiteSpace(txtFrom->Text) ||
		String::IsNullOrWhiteSpace(txtTo->Text) ||
		String::IsNullOrWhiteSpace(txtSeats->Text) ||
		String::IsNullOrWhiteSpace(txtPrice->Text))
	{
		MessageBox::Show("Please fill in all fields before saving.",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->Close();
}

private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->Close();
}

private: System::Void txtSeats_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (!Char::IsDigit(e->KeyChar) &&
		e->KeyChar != (char)Keys::Back)
	{
		e->Handled = true;
		return;
	}
}

private: System::Void txtPrice_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	TextBox^ tb = safe_cast<TextBox^>(sender);

	if (!Char::IsDigit(e->KeyChar) &&
		e->KeyChar != (char)Keys::Back &&
		e->KeyChar != '.')
	{
		e->Handled = true;
		return;
	}

	if (e->KeyChar == '.' && tb->Text->Contains("."))
	{
		e->Handled = true;
		return;
	}
}

};
}
