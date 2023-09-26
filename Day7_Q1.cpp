// Overload a function to find maximum of three numbers 

#include<iostream>
using namespace std;

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum of three numbers (overloaded)
int max(int a, int b, int c) {
    return max(max(a, b), c);
}

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int maximum = max(num1, num2, num3);

    cout << "Maximum number is: " << maximum << endl;

    return 0;
}
