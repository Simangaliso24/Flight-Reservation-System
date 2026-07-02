#pragma once
#include "frmFlightDetails.h"
#include "frmPassengerDetails.h"
#include "AdminDBHelper.h"
#include "BookingDBHelper.h"

namespace FlightReservationSystem {

    using namespace System;
    using namespace System::IO;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;

    /// <summary>
    /// Summary for frmAdmin
    /// </summary>
    public ref class frmAdmin : public System::Windows::Forms::Form
    {
    public:
        frmAdmin(void)
        {
            InitializeComponent();


            LoadFlights();
            LoadPassengers();
            LoadBookings();
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
        ~frmAdmin()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::DataGridView^ dgvFlights;
    private: System::Windows::Forms::DataGridView^ dgvPassengers;
    private: System::Windows::Forms::DataGridView^ dgvBookings;

    private: System::Windows::Forms::Button^ btnAddFlight;
    private: System::Windows::Forms::Button^ btnEditFlight;
    private: System::Windows::Forms::Button^ btnDeleteFlight;

    private: System::Windows::Forms::Button^ btnEditPassenger;
    private: System::Windows::Forms::Button^ btnDeletePassenger;

    private: System::Windows::Forms::Button^ btnCancelBooking;
    private: System::Windows::Forms::Button^ btnViewBooking;

    private: System::Windows::Forms::Button^ btnGenerateReport;
    private: System::Windows::Forms::Button^ btnAddPassenger;
    private: System::Windows::Forms::StatusStrip^ statusStrip1;
    private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
    private: System::Windows::Forms::Button^ btnClose;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::GroupBox^ groupBox3;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
            /// <summary>
            /// Required method for Designer support - do not modify
            /// the contents of this method with the code editor.
            /// </summary>
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAdmin::typeid));
               this->dgvFlights = (gcnew System::Windows::Forms::DataGridView());
               this->dgvPassengers = (gcnew System::Windows::Forms::DataGridView());
               this->dgvBookings = (gcnew System::Windows::Forms::DataGridView());
               this->btnAddFlight = (gcnew System::Windows::Forms::Button());
               this->btnEditFlight = (gcnew System::Windows::Forms::Button());
               this->btnDeleteFlight = (gcnew System::Windows::Forms::Button());
               this->btnEditPassenger = (gcnew System::Windows::Forms::Button());
               this->btnDeletePassenger = (gcnew System::Windows::Forms::Button());
               this->btnCancelBooking = (gcnew System::Windows::Forms::Button());
               this->btnViewBooking = (gcnew System::Windows::Forms::Button());
               this->btnGenerateReport = (gcnew System::Windows::Forms::Button());
               this->btnAddPassenger = (gcnew System::Windows::Forms::Button());
               this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
               this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
               this->btnClose = (gcnew System::Windows::Forms::Button());
               this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
               this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
               this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFlights))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPassengers))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBookings))->BeginInit();
               this->statusStrip1->SuspendLayout();
               this->groupBox1->SuspendLayout();
               this->groupBox2->SuspendLayout();
               this->groupBox3->SuspendLayout();
               this->SuspendLayout();
               // 
               // dgvFlights
               // 
               this->dgvFlights->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
               this->dgvFlights->ColumnHeadersHeight = 29;
               this->dgvFlights->Location = System::Drawing::Point(6, 23);
               this->dgvFlights->Name = L"dgvFlights";
               this->dgvFlights->RowHeadersWidth = 51;
               this->dgvFlights->Size = System::Drawing::Size(762, 222);
               this->dgvFlights->TabIndex = 0;
               // 
               // dgvPassengers
               // 
               this->dgvPassengers->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
               this->dgvPassengers->ColumnHeadersHeight = 29;
               this->dgvPassengers->Location = System::Drawing::Point(6, 23);
               this->dgvPassengers->Name = L"dgvPassengers";
               this->dgvPassengers->RowHeadersWidth = 51;
               this->dgvPassengers->Size = System::Drawing::Size(682, 222);
               this->dgvPassengers->TabIndex = 4;
               // 
               // dgvBookings
               // 
               this->dgvBookings->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                   static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->dgvBookings->ColumnHeadersHeight = 29;
               this->dgvBookings->Location = System::Drawing::Point(6, 26);
               this->dgvBookings->Name = L"dgvBookings";
               this->dgvBookings->RowHeadersWidth = 51;
               this->dgvBookings->Size = System::Drawing::Size(1195, 242);
               this->dgvBookings->TabIndex = 7;
               // 
               // btnAddFlight
               // 
               this->btnAddFlight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnAddFlight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddFlight.Image")));
               this->btnAddFlight->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
               this->btnAddFlight->Location = System::Drawing::Point(63, 251);
               this->btnAddFlight->Name = L"btnAddFlight";
               this->btnAddFlight->Size = System::Drawing::Size(140, 40);
               this->btnAddFlight->TabIndex = 1;
               this->btnAddFlight->Text = L"Add Flight";
               this->btnAddFlight->Click += gcnew System::EventHandler(this, &frmAdmin::btnAddFlight_Click);
               // 
               // btnEditFlight
               // 
               this->btnEditFlight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnEditFlight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditFlight.Image")));
               this->btnEditFlight->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
               this->btnEditFlight->Location = System::Drawing::Point(289, 251);
               this->btnEditFlight->Name = L"btnEditFlight";
               this->btnEditFlight->Size = System::Drawing::Size(142, 40);
               this->btnEditFlight->TabIndex = 2;
               this->btnEditFlight->Text = L"Edit Flight";
               this->btnEditFlight->Click += gcnew System::EventHandler(this, &frmAdmin::btnEditFlight_Click);
               // 
               // btnDeleteFlight
               // 
               this->btnDeleteFlight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnDeleteFlight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteFlight.Image")));
               this->btnDeleteFlight->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
               this->btnDeleteFlight->Location = System::Drawing::Point(532, 251);
               this->btnDeleteFlight->Name = L"btnDeleteFlight";
               this->btnDeleteFlight->Size = System::Drawing::Size(158, 40);
               this->btnDeleteFlight->TabIndex = 3;
               this->btnDeleteFlight->Text = L"Delete Flight";
               this->btnDeleteFlight->Click += gcnew System::EventHandler(this, &frmAdmin::btnDeleteFlight_Click);
               // 
               // btnEditPassenger
               // 
               this->btnEditPassenger->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnEditPassenger->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditPassenger.Image")));
               this->btnEditPassenger->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
               this->btnEditPassenger->Location = System::Drawing::Point(262, 251);
               this->btnEditPassenger->Name = L"btnEditPassenger";
               this->btnEditPassenger->Size = System::Drawing::Size(159, 40);
               this->btnEditPassenger->TabIndex = 5;
               this->btnEditPassenger->Text = L"Edit Passenger";
               this->btnEditPassenger->Click += gcnew System::EventHandler(this, &frmAdmin::btnEditPassenger_Click);
               // 
               // btnDeletePassenger
               // 
               this->btnDeletePassenger->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnDeletePassenger->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeletePassenger.Image")));
               this->btnDeletePassenger->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
               this->btnDeletePassenger->Location = System::Drawing::Point(478, 251);
               this->btnDeletePassenger->Name = L"btnDeletePassenger";
               this->btnDeletePassenger->Size = System::Drawing::Size(179, 40);
               this->btnDeletePassenger->TabIndex = 6;
               this->btnDeletePassenger->Text = L"Delete Passenger";
               this->btnDeletePassenger->Click += gcnew System::EventHandler(this, &frmAdmin::btnDeletePassenger_Click);
               // 
               // btnCancelBooking
               // 
               this->btnCancelBooking->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnCancelBooking->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelBooking.Image")));
               this->btnCancelBooking->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
               this->btnCancelBooking->Location = System::Drawing::Point(1207, 77);
               this->btnCancelBooking->Name = L"btnCancelBooking";
               this->btnCancelBooking->Size = System::Drawing::Size(187, 49);
               this->btnCancelBooking->TabIndex = 8;
               this->btnCancelBooking->Text = L"Cancel Booking";
               this->btnCancelBooking->Click += gcnew System::EventHandler(this, &frmAdmin::btnCancelBooking_Click);
               // 
               // btnViewBooking
               // 
               this->btnViewBooking->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnViewBooking->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewBooking.Image")));
               this->btnViewBooking->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
               this->btnViewBooking->Location = System::Drawing::Point(1207, 26);
               this->btnViewBooking->Name = L"btnViewBooking";
               this->btnViewBooking->Size = System::Drawing::Size(187, 45);
               this->btnViewBooking->TabIndex = 9;
               this->btnViewBooking->Text = L"View Booking";
               this->btnViewBooking->Click += gcnew System::EventHandler(this, &frmAdmin::btnViewBooking_Click);
               // 
               // btnGenerateReport
               // 
               this->btnGenerateReport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnGenerateReport->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGenerateReport.Image")));
               this->btnGenerateReport->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
               this->btnGenerateReport->Location = System::Drawing::Point(1207, 144);
               this->btnGenerateReport->Name = L"btnGenerateReport";
               this->btnGenerateReport->Size = System::Drawing::Size(187, 49);
               this->btnGenerateReport->TabIndex = 10;
               this->btnGenerateReport->Text = L"Generate Report";
               this->btnGenerateReport->Click += gcnew System::EventHandler(this, &frmAdmin::btnGenerateReport_Click);
               // 
               // btnAddPassenger
               // 
               this->btnAddPassenger->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnAddPassenger->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddPassenger.Image")));
               this->btnAddPassenger->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
               this->btnAddPassenger->Location = System::Drawing::Point(33, 251);
               this->btnAddPassenger->Name = L"btnAddPassenger";
               this->btnAddPassenger->Size = System::Drawing::Size(165, 40);
               this->btnAddPassenger->TabIndex = 11;
               this->btnAddPassenger->Text = L"Add Passenger";
               this->btnAddPassenger->UseVisualStyleBackColor = true;
               this->btnAddPassenger->Click += gcnew System::EventHandler(this, &frmAdmin::btnAddPassenger_Click);
               // 
               // statusStrip1
               // 
               this->statusStrip1->BackColor = System::Drawing::Color::Silver;
               this->statusStrip1->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
               this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
               this->statusStrip1->Location = System::Drawing::Point(0, 618);
               this->statusStrip1->Name = L"statusStrip1";
               this->statusStrip1->Size = System::Drawing::Size(1531, 26);
               this->statusStrip1->TabIndex = 12;
               this->statusStrip1->Text = L"statusStrip1";
               // 
               // toolStripStatusLabel1
               // 
               this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;
               this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
               this->toolStripStatusLabel1->Size = System::Drawing::Size(152, 20);
               this->toolStripStatusLabel1->Text = L"Records Counter";
               // 
               // btnClose
               // 
               this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->btnClose->ForeColor = System::Drawing::Color::Red;
               this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
               this->btnClose->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
               this->btnClose->Location = System::Drawing::Point(1207, 199);
               this->btnClose->Name = L"btnClose";
               this->btnClose->Size = System::Drawing::Size(187, 47);
               this->btnClose->TabIndex = 13;
               this->btnClose->Text = L"Close";
               this->btnClose->UseVisualStyleBackColor = true;
               this->btnClose->Click += gcnew System::EventHandler(this, &frmAdmin::btnClose_Click);
               // 
               // groupBox1
               // 
               this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
               this->groupBox1->Controls->Add(this->btnClose);
               this->groupBox1->Controls->Add(this->btnGenerateReport);
               this->groupBox1->Controls->Add(this->btnCancelBooking);
               this->groupBox1->Controls->Add(this->btnViewBooking);
               this->groupBox1->Controls->Add(this->dgvBookings);
               this->groupBox1->ForeColor = System::Drawing::Color::White;
               this->groupBox1->Location = System::Drawing::Point(6, 327);
               this->groupBox1->Name = L"groupBox1";
               this->groupBox1->Size = System::Drawing::Size(1403, 274);
               this->groupBox1->TabIndex = 14;
               this->groupBox1->TabStop = false;
               this->groupBox1->Text = L"Manage Bookings";
               // 
               // groupBox2
               // 
               this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox2.BackgroundImage")));
               this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->groupBox2->Controls->Add(this->dgvFlights);
               this->groupBox2->Controls->Add(this->btnAddFlight);
               this->groupBox2->Controls->Add(this->btnEditFlight);
               this->groupBox2->Controls->Add(this->btnDeleteFlight);
               this->groupBox2->ForeColor = System::Drawing::Color::White;
               this->groupBox2->Location = System::Drawing::Point(6, 3);
               this->groupBox2->Name = L"groupBox2";
               this->groupBox2->Size = System::Drawing::Size(784, 301);
               this->groupBox2->TabIndex = 0;
               this->groupBox2->TabStop = false;
               this->groupBox2->Text = L"Manage Flights";
               // 
               // groupBox3
               // 
               this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox3.BackgroundImage")));
               this->groupBox3->Controls->Add(this->dgvPassengers);
               this->groupBox3->Controls->Add(this->btnDeletePassenger);
               this->groupBox3->Controls->Add(this->btnEditPassenger);
               this->groupBox3->Controls->Add(this->btnAddPassenger);
               this->groupBox3->ForeColor = System::Drawing::Color::White;
               this->groupBox3->Location = System::Drawing::Point(814, 3);
               this->groupBox3->Name = L"groupBox3";
               this->groupBox3->Size = System::Drawing::Size(707, 301);
               this->groupBox3->TabIndex = 0;
               this->groupBox3->TabStop = false;
               this->groupBox3->Text = L"Manage Passengers";
               // 
               // frmAdmin
               // 
               this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
               this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->ClientSize = System::Drawing::Size(1531, 644);
               this->Controls->Add(this->groupBox3);
               this->Controls->Add(this->groupBox2);
               this->Controls->Add(this->groupBox1);
               this->Controls->Add(this->statusStrip1);
               this->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->ForeColor = System::Drawing::Color::White;
               this->Name = L"frmAdmin";
               this->Text = L"Admin Control Panel";
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFlights))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPassengers))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBookings))->EndInit();
               this->statusStrip1->ResumeLayout(false);
               this->statusStrip1->PerformLayout();
               this->groupBox1->ResumeLayout(false);
               this->groupBox2->ResumeLayout(false);
               this->groupBox3->ResumeLayout(false);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

