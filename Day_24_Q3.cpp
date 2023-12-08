// Override a member function in your
// "Circle" and "Rectangle" classes to
// calculate area.

#include<iostream>
#include<cmath>
using namespace std;

class Shape {
public:
    string shapeType = "Generic Shape";

    // Virtual function for calculating area
    virtual double calculateArea() {
        return 0.0;
    }
};

class Circle : public Shape {
public:
    double radius = 5.0;  // Example radius for the circle

    // Override the calculateArea function for Circle
    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
public:
    double length = 4.0;   // Example length for the rectangle
    double width = 3.0;    // Example width for the rectangle

    // Override the calculateArea function for Rectangle
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    // Display information and calculate areas
    cout << "Shape Type: " << circle.shapeType << ", Area: " << circle.calculateArea() << endl;
    cout << "Shape Type: " << rectangle.shapeType << ", Area: " << rectangle.calculateArea() << endl;

    return 0;
}
