#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

public ref class BookingDBHelper
{
private:
    static String^ connString =
        "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True";

public:

    // LOAD FLIGHTS 
    static DataTable^ GetFlights()
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(
            "SELECT FlightID, Departure, Destination, DepartureDate, ArrivalDate, SeatsAvailable, Price FROM Flight",
            conn);

        DataTable^ dt = gcnew DataTable();
        adapter->Fill(dt);
        return dt;
    }

    // LOAD PASSENGERS
    static DataTable^ GetPassengers()
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(
            "SELECT PassengerID, FullName FROM Passenger",
            conn);

        DataTable^ dt = gcnew DataTable();
        adapter->Fill(dt);
        return dt;
    }

    static bool IsDuplicateBooking(String^ passengerName, String^ flightID)
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

        String^ query =
            "SELECT COUNT(*) FROM Booking "
            "WHERE PassengerID = (SELECT PassengerID FROM Passenger WHERE FullName=@Name) "
            "AND FlightID=@FlightID";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);
        cmd->Parameters->AddWithValue("@Name", passengerName);
        cmd->Parameters->AddWithValue("@FlightID", flightID);

        conn->Open();
        int count = Convert::ToInt32(cmd->ExecuteScalar());
        conn->Close();

        return (count > 0);
    }

    static String^ GenerateNextBookingId()
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

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

        int number = Convert::ToInt32(lastId->Substring(2));
        number++;

        return "BK" + number.ToString("D3");
    }

    static void InsertBooking(String^ bookingID,
        String^ passengerName,
        String^ flightID,
        String^ from,
        String^ to,
        DateTime depDate,
        DateTime arrDate,
        int adults,
        int children,
        String^ currency,
        double price)
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

        String^ query =
            "INSERT INTO Booking "
            "(BookingID, PassengerID, FlightID, Adults, Children, Currency, Price, BookingDate) "
            "VALUES "
            "(@BookingID, "
            "(SELECT PassengerID FROM Passenger WHERE FullName=@Name), "
            "@FlightID, @Adults, @Children, @Currency, @Price, @BookingDate)";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@BookingID", bookingID);
        cmd->Parameters->AddWithValue("@Name", passengerName);
        cmd->Parameters->AddWithValue("@FlightID", flightID);
        cmd->Parameters->AddWithValue("@From", from);
        cmd->Parameters->AddWithValue("@To", to);
        cmd->Parameters->AddWithValue("@Dep", depDate);
        cmd->Parameters->AddWithValue("@Arr", arrDate);
        cmd->Parameters->AddWithValue("@Adults", adults);
        cmd->Parameters->AddWithValue("@Children", children);
        cmd->Parameters->AddWithValue("@Currency", currency);
        cmd->Parameters->AddWithValue("@Price", price);
        cmd->Parameters->AddWithValue("@BookingDate", DateTime::Now);

        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();
    }

    static bool ReduceSeats(String^ flightID, int seatsToReduce)
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

        String^ query =
            "UPDATE Flight "
            "SET SeatsAvailable = SeatsAvailable - @Seats "
            "WHERE FlightID = @FlightID AND SeatsAvailable >= @Seats";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@Seats", seatsToReduce);
        cmd->Parameters->AddWithValue("@FlightID", flightID);

        conn->Open();
        int rows = cmd->ExecuteNonQuery();
        conn->Close();

        return (rows > 0);
    }
};