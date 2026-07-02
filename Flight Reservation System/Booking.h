#pragma once

using namespace System;

public ref class Booking
{
private:
    int bookingId;
    int passengerId;   
    int flightId;      
    String^ seatNumber;
    String^ status;    
    double price;

public:
    
    Booking();
    Booking(int id, int passengerId, int flightId, String^ seatNumber, String^ status, double price);

    
    int GetBookingId();
    int GetPassengerId();
    int GetFlightId();
    String^ GetSeatNumber();
    String^ GetStatus();
    double GetPrice();

    
    void SetBookingId(int id);
    void SetPassengerId(int passengerId);
    void SetFlightId(int flightId);
    void SetSeatNumber(String^ seatNumber);
    void SetStatus(String^ status);
    void SetPrice(double price);

    
    virtual String^ ToString() override;
};
