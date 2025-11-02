#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0)
    { real = r; imag = i; }
    
    // Friend declarations for global overloading
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in, Complex &c);
};

// Overloading the insertion operator (<<)
ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

// Overloading the extraction operator (>>)
istream & operator >> (istream &in, Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}

int main()
{

    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;

    Complex c1;
    // Uses overloaded >> operator (cin >> c1)
    cin >> c1;
    cout << "The complex object is ";
    // Uses overloaded << operator (cout << c1)
    cout << c1;
    return 0;
}