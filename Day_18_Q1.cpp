// Create a class to represent complexnumbers. Overload the + operator in
// your car class to add two complex numbers

#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Constructor to initialize complex numbers
    ComplexNumber(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

    // Overloaded + operator to add two complex numbers
    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imaginary << "i";
    }
};

int main() {
    // Creating complex numbers
    ComplexNumber complex1(3.0, 4.0);
    ComplexNumber complex2(1.5, 2.5);

    // Adding two complex numbers using the overloaded + operator
    ComplexNumber sum = complex1 + complex2;

    // Displaying the result
    cout << "Result of addition: ";
    complex1.display();
    cout << " + ";
    complex2.display();
    cout << " = ";
    sum.display();
    cout << endl;

    return 0;
}
