#pragma once
#include "BookingDBHelper.h"

namespace FlightReservationSystem {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmBooking
	/// </summary>
	public ref class frmBooking : public System::Windows::Forms::Form
	{
	public:
		frmBooking(void)
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
		~frmBooking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	private: System::Windows::Forms::StatusStrip^ statusStrip;
	protected:

	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ planTripToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ bookAToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutUsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ howToBookFlightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ welcomeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;







	private: System::Windows::Forms::ToolStripMenuItem^ bookingsToolStripMenuItem;

	private: System::Windows::Forms::ComboBox^ cmbFlyingFrom;
	private: System::Windows::Forms::ComboBox^ cmbFlyingTo;
	private: System::Windows::Forms::ComboBox^ cmbAdults;
	private: System::Windows::Forms::ComboBox^ cmbChildren;




	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDepatureDate;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerArrivalDate;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cmbPassangerName;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ cmbCurrency;
	private: System::Windows::Forms::ComboBox^ cmbTicketPrice;

	private: System::Windows::Forms::DataGridView^ dataGridView;



	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::Button^ btnAddBooking;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ lblWarm;
	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmBooking::typeid));
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->welcomeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->planTripToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bookAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToBookFlightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bookingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->cmbFlyingFrom = (gcnew System::Windows::Forms::ComboBox());
			this->cmbFlyingTo = (gcnew System::Windows::Forms::ComboBox());
			this->cmbAdults = (gcnew System::Windows::Forms::ComboBox());
			this->cmbChildren = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerDepatureDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerArrivalDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cmbPassangerName = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cmbCurrency = (gcnew System::Windows::Forms::ComboBox());
			this->cmbTicketPrice = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->btnAddBooking = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblWarm = (gcnew System::Windows::Forms::Label());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip->SuspendLayout();
			this->statusStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip.BackgroundImage")));
			this->menuStrip->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->homeToolStripMenuItem,
					this->planTripToolStripMenuItem, this->helpToolStripMenuItem, this->bookingsToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Padding = System::Windows::Forms::Padding(11, 2, 0, 2);
			this->menuStrip->Size = System::Drawing::Size(1492, 28);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStripLayout";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->welcomeToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->homeToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->homeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"homeToolStripMenuItem.Image")));
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->homeToolStripMenuItem->Text = L"Home";
			// 
			// welcomeToolStripMenuItem
			// 
			this->welcomeToolStripMenuItem->Name = L"welcomeToolStripMenuItem";
			this->welcomeToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->welcomeToolStripMenuItem->Text = L"Welcome";
			this->welcomeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBooking::welcomeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBooking::exitToolStripMenuItem_Click);
			// 
			// planTripToolStripMenuItem
			// 
			this->planTripToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->planTripToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->bookAToolStripMenuItem });
			this->planTripToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->planTripToolStripMenuItem->Name = L"planTripToolStripMenuItem";
			this->planTripToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->planTripToolStripMenuItem->Text = L"Plan Trip";
			// 
			// bookAToolStripMenuItem
			// 
			this->bookAToolStripMenuItem->Name = L"bookAToolStripMenuItem";
			this->bookAToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->bookAToolStripMenuItem->Text = L"Book Ticket";
			this->bookAToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBooking::bookAToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutUsToolStripMenuItem,
					this->howToBookFlightToolStripMenuItem
			});
			this->helpToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutUsToolStripMenuItem
			// 
			this->aboutUsToolStripMenuItem->Name = L"aboutUsToolStripMenuItem";
			this->aboutUsToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->aboutUsToolStripMenuItem->Text = L"About Us";
			this->aboutUsToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBooking::aboutUsToolStripMenuItem_Click);
			// 
			// howToBookFlightToolStripMenuItem
			// 
			this->howToBookFlightToolStripMenuItem->Name = L"howToBookFlightToolStripMenuItem";
			this->howToBookFlightToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->howToBookFlightToolStripMenuItem->Text = L"How to Book flight";
			this->howToBookFlightToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBooking::howToBookFlightToolStripMenuItem_Click);
			// 
			// bookingsToolStripMenuItem
			// 
			this->bookingsToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->bookingsToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->bookingsToolStripMenuItem->Name = L"bookingsToolStripMenuItem";
			this->bookingsToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->bookingsToolStripMenuItem->Text = L"Bookings";
			this->bookingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmBooking::bookingsToolStripMenuItem_Click);
			// 
			// statusStrip
			// 
			this->statusStrip->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statusStrip.BackgroundImage")));
			this->statusStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip->Location = System::Drawing::Point(0, 541);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Padding = System::Windows::Forms::Padding(1, 0, 19, 0);
			this->statusStrip->Size = System::Drawing::Size(1492, 23);
			this->statusStrip->TabIndex = 1;
			this->statusStrip->Text = L"statusStripLayout";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::White;
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Black;
			this->toolStripStatusLabel1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(62, 18);
			this->toolStripStatusLabel1->Text = L"Records";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->BackColor = System::Drawing::Color::White;
			this->toolStripStatusLabel2->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->toolStripStatusLabel2->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(83, 18);
			this->toolStripStatusLabel2->Text = L"Date/Time";
			// 
			// cmbFlyingFrom
			// 
			this->cmbFlyingFrom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cmbFlyingFrom->FormattingEnabled = true;
			this->cmbFlyingFrom->Location = System::Drawing::Point(29, 74);
			this->cmbFlyingFrom->Name = L"cmbFlyingFrom";
			this->cmbFlyingFrom->Size = System::Drawing::Size(295, 26);
			this->cmbFlyingFrom->TabIndex = 4;
			// 
			// cmbFlyingTo
			// 
			this->cmbFlyingTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cmbFlyingTo->FormattingEnabled = true;
			this->cmbFlyingTo->Location = System::Drawing::Point(330, 74);
			this->cmbFlyingTo->Name = L"cmbFlyingTo";
			this->cmbFlyingTo->Size = System::Drawing::Size(263, 26);
			this->cmbFlyingTo->TabIndex = 5;
			// 
			// cmbAdults
			// 
			this->cmbAdults->ForeColor = System::Drawing::Color::Gray;
			this->cmbAdults->FormattingEnabled = true;
			this->cmbAdults->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->cmbAdults->Location = System::Drawing::Point(1303, 75);
			this->cmbAdults->Name = L"cmbAdults";
			this->cmbAdults->Size = System::Drawing::Size(81, 26);
			this->cmbAdults->TabIndex = 6;
			this->cmbAdults->SelectedIndexChanged += gcnew System::EventHandler(this, &frmBooking::cmbAdults_SelectedIndexChanged);
			// 
			// cmbChildren
			// 
			this->cmbChildren->ForeColor = System::Drawing::Color::Gray;
			this->cmbChildren->FormattingEnabled = true;
			this->cmbChildren->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->cmbChildren->Location = System::Drawing::Point(1390, 76);
			this->cmbChildren->Name = L"cmbChildren";
			this->cmbChildren->Size = System::Drawing::Size(90, 26);
			this->cmbChildren->TabIndex = 7;
			this->cmbChildren->SelectedIndexChanged += gcnew System::EventHandler(this, &frmBooking::cmbChildren_SelectedIndexChanged);
			// 
			// dateTimePickerDepatureDate
			// 
			this->dateTimePickerDepatureDate->Location = System::Drawing::Point(608, 75);
			this->dateTimePickerDepatureDate->Name = L"dateTimePickerDepatureDate";
			this->dateTimePickerDepatureDate->Size = System::Drawing::Size(324, 23);
			this->dateTimePickerDepatureDate->TabIndex = 8;
			// 
			// dateTimePickerArrivalDate
			// 
			this->dateTimePickerArrivalDate->CalendarMonthBackground = System::Drawing::Color::Blue;
			this->dateTimePickerArrivalDate->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dateTimePickerArrivalDate->Location = System::Drawing::Point(944, 74);
			this->dateTimePickerArrivalDate->Name = L"dateTimePickerArrivalDate";
			this->dateTimePickerArrivalDate->Size = System::Drawing::Size(317, 23);
			this->dateTimePickerArrivalDate->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(34, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 18);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Flying From";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(613, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 18);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Depature Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(940, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Arrival Date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(1299, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Adults";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(1386, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Children";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(337, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 18);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Flying To";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(83, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 27);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Price Filter";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(34, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 18);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Passenger Name";
			// 
			// cmbPassangerName
			// 
			this->cmbPassangerName->FormattingEnabled = true;
			this->cmbPassangerName->Location = System::Drawing::Point(29, 271);
			this->cmbPassangerName->Name = L"cmbPassangerName";
			this->cmbPassangerName->Size = System::Drawing::Size(165, 26);
			this->cmbPassangerName->TabIndex = 18;
			this->cmbPassangerName->SelectedIndexChanged += gcnew System::EventHandler(this, &frmBooking::cmbPassangerName_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(161, 348);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 18);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Ticket Price";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
			this->label11->Location = System::Drawing::Point(25, 348);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 18);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Currency";
			// 
			// cmbCurrency
			// 
			this->cmbCurrency->FormattingEnabled = true;
			this->cmbCurrency->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"R", L"$" });
			this->cmbCurrency->Location = System::Drawing::Point(24, 386);
			this->cmbCurrency->Name = L"cmbCurrency";
			this->cmbCurrency->Size = System::Drawing::Size(121, 26);
			this->cmbCurrency->TabIndex = 21;
			// 
			// cmbTicketPrice
			// 
			this->cmbTicketPrice->FormattingEnabled = true;
			this->cmbTicketPrice->Location = System::Drawing::Point(165, 386);
			this->cmbTicketPrice->Name = L"cmbTicketPrice";
			this->cmbTicketPrice->Size = System::Drawing::Size(121, 26);
			this->cmbTicketPrice->TabIndex = 22;
			// 
			// dataGridView
			// 
			this->dataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(341, 162);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(854, 371);
			this->dataGridView->TabIndex = 23;
			this->dataGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmBooking::dataGridView_CellClick);
			// 
			// btnAddBooking
			// 
			this->btnAddBooking->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddBooking->ForeColor = System::Drawing::Color::Black;
			this->btnAddBooking->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddBooking.Image")));
			this->btnAddBooking->Location = System::Drawing::Point(1303, 107);
			this->btnAddBooking->Name = L"btnAddBooking";
			this->btnAddBooking->Size = System::Drawing::Size(177, 47);
			this->btnAddBooking->TabIndex = 24;
			this->btnAddBooking->Text = L"+ Add Booking";
			this->btnAddBooking->UseVisualStyleBackColor = true;
			this->btnAddBooking->Click += gcnew System::EventHandler(this, &frmBooking::btnAddBooking_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &frmBooking::timer1_Tick);
			// 
			// lblWarm
			// 
			this->lblWarm->AutoSize = true;
			this->lblWarm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblWarm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblWarm.Image")));
			this->lblWarm->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblWarm->Location = System::Drawing::Point(34, 120);
			this->lblWarm->Name = L"lblWarm";
			this->lblWarm->Size = System::Drawing::Size(125, 18);
			this->lblWarm->TabIndex = 25;
			this->lblWarm->Text = L"Feel the Comfort";
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pictureBox->Location = System::Drawing::Point(1201, 162);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(279, 371);
			this->pictureBox->TabIndex = 26;
			this->pictureBox->TabStop = false;
			// 
			// frmBooking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1492, 564);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->lblWarm);
			this->Controls->Add(this->btnAddBooking);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->cmbTicketPrice);
			this->Controls->Add(this->cmbCurrency);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->cmbPassangerName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePickerArrivalDate);
			this->Controls->Add(this->dateTimePickerDepatureDate);
			this->Controls->Add(this->cmbChildren);
			this->Controls->Add(this->cmbAdults);
			this->Controls->Add(this->cmbFlyingTo);
			this->Controls->Add(this->cmbFlyingFrom);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->menuStrip);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->MainMenuStrip = this->menuStrip;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmBooking";
			this->Text = L"Book your Flight";
			this->Load += gcnew System::EventHandler(this, &frmBooking::frmBooking_Load);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->statusStrip->ResumeLayout(false);
			this->statusStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void frmBooking_Load(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		
		dataGridView->Rows->Clear();
		dataGridView->Columns->Clear();
		dataGridView->AllowUserToAddRows = false;

	
		dataGridView->Columns->Add("FlightID", "Flight ID");
		dataGridView->Columns->Add("From", "From");
		dataGridView->Columns->Add("To", "To");
		dataGridView->Columns->Add("DepartureDate", "Departure Date");
		dataGridView->Columns->Add("ArrivalDate", "Arrival Date");
		dataGridView->Columns->Add("SeatsAvailable", "Seats Available");
		dataGridView->Columns->Add("Price", "Price");
		dataGridView->Columns->Add("ImagePath", "ImagePath");
		dataGridView->Columns["ImagePath"]->Visible = false;

		
		DataGridViewImageColumn^ imgCol = gcnew DataGridViewImageColumn();
		imgCol->HeaderText = "Logo";
		imgCol->ImageLayout = DataGridViewImageCellLayout::Zoom;
		dataGridView->Columns->Insert(0, imgCol);
 
		dataGridView->DefaultCellStyle->Font = gcnew System::Drawing::Font("Rockwell", 10, FontStyle::Regular);
		dataGridView->DefaultCellStyle->ForeColor = Color::Black;
		dataGridView->DefaultCellStyle->BackColor = Color::White;
		dataGridView->AlternatingRowsDefaultCellStyle->BackColor = Color::LightGray;
		dataGridView->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Rockwell", 11, FontStyle::Bold);
		dataGridView->ColumnHeadersDefaultCellStyle->BackColor = Color::Navy;
		dataGridView->ColumnHeadersDefaultCellStyle->ForeColor = Color::White;
		dataGridView->EnableHeadersVisualStyles = false;
		dataGridView->GridColor = Color::DarkBlue;

		
		DataTable^ flights = BookingDBHelper::GetFlights();

		int i = 1;

		for each (DataRow ^ r in flights->Rows)
		{
			int rowIndex = dataGridView->Rows->Add();
			DataGridViewRow^ row = dataGridView->Rows[rowIndex];

			row->Cells["FlightID"]->Value = r["FlightID"]->ToString();
			row->Cells["From"]->Value = r["Departure"]->ToString();
			row->Cells["To"]->Value = r["Destination"]->ToString();
			row->Cells["DepartureDate"]->Value = r["DepartureDate"]->ToString();
			row->Cells["ArrivalDate"]->Value = r["ArrivalDate"]->ToString();
			row->Cells["SeatsAvailable"]->Value = r["SeatsAvailable"]->ToString();
			row->Cells["Price"]->Value = r["Price"]->ToString();

			
			String^ imgPath = Application::StartupPath + "\\Images\\" + i.ToString() + ".jpg";

			if (File::Exists(imgPath))
			{
				row->Cells[0]->Value = Image::FromFile(imgPath);
				row->Cells["ImagePath"]->Value = imgPath;
			}

			i++;

			lblWarm->Text = "Flight selected: " +
				row->Cells["From"]->Value->ToString() +
				" → " +
				row->Cells["To"]->Value->ToString();
		}

		
		cmbPassangerName->Items->Clear();

		DataTable^ passengers = BookingDBHelper::GetPassengers();

		for each (DataRow ^ p in passengers->Rows)
		{
			cmbPassangerName->Items->Add(p["FullName"]->ToString());
		}

		toolStripStatusLabel1->Text = "Records: " + dataGridView->Rows->Count.ToString();
		toolStripStatusLabel2->Text = DateTime::Now.ToString("dd MMM yyyy HH:mm:ss");

		timer1->Start();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error loading data: " + ex->Message,
			"Database Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}


private: System::Void UpdateTotalPrice() 
{
	try 
	{
		int adultCount = (cmbAdults->SelectedIndex == -1) ? 0 : Convert::ToInt32(cmbAdults->Text);
		int childCount = (cmbChildren->SelectedIndex == -1) ? 0 : Convert::ToInt32(cmbChildren->Text);

		
		if (dataGridView->SelectedRows->Count > 0) 
		{
			double basePrice = Convert::ToDouble(dataGridView->SelectedRows[0]->Cells["Price"]->Value);

			double totalPrice = (adultCount + childCount) * basePrice;

			
			cmbTicketPrice->Items->Clear();
			cmbTicketPrice->Items->Add(totalPrice.ToString("F2"));
			cmbTicketPrice->SelectedIndex = 0;
		}
	}
	catch (Exception^ ex) 
	{
		MessageBox::Show("Error calculating total price: " + ex->Message,
			"Calculation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void cmbAdults_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateTotalPrice();
}

private: System::Void cmbChildren_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdateTotalPrice();
}


private: System::Void dataGridView_CellClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {

	if (e->RowIndex >= 0)
	{
		DataGridViewRow^ row = dataGridView->Rows[e->RowIndex];

		cmbFlyingFrom->Text = row->Cells["From"]->Value->ToString();
		cmbFlyingTo->Text = row->Cells["To"]->Value->ToString();
		dateTimePickerDepatureDate->Value = Convert::ToDateTime(row->Cells["DepartureDate"]->Value);
		dateTimePickerArrivalDate->Value = Convert::ToDateTime(row->Cells["ArrivalDate"]->Value);
		cmbCurrency->Text = "R";
		cmbTicketPrice->Text = row->Cells["Price"]->Value->ToString();

		
		if (row->Cells["ImagePath"]->Value != nullptr)
		{
			String^ path = row->Cells["ImagePath"]->Value->ToString();

			if (File::Exists(path))
			{
				pictureBox->Image = gcnew Bitmap(path);
				pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
			}
		}
	}

	UpdateTotalPrice();
}

	   String^ GenerateNextBookingId()
	   {
		   try
		   {
			   SqlConnection^ conn = gcnew SqlConnection(
				   "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True");

			   String^ query = "SELECT MAX(BookingID) FROM Booking";

			   SqlCommand^ cmd = gcnew SqlCommand(query, conn);

			   conn->Open();
			   Object^ result = cmd->ExecuteScalar();
			   conn->Close();

			   if (result == nullptr || result == DBNull::Value)
			   {
				   return "BK001";
			   }

			   String^ lastId = result->ToString();
			   int num = Convert::ToInt32(lastId->Substring(2));
			   num++;

			   return "BK" + num.ToString("D3");
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Error generating Booking ID: " + ex->Message,
				   "Database Error",
				   MessageBoxButtons::OK,
				   MessageBoxIcon::Error);

			   return "BK001";
		   }
	   }



private: System::Void btnAddBooking_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		btnAddBooking->Enabled = false;

		
		if (dataGridView->SelectedRows->Count == 0)
		{
			MessageBox::Show("Please select a flight first.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (cmbPassangerName->SelectedIndex == -1)
		{
			MessageBox::Show("Please select a passenger.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (String::IsNullOrWhiteSpace(cmbFlyingFrom->Text) ||
			String::IsNullOrWhiteSpace(cmbFlyingTo->Text))
		{
			MessageBox::Show("Flight route information is missing.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		DateTime depDate = dateTimePickerDepatureDate->Value;
		DateTime arrDate = dateTimePickerArrivalDate->Value;
		DateTime today = DateTime::Now.Date;

		if (depDate.Date < today)
		{
			MessageBox::Show("Departure date cannot be in the past.", "Error");
			return;
		}

		if (arrDate.Date < depDate.Date)
		{
			MessageBox::Show("Arrival date must be after departure date.", "Error");
			return;
		}

		DataGridViewRow^ row = dataGridView->SelectedRows[0];

		String^ flightID = row->Cells["FlightID"]->Value->ToString();
		int seatsAvailable = Convert::ToInt32(row->Cells["SeatsAvailable"]->Value);

		if (seatsAvailable <= 0)
		{
			MessageBox::Show("No seats available for this flight.", "Error");
			return;
		}

		
		String^ passengerName = cmbPassangerName->Text;
		int adultCount = Convert::ToInt32(cmbAdults->Text);
		int childCount = Convert::ToInt32(cmbChildren->Text);

		double basePrice = Convert::ToDouble(row->Cells["Price"]->Value);
		double totalPrice = (adultCount + childCount) * basePrice;

		
		if (BookingDBHelper::IsDuplicateBooking(passengerName, flightID))
		{
			MessageBox::Show("This passenger already has a booking for this flight.",
				"Duplicate Booking",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}

		String^ summary =
			"Please confirm your booking details:\n\n" +
			"Passenger: " + passengerName + "\n" +
			"Flight ID: " + flightID + "\n" +
			"From: " + cmbFlyingFrom->Text + "\n" +
			"To: " + cmbFlyingTo->Text + "\n" +
			"Departure: " + depDate.ToShortDateString() + "\n" +
			"Arrival: " + arrDate.ToShortDateString() + "\n" +
			"Adults: " + cmbAdults->Text + "\n" +
			"Children: " + cmbChildren->Text + "\n" +
			"Price: " + cmbCurrency->Text + totalPrice.ToString("F2") + "\n\n" +
			"Do you want to confirm this booking?";

		if (MessageBox::Show(summary, "Confirm Booking",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		{
			return;
		}

		String^ bookingID = BookingDBHelper::GenerateNextBookingId();

		BookingDBHelper::InsertBooking(
			bookingID,
			passengerName,
			flightID,
			cmbFlyingFrom->Text,
			cmbFlyingTo->Text,
			depDate,
			arrDate,
			adultCount,
			childCount,
			cmbCurrency->Text,
			totalPrice
		);

		int seatsToReduce = adultCount + childCount;
		bool updated = BookingDBHelper::ReduceSeats(flightID, seatsToReduce);

		if (!updated)
		{
			MessageBox::Show("Seat update failed.", "Error");
			return;
		}

		frmBooking_Load(sender, e);

		MessageBox::Show("Booking added successfully!", "Success",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	catch (Exception^ ex)
	{
		MessageBox::Show("Error adding booking: " + ex->Message,
			"Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	finally
	{
		btnAddBooking->Enabled = true;
	}
}



private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	toolStripStatusLabel2->Text = DateTime::Now.ToString("dd MMM yyyy HH:mm:ss");
}

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::DialogResult result =
		MessageBox::Show("Are you sure you want to exit?",
			"Confirm Exit",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) 
	{
		this->Close();
	}
}

private: System::Void welcomeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Welcome to the Flight Reservation System!",
		"Welcome",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}

private: System::Void bookAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("You are already on the Booking form,\n Book your ticket here.");
}

private: System::Void aboutUsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show(
		"Vital Tech Alliances\n\n" +
		"Project: Flight Reservation System\n\n" +
		"Developed by:\n" +
		" - SI Sangweni (Lead Developer)\n" +
		" - N Ngwenya (UI/UX Designer & System Integration)\n" +
		" - NA Thango (Database & Backend)\n" +
		" - TS Mafu (Documentation & Testing)\n\n" +
		"Institution: Tshwane University of Technology (TUT)\n" +
		"Course: Computer Systems Engineering\n" +
		"Module: PGM216D 2026\n" +
		"This system enables passengers to book flights, manage reservations, and provides administrators with tools to oversee flights and passenger records.\n" +
		"Our mission at Vital Tech Alliances is to deliver a professional, user-friendly, and scalable reservation platform.",
		"About Us",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information
	);
}



private: System::Void howToBookFlightToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Step 1: Select a flight from the grid.\n" +
		"Step 2: Choose passenger name.\n" +
		"Step 3: Confirm dates and ticket price.\n" +
		"Step 4: Click '+ Add Booking'.",
		"How to Book Flight", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void bookingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("You are already on the Booking form.");
}


private: System::Void cmbPassangerName_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	if (cmbPassangerName->SelectedIndex != -1)
	{
		String^ passengerName = cmbPassangerName->SelectedItem->ToString();

		lblWarm->Text = "Dear " + passengerName +
			", your journey starts here. Safe travels!";
	}
}

};
}
