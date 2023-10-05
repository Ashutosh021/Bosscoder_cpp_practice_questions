// // What is the purpose of structures and enumerations in C++


// 1. Structures (structs):

//           - Grouping Data: Structures allow you to group together different types of variables (e.g., integers, floats, characters) 
//             into a single  user-defined data type.

//           - User-Defined Types: You can define your own custom data types using structs, making it easier to work with complex data.

//           - Passing Data: Used to pass a collection of related data as a single argument to functions or return them from functions. 


// Example
//         struct Point {
//             int x;
//             int y;
//         };




// 2. Enumerations (enums):
//             - Defining Symbolic Constants: Enums allow you to define a set of named symbolic constants, which are often more meaningful 
//                and self-explanatory than using raw integers or other data types. 
//             - Enumerated Values: You can use enums to represent a finite set of values. For example, days of the week, months of the year, error codes, or menu options.
//             - Switch Statements: Enums are often used in switch statements to make code more readable when you need to perform different actions based on specific values.

// Example
//         enum DaysOfWeek {
//             Sunday,
//             Monday,
//             Tuesday,
//             Wednesday=234543,
//             Thursday,
//             Friday,
//             Saturday
//         };

// enum DaysOfWeek obj;
// obj = Wednesday;

// cout<< obj ;     //3





//         enum DaysOfWeek {
//             Sunday=10,
//             Monday=20,
//             Tuesday=30,
//             Wednesday=40,
//             Thursday=50,
//             Friday=60,
//             Saturday=70
//         };

// enum DaysOfWeek obj;
// obj = Wednesday;

// cout<< obj ;     //40