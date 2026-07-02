#include "pch.h"
#include "Passenger.h"

Passenger::Passenger()
{
    passengerId = 0;
    name = "";
    contact = "";
    email = "";
}

Passenger::Passenger(int id, String^ name, String^ contact, String^ email)
{
    this->passengerId = id;
    this->name = name;
    this->contact = contact;
    this->email = email;
}

// Getters and Setters
int Passenger::GetPassengerId() 
{ 
    return passengerId;
}
void Passenger::SetPassengerId(int id) 
{ 
    passengerId = id;
}

String^ Passenger::GetName() 
{ 
    return name;
}
void Passenger::SetName(String^ name) 
{ 
    this->name = name;
}

String^ Passenger::GetContact() 
{ 
    return contact;
}
void Passenger::SetContact(String^ contact) 
{ 
    this->contact = contact; 
}

String^ Passenger::GetEmail() 
{ 
    return email;
}
void Passenger::SetEmail(String^ email) 
{ 
    this->email = email;
}

// Override ToString
String^ Passenger::ToString()
{
    return "Passenger ID: " + passengerId.ToString() + "\nName: " + name + "\nContact: " + contact + "\nEmail: " + email;
}
