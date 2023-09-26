// Explain the concept of function overloading and default arguments

#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Sum of doubles: " << add(3.5, 2.7) << endl;
    return 0;
}
