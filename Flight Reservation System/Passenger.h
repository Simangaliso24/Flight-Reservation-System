#pragma once

using namespace System;

public ref class Passenger
{
private:
    int passengerId;
    String^ name;
    String^ contact;
    String^ email;

public:
    Passenger();
    Passenger(int id, String^ name, String^ contact, String^ email);

    int GetPassengerId();
    void SetPassengerId(int id);

    String^ GetName();
    void SetName(String^ name);

    String^ GetContact();
    void SetContact(String^ contact);

    String^ GetEmail();
    void SetEmail(String^ email);

    virtual String^ ToString() override;
};
