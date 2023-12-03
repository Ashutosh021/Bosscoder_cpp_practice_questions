// Explain the concept of passing
// pointers as function parameters and
// how it affects the original data.


// Passing pointers as function parameters in programming languages allows you to indirectly manipulate the original data outside the function. A pointer is a variable that stores the memory address of another variable. By passing a pointer to a function, you provide the function with the ability to access and modify the data stored at that memory address.

// Here's a general overview of how passing pointers as function parameters works and its effects on the original data:

// 1. **Memory Address Access:**

//    - When you pass a pointer to a function, you're essentially giving the function the memory address where the actual data is stored.
//    - The function can then use this address to read or modify the content of the original data.

// 2. **Direct Modification:**

//    - Since the function has the memory address of the original data, any changes made to the data inside the function directly affect the original data outside the function.
//    - This allows for more efficient use of memory, as you're working directly with the existing data rather than creating copies.

// 3. **Pass-by-Reference:**

//    - This mechanism is often referred to as "pass-by-reference" because you are passing the reference to the actual data in memory, not a copy of the data.
//    - Contrast this with "pass-by-value," where a copy of the data is passed to the function, and modifications inside the function do not affect the original data.

// 4. **Efficiency and Memory Usage:**

//    - Passing pointers can be more efficient than passing large data structures, especially for functions that need to modify the data.
//    - It reduces the need for copying large amounts of data, which can be resource-intensive.




// #include <stdio.h>

// // Function that modifies the value through a pointer
// void modifyValue(int *ptr) {
//     *ptr = 100;  // Modifying the value at the memory address pointed to by ptr
// }

// int main() {
//     int num = 42;

//     printf("Original value: %d\n", num);

//     // Passing the address of num to the function
//     modifyValue(&num);

//     printf("Modified value: %d\n", num);

//     return 0;
// }


// In this example, `modifyValue` takes a pointer to an integer as a parameter. It modifies the value stored at that memory address, and when the function is called in `main()`, it affects the original variable `num`.