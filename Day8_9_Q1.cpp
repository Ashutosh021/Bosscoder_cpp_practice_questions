// fibanacci series with recursion

#include <iostream>
using namespace std;

int fiboRecur(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fiboRecur(n - 1) + fiboRecur(n - 2);
}

void printFibo(int n) {
    for (int i = 0; i < n; i++) {
        cout << fiboRecur(i) << " ";
    }
}

int main() {
    int n_terms;

    cout << "Enter the number of terms: ";
    cin >> n_terms;

    if (n_terms <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "Fibonacci Series:" << endl;
        printFibo(n_terms);
    }

    return 0;
}
