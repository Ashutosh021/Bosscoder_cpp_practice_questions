//  Define a class in C++. What are its components



// Class is a user-defined data type that serves as a blueprint for creating objects. Objects are instances of a class, and they encapsulate data (attributes) and methods (functions) that operate on that data.


#include <iostream>

// Class definition
class MyClass {
public:
    // Data members (attributes)
    int myInt;
    double myDouble;
    
    // Member functions (methods)
    void display() {
        std::cout << "Int: " << myInt << ", Double: " << myDouble << std::endl;
    }
};

int main() {
    // Creating an object of the class
    MyClass obj;

    // Accessing data members and calling member functions
    obj.myInt = 42;
    obj.myDouble = 3.14;
    obj.display();

    return 0;
}

// Components:

// 1. Class keyword: The class keyword is used to declare a class.

// 2. Class Name: you provide the name of the class. example, the class is named MyClass.

// 3. Access Specifiers: defines the visibility and access level of the class members.
//     public means that the members are accessible from outside the class.
//     private means that the members are accessible only inside the class.
//     protectoed means that the members are accessible within the inherited class.

// 4. Data Members (Attributes): variables inside the class. Example, myInt and myDouble.

// 5. Member Functions (Methods: functions inside the class. example, display is a member function.

// 6. Object: instance of a class is called an object. example, `obj` is an object of the class `MyClass`.

// 7. Accessing Members: Members (both data members and member functions) are accessed using the dot (`.`) operator. For example, `obj.myInt` accesses the `myInt` data member of the `obj` object.