private: System::Void StyleGrid(DataGridView^ grid) 
{
      grid->DefaultCellStyle->Font = gcnew System::Drawing::Font("Rockwell", 10, FontStyle::Regular);
      grid->DefaultCellStyle->ForeColor = Color::Black;
      grid->DefaultCellStyle->BackColor = Color::White;
      grid->AlternatingRowsDefaultCellStyle->BackColor = Color::LightGray;

      grid->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Rockwell", 11, FontStyle::Bold);
      grid->ColumnHeadersDefaultCellStyle->BackColor = Color::Navy;
      grid->ColumnHeadersDefaultCellStyle->ForeColor = Color::White;

      grid->EnableHeadersVisualStyles = false;
      grid->GridColor = Color::DarkBlue;
}

private: System::Void UpdateStatus()
{

    int flights = dgvFlights->Rows->Count;
    int passengers = dgvPassengers->Rows->Count;
    int bookings = dgvBookings->Rows->Count;

    toolStripStatusLabel1->Text =
        "Flights: " + flights +
        " | Passengers: " + passengers +
        " | Bookings: " + bookings;
}

private: System::Void LoadPassengers()
{
    try
    {
        //Reset grid 
        dgvPassengers->Rows->Clear();
        dgvPassengers->Columns->Clear();
        dgvPassengers->AllowUserToAddRows = false;

        //Columns 
        dgvPassengers->Columns->Add("PassengerID", "ID");
        dgvPassengers->Columns->Add("FullName", "Full Name");
        dgvPassengers->Columns->Add("Contact", "Contact");
        dgvPassengers->Columns->Add("Email", "Email");

        SqlConnection^ conn = gcnew SqlConnection(
            "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True"
        );

        String^ query = "SELECT PassengerID, FullName, Contact, Email FROM Passenger";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);
        conn->Open();

        SqlDataReader^ reader = cmd->ExecuteReader();

        while (reader->Read())
        {
            dgvPassengers->Rows->Add(
                reader["PassengerID"]->ToString(),
                reader["FullName"]->ToString(),
                reader["Contact"]->ToString(),
                reader["Email"]->ToString()
            );
        }

        reader->Close();
        conn->Close();

        StyleGrid(dgvPassengers);
        UpdateStatus();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error loading passengers: " + ex->Message,
            "Database Error",
            MessageBoxButtons::OK,
            MessageBoxIcon::Error);
    }
}



