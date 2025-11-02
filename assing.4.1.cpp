#include <iostream>
using namespace std;

class Rectangle 
{
private:
    double length;
    double width;

public:
    Rectangle() : length(1.0), width(1.0) {}
    Rectangle(double len, double wid) : length(len), width(wid) {}
    ~Rectangle() 
	{
        std::cout << "Rectangle object destroyed." << std::endl;
    }
    double getLength() const 
	{
        return length;
    }

    double getWidth() const 
	{
        return width;
    }
    void setLength(double len) 
	{
        length = len;
    }

    void setWidth(double wid) 
	{
        width = wid;
    }
    double calculateArea() const 
	{
        return length * width;
    }
    double calculatePerimeter() const 
	{
        return 2 * (length + width);
    }
};

int main() 
{

    cout<<"Name: Atharv Jamanik"<<endl;
    cout<<"Roll No: 47"<<endl;
    cout<<" Div : CSE B"<<endl;
    
    Rectangle rect(4.0, 40.0);
    
    cout << "Rectangle properties:" << std::endl;
    cout << "Length: " << rect.getLength() << std::endl;
    cout << "Width: " << rect.getWidth() << std::endl;
    cout << "Area: " << rect.calculateArea() << std::endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;

    return 0;
}
