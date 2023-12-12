Explain multiple inheritance and
virtual functions in C++.


**Multiple Inheritance:**

Multiple inheritance in C++ refers to a feature where a class can inherit properties and behaviors from more than one base class. In other words, a class can have more than one direct ancestor. The syntax for multiple inheritance is as follows:

```cpp
class DerivedClass : public BaseClass1, public BaseClass2 {
    // ...
};
```

Here, `DerivedClass` inherits from both `BaseClass1` and `BaseClass2`. Each base class contributes its members to the derived class. While multiple inheritance provides flexibility in organizing and reusing code, it can lead to complications like the diamond problem.

**The Diamond Problem:**

The diamond problem occurs in multiple inheritance when a class inherits from two classes that have a common ancestor. If the derived class calls a method or accesses a member variable that is ambiguous due to the common ancestor, the compiler may not know which version of that method or variable to use. C++ resolves the diamond problem using virtual inheritance.

**Virtual Functions:**

Virtual functions play a crucial role in achieving polymorphism, especially in the context of inheritance. A virtual function is a member function declared within a base class with the `virtual` keyword. When a derived class overrides a virtual function, it provides its own implementation.

```cpp
class BaseClass {
public:
    virtual void someFunction() {
        // Base class implementation
    }
};

class DerivedClass : public BaseClass {
public:
    void someFunction() override {
        // Derived class implementation
    }
};
```

Key points about virtual functions:

1. **Virtual Function Syntax:**
   ```cpp
   virtual returnType functionName(parameters) {
       // Function implementation
   }
   ```

2. **Dynamic Dispatch:**
   - Virtual functions enable dynamic dispatch, where the appropriate function is called based on the actual type of the object at runtime.
   - This is crucial for achieving polymorphic behavior, allowing a pointer or reference to a base class to be used to refer to objects of derived classes.

3. **Override Keyword:**
   - In C++11 and later, you can use the `override` keyword when declaring an overridden function to explicitly indicate the intent to override a virtual function.

```cpp
class Base {
public:
    virtual void display() const {
        cout << "Base class display" << endl;
    }
};

class Derived1 : public Base {
public:
    void display() const override {
        cout << "Derived1 class display" << endl;
    }
};

class Derived2 : public Base {
public:
    void display() const override {
        cout << "Derived2 class display" << endl;
    }
};

int main() {
    Base* ptr1 = new Derived1();
    Base* ptr2 = new Derived2();

    ptr1->display();  // Calls Derived1 class display
    ptr2->display();  // Calls Derived2 class display

    delete ptr1;
    delete ptr2;

    return 0;
}
```

In this example, the `display` function is a virtual function in the base class `Base`. When the `display` function is called through pointers to base class objects pointing to objects of derived classes, the appropriate overridden version is called based on the actual type of the object, demonstrating polymorphism.