private: System::Void LoadFlights()
{
    try
    {
        dgvFlights->Rows->Clear();
        dgvFlights->Columns->Clear();
        dgvFlights->AllowUserToAddRows = false;

        dgvFlights->Columns->Add("FlightID", "Flight ID");
        dgvFlights->Columns->Add("Departure", "Departure");
        dgvFlights->Columns->Add("Destination", "Destination");
        dgvFlights->Columns->Add("DepartureDate", "Departure Date");
        dgvFlights->Columns->Add("ArrivalDate", "Arrival Date");
        dgvFlights->Columns->Add("SeatsAvailable", "Seats Available");
        dgvFlights->Columns->Add("Price", "Price");

        SqlConnection^ conn = gcnew SqlConnection(
            "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True"
        );

        String^ query =
            "SELECT FlightID, Departure, Destination, DepartureDate, ArrivalDate, SeatsAvailable, Price FROM Flight";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);
        conn->Open();

        SqlDataReader^ reader = cmd->ExecuteReader();

        while (reader->Read())
        {
            dgvFlights->Rows->Add(
                reader["FlightID"]->ToString(),
                reader["Departure"]->ToString(),
                reader["Destination"]->ToString(),
                Convert::ToDateTime(reader["DepartureDate"]).ToString("yyyy-MM-dd"),
                Convert::ToDateTime(reader["ArrivalDate"]).ToString("yyyy-MM-dd"),
                reader["SeatsAvailable"]->ToString(),
                reader["Price"]->ToString()
            );
        }

        reader->Close();
        conn->Close();

        StyleGrid(dgvFlights);
        UpdateStatus();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error loading flights: " + ex->Message,
            "Database Error",
            MessageBoxButtons::OK,
            MessageBoxIcon::Error);
    }
}



