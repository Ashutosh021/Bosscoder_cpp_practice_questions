//  What is the significance of operator overloading in C++? Provide
// examples of commonly overloaded operators


// Operator overloading in C++ is a powerful feature that allows you to define how operators behave when used with user-defined types, such as classes. It provides a way to extend the functionality of operators beyond their predefined behavior for built-in types.


// Intuitive Syntax:
// Operator overloading allows you to use familiar operators with user-defined types, making the syntax more intuitive. For example, you can use the + operator to concatenate strings or add complex numbers.


// Consistency:
// Overloaded operators enable you to maintain a consistent and natural interface for your classes. This can improve code readability and reduce the learning curve for users of your classes.


// Expressiveness:
// It allows you to create expressive and concise code by enabling operations that are meaningful in the context of your classes. For instance, you can define a << operator for outputting custom objects to streams.


// Customization:
// Operator overloading provides a way to customize the behavior of operators for user-defined types. This customization allows you to tailor the behavior of operators to suit the specific requirements of your classes.


// Mathematical Operations:
// Overloading operators is common in mathematical or scientific programming to allow user-defined types to participate in mathematical expressions. For example, you can overload +, -, *, and / for a matrix class.


// I/O Operations:
// You can overload stream insertion (<<) and extraction (>>) operators to enable customized input and output operations for your classes


// Examples of Commonly Overloaded Operators:

// Arithmetic Operators:


// class ComplexNumber {
// public:
//     ComplexNumber operator+(const ComplexNumber& other) const;
//     ComplexNumber operator-(const ComplexNumber& other) const;
//     ComplexNumber operator*(const ComplexNumber& other) const;
//     ComplexNumber operator/(const ComplexNumber& other) const;
// };



// Relational Operators:


// class Person {
// public:
//     bool operator==(const Person& other) const;
//     bool operator!=(const Person& other) const;
// };



// Assignment Operator:


// class Vector {
// public:
//     Vector& operator=(const Vector& other);
// };



// Stream Insertion/Extraction:


// class Book {
//     friend ostream& operator<<(ostream& os, const Book& book);
//     friend istream& operator>>(istream& is, Book& book);
// };



// Subscript Operator:


// class Matrix {
// public:
//     double& operator()(int row, int col);
// };



// Increment/Decrement Operators:



// class Counter {
// public:
//     Counter& operator++();    // Prefix increment
//     Counter operator++(int);  // Postfix increment
// }
