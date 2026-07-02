#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

public ref class ResetPasswordDBHelper
{
private:
    static String^ connString =
        "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=|DataDirectory|\\BookingsDB.mdf;Integrated Security=True";

public:

    static bool EmailExists(String^ email)
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

        String^ query = "SELECT COUNT(*) FROM Passenger WHERE LOWER(Email)=LOWER(@Email)";
        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@Email", email);

        conn->Open();
        int count = Convert::ToInt32(cmd->ExecuteScalar());
        conn->Close();

        return count > 0;
    }

    static void UpdatePassword(String^ email, String^ newPassword)
    {
        SqlConnection^ conn = gcnew SqlConnection(connString);

        String^ query =
            "UPDATE Passenger SET Password=@Password WHERE LOWER(Email)=LOWER(@Email)";

        SqlCommand^ cmd = gcnew SqlCommand(query, conn);

        cmd->Parameters->AddWithValue("@Password", newPassword);
        cmd->Parameters->AddWithValue("@Email", email);

        conn->Open();
        cmd->ExecuteNonQuery();
        conn->Close();
    }
};