private: System::Void LoadBookings()
{
    try
    {
        dgvBookings->Rows->Clear();
        dgvBookings->Columns->Clear();
        dgvBookings->AllowUserToAddRows = false;

        dgvBookings->Columns->Add("BookingID", "Booking ID");
        dgvBookings->Columns->Add("PassengerName", "Passenger");
        dgvBookings->Columns->Add("FlightID", "Flight ID");
        dgvBookings->Columns->Add("Departure", "Departure");
        dgvBookings->Columns->Add("Destination", "Destination");
        dgvBookings->Columns->Add("DepartureDate", "Departure Date");
        dgvBookings->Columns->Add("ArrivalDate", "Arrival Date");
        dgvBookings->Columns->Add("Adults", "Adults");
        dgvBookings->Columns->Add("Children", "Children");
        dgvBookings->Columns->Add("Currency", "Currency");
        dgvBookings->Columns->Add("Price", "Price");

        SqlConnection^ conn = gcnew SqlConnection(
            "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True"
        );

        String^ query =
            "SELECT b.BookingID, p.FullName, b.FlightID, "
            "f.Departure, f.Destination, f.DepartureDate, f.ArrivalDate, "
            "b.Adults, b.Children, b.Currency, b.Price "
            "FROM Booking b "
            "INNER JOIN Passenger p ON b.PassengerID = p.PassengerID "
            "INNER JOIN Flight f ON b.FlightID = f.FlightID";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);
        conn->Open();

        SqlDataReader^ reader = cmd->ExecuteReader();

        while (reader->Read())
        {
            dgvBookings->Rows->Add(
                reader["BookingID"]->ToString(),
                reader["FullName"]->ToString(),
                reader["FlightID"]->ToString(),
                reader["Departure"]->ToString(),
                reader["Destination"]->ToString(),
                Convert::ToDateTime(reader["DepartureDate"]).ToString("yyyy-MM-dd"),
                Convert::ToDateTime(reader["ArrivalDate"]).ToString("yyyy-MM-dd"),
                reader["Adults"]->ToString(),
                reader["Children"]->ToString(),
                reader["Currency"]->ToString(),
                reader["Price"]->ToString()
            );
        }

        reader->Close();
        conn->Close();

      
        StyleGrid(dgvBookings);
        UpdateStatus();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error loading bookings: " + ex->Message,
            "Database Error",
            MessageBoxButtons::OK,
            MessageBoxIcon::Error);
    }
}

