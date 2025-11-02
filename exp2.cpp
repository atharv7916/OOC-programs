#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    Complex addComplexNumber(Complex C2) {
        Complex res;
        res.real = real + C2.real;
        res.imaginary = imaginary + C2.imaginary;
        return res;
    }

    void display() {
        cout << real << " + i" << imaginary;
    }

};

int main() {

    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;

    Complex C1(4, 5); 
    cout << "Complex number 1: ";
    C1.display();
    cout << endl;

    Complex C2(8, 9);
    cout << "Complex number 2: ";
    C2.display();
    cout << endl;

    Complex C3;
    C3 = C1.addComplexNumber(C2);

    cout << "Sum of complex number: ";
    C3.display();
    cout << endl << endl;

    Complex A(2, 7);
    cout << "Complex number 1: ";
    A.display();
    cout << endl;

    Complex B(10, 6);
    cout << "Complex number 2: ";
    B.display();
    cout << endl;
    
    Complex C;
    C = A.addComplexNumber(B);

    cout << "Sum of complex number: ";
    C.display();
    cout << endl;
    
    return 0;
}