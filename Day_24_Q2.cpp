// What is the difference between
// function overloading and overriding.



// 1. **Definition:**

//    - **Function Overloading:** Involves having multiple functions in the same class with the same name but different parameter lists (different number or types of parameters).
 
//    - **Function Overriding:** Involves providing a specific implementation for a method in the derived class that is already defined in the base class.



// 2. **Inheritance Requirement:**

//    - **Function Overloading:** Not dependent on inheritance. Overloading can occur within the same class.
  
//    - **Function Overriding:** Dependent on inheritance. It requires a base class with a virtual function that is overridden in the derived class.



// 3. **Base Class Involvement:**

//    - **Function Overloading:** Only one class is involved, and overloading is based on the function signature.
   
//    - **Function Overriding:** Requires a base class with a virtual function that is intended to be overridden in the derived class.



// 4. **Keyword Usage:**

//    - **Function Overloading:** No specific keyword is used for overloading. The compiler distinguishes functions based on their signatures.

//    - **Function Overriding:** The `virtual` keyword is used in the base class for the method that will be overridden. The `override` keyword is used in the derived class to indicate the intent to override a method.



// 5. **Compile-Time vs. Runtime Resolution:**

//    - **Function Overloading:** The decision is made at compile time based on the number and types of arguments passed to the function.

//    - **Function Overriding:** Can involve dynamic dispatch, and the decision is made at runtime based on the actual type of the object being referred to, allowing for polymorphic behavior.



// 6. **Use Case:**

//    - **Function Overloading:** Provides multiple versions of a function to handle different parameter types or numbers of parameters, enhancing code flexibility.

//    - **Function Overriding:** Enables specialization of behavior in derived classes, allowing them to provide specific implementations for methods defined in the base class. This supports polymorphism and runtime flexibility.




//    - **Function Overloading:** 

     class MathOperations {
     public:
         int add(int a, int b);
         double add(double a, double b);
     };

//    - **Function Overriding:**

     class Animal {
     public:
         virtual void makeSound();
     };
     
     class Dog : public Animal {
     public:
         void makeSound() override;
     };


