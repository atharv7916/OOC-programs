#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

class Four_Wheeler { // Corrected missing space in class name
public:
    Four_Wheeler() {
        cout << "This is a 4 Wheeler\n";
    }
};

class Car : public Vehicle, public Four_Wheeler {
public:
    Car() {
        cout << "This 4 Wheeler Vehicle is a Car\n"; // Corrected missing quote and 'n'
    }
};

int main() {

    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;

    Car obj;
    return 0;
}