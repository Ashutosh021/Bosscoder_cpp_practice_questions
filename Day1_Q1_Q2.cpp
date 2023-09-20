// Q1   Difference between C and CPP

//       C

// 1. procedural programming language
// 2. does not support OOP features like classes, objects, inheritance, and polymorphism.
// 3. does not have a standardized library like STL.
// 4. memory management is manual. Programmers are responsible for allocating and deallocating memory using functions like malloc and free.
// 5. does not support function overloading, which means you cannot define multiple functions with the same name but different parameter lists.
// 6. does not support operator overloading.
// 7. C does not have built-in support for exception handling.
// 8. commonly used for system-level programming, embedded systems, and when fine-grained control over memory and hardware is required.

//   C++

// 1. multi-paradigm programming language. It builds on C and includes features of object-oriented programming (OOP).
// 2. includes the Standard Template Library (STL)
// 3. supports inheritance, polymorphism, and other OOP concepts. Standard Template Library (STL)
// 4. concept of constructors and destructors, making memory management more automatic through classes and objects
// 5. allows function overloading, which enables you to define multiple functions with the same name but different parameters
// 6. allows you to overload operators for user-defined types, making it possible to create custom behaviors for operators like +, -, *, etc
// 7. C++ includes exception handling mechanisms with try, catch, and throw keywords, which make it easier to manage and handle errors
// 8. used in a wide range of applications, including desktop software, game development, large-scale applications, and systems where OOP and abstraction are beneficial.






// Q2    Explain the compilation process in C++

// The compilation process in C++ is a multi-stage process that transforms your human-readable C++ source code into machine-executable code. 

// 1. preproccessing      -> process the code it usually inculde header file , macro , remove comments
// 2. compilation          -> convert proccessed code into assembly code
// 3. Assembly              -> some compiler have this state to convert assembly code into binary code
// 4. Linking               -> it combine assemby code header file into a single excutable file  (or making .exe file)