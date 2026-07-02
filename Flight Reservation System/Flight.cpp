#include "pch.h"
#include "Flight.h"


Flight::Flight()
{
    flightId = 0;
    flightNumber = "";
    departure = "";
    arrival = "";
    date = "";
    time = "";
    seatsAvailable = 0;
}


Flight::Flight(int id, String^ number, String^ departure, String^ arrival, String^ date, String^ time, int seats)
{
    this->flightId = id;
    this->flightNumber = number;
    this->departure = departure;
    this->arrival = arrival;
    this->date = date;
    this->time = time;
    this->seatsAvailable = seats;
}


int Flight::GetFlightId() 
{ 
    return flightId;
}
String^ Flight::GetFlightNumber() 
{ 
    return flightNumber;
}
String^ Flight::GetDeparture() 
{ 
    return departure;
}
String^ Flight::GetArrival() 
{ 
    return arrival;
}
String^ Flight::GetDate() 
{ 
    return date;
}
String^ Flight::GetTime() 
{ 
    return time;
}
int Flight::GetSeatsAvailable() 
{ 
    return seatsAvailable;
}


void Flight::SetFlightId(int id) 
{ 
    flightId = id;
}
void Flight::SetFlightNumber(String^ number) 
{ 
    flightNumber = number;
}
void Flight::SetDeparture(String^ departure) 
{ 
    this->departure = departure;
}
void Flight::SetArrival(String^ arrival) 
{ 
    this->arrival = arrival;
}
void Flight::SetDate(String^ date) 
{ 
    this->date = date;
}
void Flight::SetTime(String^ time) 
{ 
    this->time = time;
}
void Flight::SetSeatsAvailable(int seats) 
{ 
    seatsAvailable = seats;
}


void Flight::ReduceSeat()
{
    if (seatsAvailable > 0)
        seatsAvailable--;
}

String^ Flight::ToString()
{
    return "Flight ID: " + flightId.ToString() + "\nNumber: " + flightNumber + "\nDeparture: " + departure + "\nArrival: " + arrival + "\nDate: " + date + "\nTime: " + time +
     "\nSeats Available: " + seatsAvailable.ToString();
}
