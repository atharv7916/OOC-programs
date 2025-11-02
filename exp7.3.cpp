#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle\n";
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is a Car\n";
    }
};

class Bus : public Vehicle, public Fare {
public:
    Bus() {
        cout << "This Vehicle is a Bus with Fare\n"; // Corrected missing quote and 'n'
    }
};

int main() {

    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;
    
    Bus obj2;
    return 0;
}