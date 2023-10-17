// // Discuss the concept of encapsulation in OOP and how it relates to class
// // objects and member functions


// Encapsulation :

// It refers to the bundling of data (attributes) and the methods (functions or procedures) that operate on the data into a single unit known as a class. This unit serves as a blueprint for creating objects. Encapsulation hides the internal details of the object and provides an interface through which the object can be interacted with.

// Here's how encapsulation is related to classes, objects, and member functions:

// 1. Classes as a Unit of Encapsulation:
//    - In OOP, a class is a user-defined data type that encapsulates data members (attributes) and member functions (methods).
//    - The data members represent the state or characteristics of an object.
//    - The member functions define the behavior or operations that can be performed on the object.


// class Car {
// private:
//     // Data members (attributes)
//     string company;
//     string model;
//     int year;

// public:
//     // Member functions (methods)
//     void setCarDetails(string comp, string mod, int yr) {
//         company = comp;
//         model = mod;
//         year = yr;
//     }

//     void displayCarDetails() {
//         cout << "Company: " << company << ", Model: " << model << ", Year: " << year << endl;
//     }
// };


// 2. Objects as Instances of Classes:
//    - An object is an instance of a class, created based on the blueprint provided by the class.
//    - Objects encapsulate both data and behavior, representing a real-world entity.
//    - The data members and member functions of a class are accessed through objects.

// int main() {
//     // Creating objects
//     Car car1, car2;

//     // Accessing and manipulating data through member functions
//     car1.setCarDetails("Toyota", "Camry", 2022);
//     car2.setCarDetails("Honda", "Accord", 2021);

//     // Displaying information through member functions
//     car1.displayCarDetails();
//     car2.displayCarDetails();

//     return 0;
// }


// 3. Access Control Modifiers for Encapsulation:
//    - Access control modifiers like `private`, `protected`, and `public` are used to control the visibility of class members.
//    - `private` members are only accessible within the class, promoting encapsulation by restricting direct access from outside.


// class Example {
// private:
//     int privateData;  // Encapsulated data

// public:
//     void setPrivateData(int value) {
//         privateData = value;  // Accessible through a public member function
//     }
// };


// 4. Benefits of Encapsulation:
//    - Data Hiding
//    - Modularity
//    - Abstraction
