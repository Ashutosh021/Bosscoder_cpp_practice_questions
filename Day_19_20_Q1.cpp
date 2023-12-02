// // Explain the concept of pointers and
// // dynamic memory allocation in C++.

// Pointers:

// In C++, a pointer is a variable that stores the memory address of another variable. It "points to" the memory location of a data type. Pointers provide a way to indirectly access the value of a variable by referring to its memory address. The declaration of a pointer is done using the asterisk (*) symbol.

// Example:

// int x = 10;
// int *ptr;    // Declare a pointer to an integer
// ptr = &x;    // Assign the address of x to the pointer

// cout << "Value of x: " << x << endl;
// cout << "Address of x: " << &x << endl;
// cout << "Value pointed to by ptr: " << *ptr << endl;  // Dereferencing the pointer


// In the example above, `ptr` is a pointer that holds the memory address of the variable `x`. The `*ptr` syntax is used to access the value at the memory location pointed to by ptr.




// Dynamic Memory Allocation:

// Dynamic memory allocation is the process of allocating memory during the execution of a program. Unlike static memory allocation, where memory is allocated at compile time, dynamic memory allocation allows you to allocate memory at runtime.

// C++ provides two operators for dynamic memory allocation and deallocation:

// 1. `new`: Allocates memory dynamically and returns a pointer to the allocated memory.

   
//     int *arr = new int[5];  // Allocates an array of 5 integers
   

// 2. `delete`: Deallocates memory that was allocated using `new`.

 
//     delete[] arr;  // Deallocates the memory allocated for the array
   

// Example:

// int *ptr = new int;  // Allocate memory for an integer
// *ptr = 42;           // Assign a value to the dynamically allocated memory

// cout << "Value: " << *ptr << endl;

// delete ptr;         // Deallocate the dynamically allocated memory


// It's important to note that when using dynamic memory allocation, you are responsible for releasing the allocated memory using `delete` to avoid memory leaks.

