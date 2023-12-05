// // Discuss the access control modifiers
// // in C++ inheritance (public, private,
// // protected)!


// In C++, access control modifiers play a crucial role in determining the visibility and accessibility of class members (attributes and methods) within the context of inheritance. The three access control modifiers in C++ are `public`, `private`, and `protected`. These modifiers define how the derived class can access the members of the base class. 


// 1. **Public Inheritance:**

//    - **Syntax:** 
//             class DerivedClass : public BaseClass

//    - In public inheritance, all public members of the base class become public members of the derived class, and all protected members of the base class become protected members of the derived class. However, private members of the base class remain inaccessible to the derived class.
//    - Public inheritance represents an "is-a" relationship, indicating that the derived class is a specialized version of the base class.


//    class BaseClass {
//    public:
//        int publicMember;
//    private:
//        int privateMember;
//    protected:
//        int protectedMember;
//    };

//    class DerivedClass : public BaseClass {
//        // publicMember is accessible
//        // privateMember is not accessible
//        // protectedMember is accessible
//    };
 

// 2. **Private Inheritance:**

//    - **Syntax:** 
//             class DerivedClass : private BaseClass

//    - In private inheritance, all public and protected members of the base class become private members of the derived class. Private members of the base class are not accessible in the derived class.

//    - Private inheritance is useful when you want to implement the "implemented-in-terms-of" relationship rather than the "is-a" relationship.



  
//    class DerivedClass : private BaseClass {
//        // publicMember is private
//        // privateMember is not accessible
//        // protectedMember is private
//    };




// 3. **Protected Inheritance:**

//    - **Syntax:** `class DerivedClass : protected BaseClass`
//    - In protected inheritance, all public and protected members of the base class become protected members of the derived class. Private members of the base class are not accessible in the derived class.

//    - Protected inheritance is less common and is used when you want to restrict external access to the base class's interface while allowing derived classes to access its members.

 
//    class DerivedClass : protected BaseClass {
//        // publicMember is protected
//        // privateMember is not accessible
//        // protectedMember is protected
//    };
  