private: int GetSeats(array<String^>^ flightLine)
{
   return Convert::ToInt32(flightLine[5]);
}


private: void UpdateSeats(String^ flightID, int change)
{
    SqlConnection^ conn = gcnew SqlConnection(
        "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True"
    );

    try
    {
        conn->Open();

        String^ selectQuery = "SELECT SeatsAvailable FROM Flight WHERE FlightID=@id";
        SqlCommand^ selectCmd = gcnew SqlCommand(selectQuery, conn);
        selectCmd->Parameters->AddWithValue("@id", flightID);

        Object^ result = selectCmd->ExecuteScalar();

        if (result == nullptr)
        {
            throw gcnew Exception("Flight not found.");
        }

        int seats = Convert::ToInt32(result);

        seats += change;

        if (seats < 0)
        {
            throw gcnew Exception("Not enough seats available.");
        }

        String^ updateQuery =
            "UPDATE Flight SET SeatsAvailable=@seats WHERE FlightID=@id";

        SqlCommand^ updateCmd = gcnew SqlCommand(updateQuery, conn);
        updateCmd->Parameters->AddWithValue("@seats", seats);
        updateCmd->Parameters->AddWithValue("@id", flightID);

        updateCmd->ExecuteNonQuery();
    }
    catch (Exception^ ex)
    {
        throw gcnew Exception("Seat update failed: " + ex->Message);
    }
    finally
    {
        conn->Close();
    }
}

