#include <iostream> // [cite: 354]
#include <cmath> // [cite: 354]

const double PI = 3.14159; // [cite: 354]

// Define a base class named Shape [cite: 355]
class Shape {
public: // [cite: 355]
    // Virtual member function to calculate the area (pure virtual function) [cite: 357]
    virtual double calculateArea() const = 0; // [cite: 357]
    // Virtual member function to calculate the perimeter (pure virtual function) [cite: 358]
    virtual double calculatePerimeter() const = 0; // [cite: 359]
}; // [cite: 356]

// Define a derived class named Circle inheriting from Shape [cite: 360]
class Circle : public Shape {
private: // [cite: 361]
    double radius; // [cite: 361]
public: // [cite: 362]
    // Constructor for Circle class [cite: 364]
    Circle(double rad) : radius(rad) {} // [cite: 365]

    // Override the virtual member function to calculate the area [cite: 366]
    double calculateArea() const override { // [cite: 367]
        // Calculate the area of the circle using the radius [cite: 369]
        return PI * std::pow(radius, 2); 
    } // [cite: 368]

    // Override the virtual member function to calculate the perimeter [cite: 370]
    double calculatePerimeter() const override { // [cite: 371]
        // Calculate the perimeter of the circle using the radius [cite: 373]
        return 2 * PI * radius;
    } // [cite: 372]
}; // [cite: 363]

// Define a derived class named Rectangle inheriting from Shape [cite: 374]
class Rectangle : public Shape {
private: // [cite: 375]
    double length; // [cite: 375]
    double width; // [cite: 375]
public: // [cite: 380]
    // Constructor for Rectangle class [cite: 381]
    Rectangle(double len, double wid) : length(len), width(wid) {} // [cite: 382]

    // Override the virtual member function to calculate the area [cite: 383]
    double calculateArea() const override { // [cite: 384]
        // Calculate the area of the rectangle using its length and width [cite: 386]
        return length * width;
    } // [cite: 385]

    // Override the virtual member function to calculate the perimeter [cite: 387]
    double calculatePerimeter() const override { // [cite: 388]
        // Calculate the perimeter of the rectangle using its length and width [cite: 389]
        return 2 * (length + width);
    } // [cite: 390]
}; // [cite: 391]

// Define a derived class named Triangle inheriting from Shape [cite: 392]
class Triangle : public Shape {
private: // [cite: 393]
    double side1; // [cite: 393]
    double side2; // [cite: 394]
    double side3; // [cite: 394]
public: // [cite: 396]
    // Constructor for Triangle class [cite: 397]
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {} // [cite: 398]

    // Override the virtual member function to calculate the area [cite: 399]
    double calculateArea() const override { // [cite: 399]
        // Using Heron's formula to calculate the area of a triangle [cite: 401]
        double s = (side1 + side2 + side3) / 2; // [cite: 402]
        // Calculate the area using Heron's formula [cite: 403]
        return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    } // [cite: 400]

    // Override the virtual member function to calculate the perimeter [cite: 404]
    double calculatePerimeter() const override { // [cite: 405]
        // Calculate the perimeter of the triangle using its sides [cite: 407]
        return side1 + side2 + side3;
    } // [cite: 406]
}; // [cite: 396]

int main() { // [cite: 408]
    // Create instances of different shapes: Circle, Rectangle, and Triangle [cite: 409]
    std::cout<<"Name: Atharv  Jamanik"<<std::endl;
    std::cout<<"Roll No: 47"<<std::endl;
    std::cout<<" Div : CSE B"<<std::endl;

    
    Circle circle(7.0); // [cite: 410]
    Rectangle rectangle(4.2, 8.0); // [cite: 411]
    Triangle triangle(4.0, 4.0, 3.2); // [cite: 411]

    

    
    std::cout << "Circle: " << std::endl; 
    std::cout << "Area: " << circle.calculateArea() << std::endl; 
    std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl;

    std::cout << "\nRectangle: " << std::endl; 
    std::cout << "Area: " << rectangle.calculateArea() << std::endl; 
    std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl; 

    std::cout << "\nTriangle: " << std::endl; 
    std::cout << "Area: " << triangle.calculateArea() << std::endl; 
    std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl; 

    return 0; 
} 