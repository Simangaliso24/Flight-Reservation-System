#pragma once

using namespace System;

public ref class Flight
{
private:
    int flightId;
    String^ flightNumber;
    String^ departure;
    String^ arrival;
    String^ date;
    String^ time;
    int seatsAvailable;

public:
    
    Flight();
    Flight(int id, String^ number, String^ departure, String^ arrival, String^ date, String^ time, int seats);

    int GetFlightId();
    String^ GetFlightNumber();
    String^ GetDeparture();
    String^ GetArrival();
    String^ GetDate();
    String^ GetTime();
    int GetSeatsAvailable();

    void SetFlightId(int id);
    void SetFlightNumber(String^ number);
    void SetDeparture(String^ departure);
    void SetArrival(String^ arrival);
    void SetDate(String^ date);
    void SetTime(String^ time);
    void SetSeatsAvailable(int seats);

    void ReduceSeat(); 
    virtual String^ ToString() override;
};