private: System::Void btnCancelBooking_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dgvBookings->SelectedRows->Count == 0)
    {
        MessageBox::Show("Select a booking to cancel.", "Error",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    DataGridViewRow^ row = dgvBookings->SelectedRows[0];

    String^ bookingID = row->Cells["BookingID"]->Value->ToString();
    String^ flightID = row->Cells["FlightID"]->Value->ToString();

    int adults = Convert::ToInt32(row->Cells["Adults"]->Value);
    int children = Convert::ToInt32(row->Cells["Children"]->Value);

    int seatsToRestore = adults + children;

    SqlConnection^ conn = gcnew SqlConnection(
        "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True"
    );

    try
    {
        conn->Open();

        String^ deleteQuery = "DELETE FROM Booking WHERE BookingID=@id";
        SqlCommand^ deleteCmd = gcnew SqlCommand(deleteQuery, conn);
        deleteCmd->Parameters->AddWithValue("@id", bookingID);
        deleteCmd->ExecuteNonQuery();

        String^ updateSeatsQuery =
            "UPDATE Flight SET SeatsAvailable = SeatsAvailable + @seats "
            "WHERE FlightID = @flightID";

        SqlCommand^ updateCmd = gcnew SqlCommand(updateSeatsQuery, conn);
        updateCmd->Parameters->AddWithValue("@seats", seatsToRestore);
        updateCmd->Parameters->AddWithValue("@flightID", flightID);

        updateCmd->ExecuteNonQuery();

        conn->Close();

        LoadBookings();

        MessageBox::Show("Booking cancelled and seats restored successfully!",
            "Success",
            MessageBoxButtons::OK,
            MessageBoxIcon::Information);
    }
    catch (Exception^ ex)
    {
        conn->Close();

        MessageBox::Show("Error cancelling booking: " + ex->Message,
            "Database Error",
            MessageBoxButtons::OK,
            MessageBoxIcon::Error);
    }
}


private: System::Void btnViewBooking_Click(System::Object^ sender, System::EventArgs^ e) 
{
    if (dgvBookings->SelectedRows->Count == 0) 
    {
        MessageBox::Show("Select a booking to view.", "Info",
            MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }

    DataGridViewRow^ row = dgvBookings->SelectedRows[0];
    String^ summary = "Booking ID: " + row->Cells["BookingID"]->Value->ToString() +
        "\nPassenger: " + row->Cells["PassengerName"]->Value->ToString() +
        "\nFlight: " + row->Cells["FlightID"]->Value->ToString() +
        "\nFrom: " + row->Cells["Departure"]->Value->ToString() +
        "\nTo: " + row->Cells["Destination"]->Value->ToString() +
        "\nDeparture: " + row->Cells["DepartureDate"]->Value->ToString() +
        "\nArrival: " + row->Cells["ArrivalDate"]->Value->ToString() +
        "\nAdults: " + row->Cells["Adults"]->Value->ToString() +
        "\nChildren: " + row->Cells["Children"]->Value->ToString() +
        "\nPrice: " + row->Cells["Price"]->Value->ToString();

    MessageBox::Show(summary, "Booking Details", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
       String^ GenerateNextFlightId()
       {
           try
           {
               return AdminDBHelper::GenerateNextFlightId();
           }
           catch (Exception^)
           {
               return "FL001";
           }
       }

private: System::Void btnGenerateReport_Click(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        DataTable^ dt = AdminDBHelper::GetBookings();

        if (dt == nullptr || dt->Rows->Count == 0)
        {
            MessageBox::Show("No bookings found.", "Report",
                MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        int totalBookings = dt->Rows->Count;
        double totalRevenue = 0.0;

        for each (DataRow ^ row in dt->Rows)
        {
            totalRevenue += Convert::ToDouble(row["Price"]);
        }

        double avgPrice = (totalBookings > 0)
            ? totalRevenue / totalBookings
            : 0.0;

        String^ report =
            "=== Booking Report ===\n" +
            "Total Bookings: " + totalBookings + "\n" +
            "Total Revenue: R" + totalRevenue.ToString("F2") + "\n" +
            "Average Ticket Price: R" + avgPrice.ToString("F2");

        MessageBox::Show(report, "Report Summary",
            MessageBoxButtons::OK, MessageBoxIcon::Information);

        System::IO::File::WriteAllText("report.txt", report);
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error generating report: " + ex->Message,
            "Error",
            MessageBoxButtons::OK,
            MessageBoxIcon::Error);
    }
}


private: System::Void btnAddFlight_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ newFlightId = GenerateNextFlightId();

    frmFlightDetails^ flightForm = gcnew frmFlightDetails(
        newFlightId, "", "", DateTime::Now, DateTime::Now, "0", "0"
    );

    if (flightForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        String^ flightID = flightForm->FlightID;
        String^ from = flightForm->From;
        String^ to = flightForm->To;
        String^ seats = flightForm->Seats;
        String^ price = flightForm->Price;

        // VALIDATION 
        if (!System::Text::RegularExpressions::Regex::IsMatch(from, "^[A-Za-z ]+$") ||
            !System::Text::RegularExpressions::Regex::IsMatch(to, "^[A-Za-z ]+$"))
        {
            MessageBox::Show("From/To must contain letters only.");
            return;
        }

        if (!System::Text::RegularExpressions::Regex::IsMatch(seats, "^[0-9]+$") ||
            Convert::ToInt32(seats) <= 0)
        {
            MessageBox::Show("Seats must be positive.");
            return;
        }

        if (!System::Text::RegularExpressions::Regex::IsMatch(price, "^[0-9]+(\\.[0-9]{1,2})?$"))
        {
            MessageBox::Show("Invalid price format.");
            return;
        }

        try
        {
            if (AdminDBHelper::FlightExists(
                flightID,
                from,
                to,
                flightForm->DepartureDate,
                flightForm->ArrivalDate))
            {
                MessageBox::Show("Duplicate flight found.");
                return;
            }

            AdminDBHelper::AddFlight(
                flightID,
                from,
                to,
                flightForm->DepartureDate,
                flightForm->ArrivalDate,
                Convert::ToInt32(seats),
                Convert::ToDouble(price)
            );

            LoadFlights();

            MessageBox::Show("Flight added successfully!");
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Error: " + ex->Message);
        }
    }
}


private: System::Void btnEditFlight_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dgvFlights->SelectedRows->Count == 0)
    {
        MessageBox::Show("Select a flight to edit.");
        return;
    }

    DataGridViewRow^ row = dgvFlights->SelectedRows[0];

    frmFlightDetails^ flightForm = gcnew frmFlightDetails(
        row->Cells["FlightID"]->Value->ToString(),
        row->Cells["Departure"]->Value->ToString(),
        row->Cells["Destination"]->Value->ToString(),
        Convert::ToDateTime(row->Cells["DepartureDate"]->Value),
        Convert::ToDateTime(row->Cells["ArrivalDate"]->Value),
        row->Cells["SeatsAvailable"]->Value->ToString(),
        row->Cells["Price"]->Value->ToString()
    );

    if (flightForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        String^ flightID = row->Cells["FlightID"]->Value->ToString();

        String^ from = flightForm->From->Trim();
        String^ to = flightForm->To->Trim();
        String^ seats = flightForm->Seats->Trim();
        String^ price = flightForm->Price->Trim();


        if (!System::Text::RegularExpressions::Regex::IsMatch(from, "^[A-Za-z ]+$") ||
            !System::Text::RegularExpressions::Regex::IsMatch(to, "^[A-Za-z ]+$"))
        {
            MessageBox::Show("From/To must contain letters only.");
            return;
        }

        if (!System::Text::RegularExpressions::Regex::IsMatch(seats, "^[0-9]+$") ||
            Convert::ToInt32(seats) <= 0)
        {
            MessageBox::Show("Invalid seats.");
            return;
        }

        double priceValue;

        if (!Double::TryParse(price, priceValue) || priceValue <= 0)
        {
            MessageBox::Show("Invalid price.");
            return;
        }

        int seatsValue;

        if (!Int32::TryParse(seats, seatsValue) || seatsValue <= 0)
        {
            MessageBox::Show("Invalid seats.");
            return;
        }

        try
        {
            AdminDBHelper::UpdateFlight(
                flightID,
                from,
                to,
                flightForm->DepartureDate,
                flightForm->ArrivalDate,
                Convert::ToInt32(seats),
                Convert::ToDouble(price)
            );

            LoadFlights();

            MessageBox::Show("Flight updated successfully!");
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Error: " + ex->Message);
        }
    }
}

private: System::Void btnDeleteFlight_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dgvFlights->SelectedRows->Count == 0)
    {
        MessageBox::Show("Select a flight to delete.");
        return;
    }

    DataGridViewRow^ row = dgvFlights->SelectedRows[0];
    String^ flightID = row->Cells["FlightID"]->Value->ToString();

    try
    {
        AdminDBHelper::DeleteFlight(flightID);

        LoadFlights();

        MessageBox::Show("Flight deleted successfully!");
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error: " + ex->Message);
    }
}

