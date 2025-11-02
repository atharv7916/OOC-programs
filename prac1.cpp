#include <bits/stdc++.h>
using namespace std;
class Complex{
public:
int real;
int imaginary;
Complex ()
{
    real=0;
    imaginary=0;
}
    Complex (int r, int i)
    {
        real=r;
        imaginary=i;
    }
    Complex addComplexNumber(Complex C1, Complex C2)
    {
 Complex res;
        res.real=C1.real+C2.real;
        res.imaginary=C1.imaginary+C2.imaginary;
        return res;
}
};
int main() {

    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;
    
    Complex C1(10,4);
    cout<<"First Complex Number: "<<C1.real<<" + i"<<C1.imaginary<<endl;

    Complex C2(6,1);
    cout<<"Second Complex Number: "<<C2.real<<" + i"<<C2.imaginary<<endl;
    Complex C3;
    C3=C3.addComplexNumber(C1,C2);
    cout<<"Sum of Two Complex Number: "<<C3.real<<" + i"<<C3.imaginary<<endl;

    Complex A(2,7);
    cout<<"First Complex Number: "<<A.real<<" + i"<<A.imaginary<<endl;

    Complex B(10,6);
    cout<<"Second Complex Number: "<<B.real<<" + i"<<B.imaginary<<endl;
    Complex D;
    D=D.addComplexNumber(A,B);
    cout<<"Sum of Two Complex Number: "<<D.real<<" + i"<<D.imaginary
<<endl;
}
