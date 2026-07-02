#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

public ref class LoginDBHelper
{
private:
    static String^ connString =
        "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True";

public:

    static bool ValidateAdmin(String^ email, String^ password)
    {
        try
        {
            SqlConnection^ conn = gcnew SqlConnection(connString);
            String^ query = "SELECT COUNT(*) FROM Admin WHERE Email=@Email AND Password=@Password";

            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@Email", email);
            cmd->Parameters->AddWithValue("@Password", password);

            conn->Open();
            int count = Convert::ToInt32(cmd->ExecuteScalar());
            conn->Close();

            return (count == 1);
        }
        catch (Exception^ ex)
        {
            throw ex;
        }
    }

    static bool ValidatePassenger(String^ email, String^ password)
    {
        try
        {
            SqlConnection^ conn = gcnew SqlConnection(connString);
            String^ query = "SELECT COUNT(*) FROM Passenger WHERE Email=@Email AND Password=@Password";

            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@Email", email);
            cmd->Parameters->AddWithValue("@Password", password);

            conn->Open();
            int count = Convert::ToInt32(cmd->ExecuteScalar());
            conn->Close();

            return (count == 1);
        }
        catch (Exception^ ex)
        {
            throw ex;
        }
    }
};