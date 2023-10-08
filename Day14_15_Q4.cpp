//  Describe the four pillars of objectoriented programming (OOP) and
//  how C++ supports each of them.



//  four pillars of Object-Oriented Programming (OOP) are:



// 1. Encapsulation:
            // The Process of combining many entities (data member and member function) into one is called Encapsulation.

//    How C++ supports it: 

// C++ supports encapsulation by providing access specifiers (`public`, `private`, and `protected`) to control the visibility of class members. Data members are often marked as `private`, and member functions provide controlled access to these private members.




// 2. Inheritance:
//    Definition: Inheritance is a mechanism where a new class inherits properties and behaviors from an existing class. It promotes code reusability and the creation of a hierarchy of classes.
   
//    How C++ supports it:
    // C++ supports inheritance through the `class` keyword.
    
    // Syntax: 
    // Derived Class: access_specifier Base_class 
    // class Addition:public Subtraction




// 3. Polymorphism:
   
//    polymorphism means one name many form , In this we use same function is used to perform different operation
    // (i)  compile-time (static) polymorphism, achieved through function overloading and operator overloading,
    // (ii) runtime (dynamic) polymorphism, achieved through virtual functions and abstract classes.

//    How C++ supports it:
//    C++ supports both compile-time and runtime polymorphism. Compile-time polymorphism is achieved through function overloading and operator overloading. Runtime polymorphism is achieved through virtual functions and abstract classes. The `virtual` keyword is used to create virtual functions, and the `override` keyword is used to explicitly indicate the overriding of a virtual function in a derived class.




// 4. Abstraction:

//    Abstraction is the process showing essential details while ignoring irrelevant details.

//    - How C++ supports it: C++ supports abstraction by allowing the creation of abstract classes and pure virtual functions. An abstract class is a class that cannot be instantiated and may contain pure virtual functions, which are declared using `virtual` keyword followed by `= 0`. Abstract classes can be used as interfaces, providing a blueprint for derived classes to implement.