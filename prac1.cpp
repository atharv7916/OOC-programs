#include <iostream>
using namespace std;
class Student {
private:
	char name[30];
	int rollNo;
	float marks;
public:
// Member function to input student details
void inputDetails() {
	cout << "Enter student name: ";
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter marks: ";
	cin >> marks;
}
// Member function to display student details
void displayDetails() {
	cout << "Student Name: "<<name << endl;
	cout << "Roll Number: " << rollNo << endl;
	cout << "Marks: " << marks << endl;
	}
};
int main() {
cout<<"Name : Atharv Babaso Jamanik"<<endl;
cout<<"Roll No.: 47"<<endl;
cout<<"Diision : B"<<engl;


Student studentObj;
// Input student details
studentObj.inputDetails();
// Display student details
cout << "\nStudent Details:\n";
studentObj.displayDetails();
return 0;
}
