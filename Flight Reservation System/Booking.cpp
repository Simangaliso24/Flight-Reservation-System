#include "pch.h"
#include "Booking.h"


Booking::Booking()
{
    bookingId = 0;
    passengerId = 0;
    flightId = 0;
    seatNumber = "";
    status = "Pending";
    price = 0.0;
}


Booking::Booking(int id, int passengerId, int flightId, String^ seatNumber, String^ status, double price)
{
    this->bookingId = id;
    this->passengerId = passengerId;
    this->flightId = flightId;
    this->seatNumber = seatNumber;
    this->status = status;
    this->price = price;
}


int Booking::GetBookingId() 
{ 
    return bookingId;
}
int Booking::GetPassengerId() 
{ 
    return passengerId; 
}
int Booking::GetFlightId() 
{ 
    return flightId;
}
String^ Booking::GetSeatNumber() 
{ 
    return seatNumber;
}
String^ Booking::GetStatus() 
{ 
    return status;
}
double Booking::GetPrice() 
{ 
    return price;
}


void Booking::SetBookingId(int id) 
{ 
    bookingId = id;
}
void Booking::SetPassengerId(int passengerId) 
{ 
    this->passengerId = passengerId;
}
void Booking::SetFlightId(int flightId) 
{ 
    this->flightId = flightId;
}
void Booking::SetSeatNumber(String^ seatNumber) 
{ 
    this->seatNumber = seatNumber;
}
void Booking::SetStatus(String^ status) 
{ 
    this->status = status;
}
void Booking::SetPrice(double price) 
{ 
    this->price = price; 
}


String^ Booking::ToString()
{
    return "Booking ID: " + bookingId.ToString() +  "\nPassenger ID: " + passengerId.ToString() + "\nFlight ID: " + flightId.ToString() +  "\nSeat Number: " + seatNumber +
        "\nStatus: " + status +
        "\nPrice: " + price.ToString("F2");
}
