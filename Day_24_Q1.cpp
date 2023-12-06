// Define function overriding and its
// significance in polymorphism.
// Provide examples.


// Function overriding is a concept in object-oriented programming where a derived class provides a specific implementation for a method that is already defined in its base class. The overridden method in the derived class has the same name, return type, and parameters as the method in the base class. When a derived class overrides a method, it provides its own implementation, and the overridden method in the base class is replaced by the new implementation in the derived class.

// The significance of function overriding lies in its connection to polymorphism. Polymorphism allows objects of different types to be treated as objects of a common base type. When a base class reference or pointer is used to refer to an object of a derived class, and a method is called on that reference or pointer, the overridden method in the derived class is invoked. This enables dynamic method dispatch, where the appropriate method implementation is determined at runtime based on the actual type of the object being referred to.



#include <iostream>
#include <string>

class Animal {
public:
    virtual void makeSound()  {
        std::cout << "Animal makes a generic sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound()  {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound()  {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->makeSound();  // Calls Dog's makeSound()

    animalPtr = &cat;
    animalPtr->makeSound();  // Calls Cat's makeSound()

    return 0;
}