private: System::Void btnEditPassenger_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dgvPassengers->SelectedRows->Count == 0)
    {
        MessageBox::Show("Select a passenger to edit.");
        return;
    }

    DataGridViewRow^ row = dgvPassengers->SelectedRows[0];

    frmPassengerDetails^ form = gcnew frmPassengerDetails(
        row->Cells["ID"]->Value->ToString(),
        row->Cells["FullName"]->Value->ToString(),
        row->Cells["Contact"]->Value->ToString(),
        row->Cells["Email"]->Value->ToString()
    );

}


private: System::Void btnDeletePassenger_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (dgvPassengers->SelectedRows->Count == 0)
    {
        MessageBox::Show("Select a passenger to delete.", "Error",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    DataGridViewRow^ row = dgvPassengers->SelectedRows[0];
    String^ passengerID = row->Cells["PassengerID"]->Value->ToString();

    if (String::IsNullOrWhiteSpace(passengerID))
    {
        MessageBox::Show("Invalid passenger selected.");
        return;
    }

    try
    {
        AdminDBHelper::DeletePassenger(passengerID);

        LoadPassengers();

        MessageBox::Show("Passenger deleted successfully!", "Success",
            MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error deleting passenger: " + ex->Message,
            "Database Error",
            MessageBoxButtons::OK,
            MessageBoxIcon::Error);
    }
}



private: System::Void btnAddPassenger_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ newID = "";

    frmPassengerDetails^ form = gcnew frmPassengerDetails(
        newID,
        "",
        "",
        ""
    );
}

private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) 
{
    this->Close();
}
};
}
