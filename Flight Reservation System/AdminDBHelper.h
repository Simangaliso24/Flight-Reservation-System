#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

public ref class AdminDBHelper
{
private:
    static String^ connString =
        "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True";

    // ================= SAFE CONNECTION HELPER =================
    static SqlConnection^ GetConnection()
    {
        return gcnew SqlConnection(connString);
    }

public:

    // ================= FLIGHTS =================
    static DataTable^ GetFlights()
    {
        SqlConnection^ conn = GetConnection();

        String^ query =
            "SELECT FlightID, Departure, Destination, DepartureDate, ArrivalDate, SeatsAvailable, Price FROM Flight";

        SqlDataAdapter^ da = gcnew SqlDataAdapter(query, conn);
        DataTable^ dt = gcnew DataTable();

        da->Fill(dt);
        return dt;
    }

    static void AddFlight(String^ id, String^ from, String^ to,
        DateTime dep, DateTime arr, int seats, double price)
    {
        SqlConnection^ conn = GetConnection();

        String^ query =
            "INSERT INTO Flight "
            "(FlightID, Departure, Destination, DepartureDate, ArrivalDate, SeatsAvailable, Price) "
            "VALUES "
            "(@id, @from, @to, @dep, @arr, @seats, @price)";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@id", id);
        cmd->Parameters->AddWithValue("@from", from);
        cmd->Parameters->AddWithValue("@to", to);
        cmd->Parameters->AddWithValue("@dep", dep);
        cmd->Parameters->AddWithValue("@arr", arr);
        cmd->Parameters->AddWithValue("@seats", seats);
        cmd->Parameters->AddWithValue("@price", price);

        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();
    }

    static void UpdateFlight(String^ id, String^ from, String^ to,
        DateTime dep, DateTime arr, int seats, double price)
    {
        SqlConnection^ conn = GetConnection();

        String^ query =
            "UPDATE Flight SET Departure=@from, Destination=@to, DepartureDate=@dep, ArrivalDate=@arr, "
            "SeatsAvailable=@seats, Price=@price WHERE FlightID=@id";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@id", id);
        cmd->Parameters->AddWithValue("@from", from);
        cmd->Parameters->AddWithValue("@to", to);
        cmd->Parameters->AddWithValue("@dep", dep);
        cmd->Parameters->AddWithValue("@arr", arr);
        cmd->Parameters->AddWithValue("@seats", seats);
        cmd->Parameters->AddWithValue("@price", price);

        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();
    }

    static void DeleteFlight(String^ id)
    {
        SqlConnection^ conn = GetConnection();

        conn->Open();

        // delete bookings first
        String^ query1 =
            "DELETE FROM Booking WHERE FlightID=@id";

        SqlCommand^ cmd1 =
            gcnew SqlCommand(query1, conn);

        cmd1->Parameters->AddWithValue("@id", id);
        cmd1->ExecuteNonQuery();

        // now delete flight
        String^ query2 =
            "DELETE FROM Flight WHERE FlightID=@id";

        SqlCommand^ cmd2 =
            gcnew SqlCommand(query2, conn);

        cmd2->Parameters->AddWithValue("@id", id);
        cmd2->ExecuteNonQuery();

        conn->Close();
    }


    // ================= PASSENGERS =================
    static DataTable^ GetPassengers()
    {
        SqlConnection^ conn = GetConnection();

        String^ query =
            "SELECT PassengerID, FullName, Contact, Email FROM Passenger";

        SqlDataAdapter^ da = gcnew SqlDataAdapter(query, conn);
        DataTable^ dt = gcnew DataTable();

        da->Fill(dt);
        return dt;
    }

  public: static void DeletePassenger(String^ passengerID)
  {
      SqlConnection^ conn = gcnew SqlConnection(GetConnectionString());

      try
      {
          conn->Open();

          // 1. Delete dependent bookings first
          SqlCommand^ cmd1 = gcnew SqlCommand(
              "DELETE FROM Booking WHERE PassengerID=@id", conn);
          cmd1->Parameters->AddWithValue("@id", passengerID);
          cmd1->ExecuteNonQuery();

          // 2. Now delete passenger
          SqlCommand^ cmd2 = gcnew SqlCommand(
              "DELETE FROM Passenger WHERE PassengerID=@id", conn);
          cmd2->Parameters->AddWithValue("@id", passengerID);
          cmd2->ExecuteNonQuery();
      }
      catch (Exception^ ex)
      {
          throw gcnew Exception("Delete failed: " + ex->Message);
      }
      finally
      {
          conn->Close();
      }
  }



    // ================= BOOKINGS =================
    static DataTable^ GetBookings()
    {
        SqlConnection^ conn = GetConnection();

        String^ query =
            "SELECT b.BookingID, p.FullName AS PassengerName, b.FlightID, "
            "f.Departure, f.Destination, f.DepartureDate, f.ArrivalDate, "
            "b.Adults, b.Children, b.Currency, b.Price "
            "FROM Booking b "
            "INNER JOIN Passenger p ON b.PassengerID = p.PassengerID "
            "INNER JOIN Flight f ON b.FlightID = f.FlightID";

        SqlDataAdapter^ da = gcnew SqlDataAdapter(query, conn);
        DataTable^ dt = gcnew DataTable();

        da->Fill(dt);
        return dt;
    }

    static void DeleteBooking(String^ bookingID)
    {
        SqlConnection^ conn = GetConnection();

        String^ query = "DELETE FROM Booking WHERE BookingID=@id";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);
        cmd->Parameters->AddWithValue("@id", bookingID);

        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();
    }

    static int CountBookings()
    {
        SqlConnection^ conn = GetConnection();

        String^ query = "SELECT COUNT(*) FROM Booking";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        conn->Open();
        int count = Convert::ToInt32(cmd->ExecuteScalar());
        conn->Close();

        return count;
    }


    // ================= FIXED FLIGHT ID GENERATOR =================
    static String^ GenerateNextFlightId()
    {
        SqlConnection^ conn = GetConnection();

        String^ query = "SELECT TOP 1 FlightID FROM Flight ORDER BY FlightID DESC";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        conn->Open();
        Object^ result = cmd->ExecuteScalar();
        conn->Close();

        if (result == nullptr || result == DBNull::Value)
            return "FL001";

        String^ lastId = result->ToString();

        int num = Convert::ToInt32(lastId->Substring(2));
        num++;

        return "FL" + num.ToString("D3");
    }

    static bool FlightExists(String^ id, String^ from, String^ to, DateTime dep, DateTime arr)
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

        String^ query =
            "SELECT COUNT(*) FROM Flight "
            "WHERE FlightID=@id OR "
            "(Departure=@from AND Destination=@to AND DepartureDate=@dep AND ArrivalDate=@arr)";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@id", id);
        cmd->Parameters->AddWithValue("@from", from);
        cmd->Parameters->AddWithValue("@to", to);
        cmd->Parameters->AddWithValue("@dep", dep);
        cmd->Parameters->AddWithValue("@arr", arr);

        conn->Open();
        int count = Convert::ToInt32(cmd->ExecuteScalar());
        conn->Close();

        return count > 0;
    }

    // ================= SEAT UPDATE (IMPORTANT FOR CANCEL BOOKING) =================
    static void UpdateSeats(String^ flightID, int change)
    {
        SqlConnection^ conn = GetConnection();

        String^ query =
            "UPDATE Flight SET SeatsAvailable = SeatsAvailable + @change "
            "WHERE FlightID = @id";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@change", change);
        cmd->Parameters->AddWithValue("@id", flightID);

        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();
    }

    static bool PassengerExists(String^ id, String^ email)
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

        String^ query =
            "SELECT COUNT(*) FROM Passenger "
            "WHERE PassengerID=@id OR Email=@email";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@id", id);
        cmd->Parameters->AddWithValue("@email", email);

        conn->Open();

        int count = Convert::ToInt32(cmd->ExecuteScalar());

        conn->Close();

        return count > 0;
    }

    static void AddPassenger(String^ id, String^ name, String^ contact, String^ email, String^ password)
    {
        SqlConnection^ conn = GetConnection();

        String^ query =
            "INSERT INTO Passenger (PassengerID, FullName, Contact, Email, Password) "
            "VALUES (@ID, @Name, @Contact, @Email, @Password)";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@ID", id);
        cmd->Parameters->AddWithValue("@Name", name);
        cmd->Parameters->AddWithValue("@Contact", contact);
        cmd->Parameters->AddWithValue("@Email", email);
        cmd->Parameters->AddWithValue("@Password", password);

        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();
    }

    static void UpdatePassenger(String^ id, String^ name, String^ contact, String^ email)
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

        String^ query =
            "UPDATE Passenger SET FullName=@name, Contact=@contact, Email=@email "
            "WHERE PassengerID=@id";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@id", id);
        cmd->Parameters->AddWithValue("@name", name);
        cmd->Parameters->AddWithValue("@contact", contact);
        cmd->Parameters->AddWithValue("@email", email);

        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();
    }

   
        static String^ GetConnectionString()
        {
            return connString;
        }

        
};