// 4) How is a multidimensional array stored in memory in C++?

// Multi - dimensional arrays are stored in memory as a contiguous block of data,




// Row-Major Order:

// 2D array arr[row][col], elements in the same row are stored next to each other in memory.
// This is the default behavior for C and C++ arrays.

// int arr[3][4] = {
//     {1, 2, 3, 4},
//     {5, 6, 7, 8},
//     {9, 10, 11, 12}
// };

// store like this 
// 1 2 3 4 5 6 7 8 9 10 11 12






// Column-Major Order:

// int arr[3][4] = {
//     {1, 2, 3, 4},
//     {5, 6, 7, 8},
//     {9, 10, 11, 12}
// };

// store like this 
// 1 5 9 2 6 10 3 7 11 4 8 12

