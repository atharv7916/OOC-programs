#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person's constructor called" << endl;
    }
};

class Faculty : public Person {
public:
    Faculty() {
        cout << "Faculty's constructor called" << endl;
    }
}; // Missing closing brace added

class Student : public Person {
public:
    Student() {
        cout << "Student's constructor called" << endl;
    }
}; // Missing closing brace added

class TA : public Faculty, public Student {
public:
    TA() { // Corrected missing parentheses and brace
        cout << "TA's constructor called" << endl;
    }
}; // Missing closing brace added

int main() {

    
    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;
    TA ta;
    return 0;
} // Missing closing brace added