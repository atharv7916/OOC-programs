#include <iostream>
using namespace std;

class construct {
public:
    float area;
    construct() 
	{
        area = 0;
    }
    construct(int a, int b) {
        area = a * b;
    }

    void disp() {
        cout << area << endl;
    }
};

int main() 
{
    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;
    
    construct o;
    construct o2(10, 20);

    o.disp();
    o2.disp();

    return 1;
}
