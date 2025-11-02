#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    int no;
    string name;

public:
    // Pure virtual functions (making Employee an abstract class)
    virtual void salary() = 0;
    virtual void display() = 0;

    // Helper functions to handle common input/output (not virtual)
    void get_common_data() {
        cout << "Enter employee number: ";
        cin >> no;
        cout << "Enter employee name: ";
        cin >> name;
    }

    void put_common_data() {
        cout << "Employee Number is " << no << endl;
        cout << "Employee Name is " << name << endl;
    }
};

class SalariedEmployee : public Employee {
private:
    double monthlySalary;

public:
    void salary() override { // Corrected: Renamed base function from salary() to get_common_data()
        get_common_data();
        cout << "Enter employee monthly salary: ";
        cin >> monthlySalary;
    }

    void display() override {
        cout << endl << "Salaried Employee:" << endl;
        put_common_data();
        cout << "Salary: " << monthlySalary << endl;
    }
};

class HourlyEmployee : public Employee {
private:
    double hours;
    double rate;

public:
    void salary() override {
        get_common_data();
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }

    void display() override {
        cout << endl << "Hourly Employee:" << endl;
        put_common_data();
        cout << "Hours: " << hours << endl;
        cout << "Hourly rate: " << rate << endl;
        cout << "Salary: " << (rate * hours) << endl;
    }
};

class CommissionedEmployee : public Employee {
private:
    double baseSalary; // Renamed from salarydouble for clarity
    int overtime;

public:
    void salary() override {
        get_common_data();
        cout << "Enter base salary: ";
        cin >> baseSalary;
        cout << "Enter overtime (hours): ";
        cin >> overtime;
    }

    void display() override {
        cout << endl << "Commissioned Employee:" << endl;
        put_common_data();
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Overtime: " << overtime << endl;
        cout << "Total Salary: " << (baseSalary + (overtime * 15)) << endl;
    }
};

int main() {

    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;

    // Array of base class POINTERS to achieve polymorphism
    Employee* employees[3]; 

    SalariedEmployee newSalariedEmployee;
    HourlyEmployee newHourlyEmployee;
    CommissionedEmployee newCommissionedEmployee;

    // Assign addresses of derived class objects to base class pointers
    employees[0] = &newSalariedEmployee;
    employees[1] = &newHourlyEmployee;
    employees[2] = &newCommissionedEmployee;

    for(int i = 0; i < 3; i++) {
        employees[i]->salary();
        cout << endl;
    }
    
    for(int i = 0; i < 3; i++) {
        employees[i]->display();
    }

    return 0;
}