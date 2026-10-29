// Class 28: const member functions.

// a class can have functions with same names and parameters with the help of const keyword
// the const function will not change the value of the data members
// const function can be called by both const and non-const objects
// the non const function can be called by only non-const objects
// the non const can be used to change the value of the data members
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string name;
    int baseRent;

public:
    Vehicle(string n = "No Input", int r = 0) : name(n), baseRent(r) {}

    void displayInfo()
    {
        cout << "Vehicle : " << name << "\n";
    }

    virtual void calculateRent(int days)
    {
        double rent = baseRent * days;
        if (days > 7)
            rent *= 0.1;
        cout << "Total Rent : " << rent;
    }
};

class Car : public Vehicle
{
public:
    Car() : Vehicle("Car", 1200) {}

    void calculateRent(int days)
    {
        double rent = baseRent * days * 1.1;
        if (days > 7)
            rent *= 0.1;
        cout << "Car Rent for " << days << " days: " << rent;
    }
};

class Bike : public Vehicle
{
public:
    Bike() : Vehicle("Bike", 500) {}

    void calculateRent(int days)
    {
        double rent = baseRent * days * 0.9;
        if (days > 7)
            rent *= 0.1;
        cout << "Bike Rent for " << days << " days: " << rent;
    }
};

class Truck : public Vehicle
{
public:
    Truck() : Vehicle("Truck", 2000) {}

    void calculateRent(int days)
    {
        double rent = baseRent * days * 1.5;
        if (days > 7)
            rent *= 0.1;
        cout << "Truck Rent for " << days << " days: " << rent;
    }
};
class Bus : public Vehicle
{
public:
    Bus() : Vehicle("Bus", 1500) {}

    void calculateRent(int days)
    {
        double rent = baseRent * days * 1.2;
        if (days > 7)
            rent *= 0.1;
        cout << "Bus Rent for " << days << " days: " << rent;
    }
};

int main()
{
    int days;
    cout << "Car : 10% additional charge\n"
         << "Bike : 10% discount\n"
         << "Truck : 50% additional charge\n";
    cout << "If num of days > 7 :  10% discount\n";
    cout << "Enter rental days: ";
    cin >> days;

    Car car;
    Bike bike;
    Truck truck;
    Vehicle *vehicles[3] = {&car, &bike, &truck};
    for (int i = 0; i < 3; i++)
    {
        vehicles[i]->displayInfo();
        vehicles[i]->calculateRent(days);
        cout << "\n";
    }
}
