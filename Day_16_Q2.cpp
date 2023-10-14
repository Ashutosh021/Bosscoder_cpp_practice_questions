// Explain the role of constructors and
// destructors in classes. What are copy
// constructors

// Constructors:

// Constructors are special member functions in a class that are responsible for initializing the object's data members. 
// called automatically when an object is created. 
// Constructors have the same name as the class and don't have a return type, not even void.

// Here's a simple example of a class with a constructor in C++:

// Example

// class MyClass {
// public:


//     // Constructor
//     MyClass() {
//         // Initialization code goes here
//     }

// };


// In this example, `MyClass` has a default constructor, which is a constructor with no parameters.






// Destructors:

// Destructors are another special member function in a class, and they have the same name as the class prefixed with a tilde (`~`).
// The purpose of destructors is to clean up resources or perform any necessary cleanup operations when an object goes out of scope or is explicitly deleted.
//  Destructors are called automatically when an object's lifetime ends we dont want to call it.

// Example is:


// class MyClass {
// public:
//     // Constructor
//     MyClass() {
//         // Initialization code goes here
//     }

//     // Destructor
//     ~MyClass() {
//         // Cleanup code goes here
//     }

//     // Other member functions and data members can be defined here
// };






// Copy Constructors:

// A copy constructor is a special type of constructor that creates a new object as a copy of an existing object. It is used when an object is passed by value, returned by value, or explicitly when one object is assigned the value of another. The copy constructor has a parameter of the same type as the class, typically passed by const reference.

//  Example :

// class MyClass {
// public:
//     // Constructor
//     MyClass() {
//         // Initialization code goes here
//     }

//     // Copy constructor
//     MyClass(const MyClass& other) {
//         // Copy the data members from 'other' to this object
//     }

//     // Other member functions and data members can be defined here
// };





// If you don't provide a copy constructor, the compiler generates a default one that performs a member-wise copy. However, if your class involves dynamic memory allocation or has other specific resource management needs, you might need to provide your own copy constructor to ensure proper copying behavior.