// Create multiple bank account objects and demonstrate encapsulation by
// accessing and modifying their attributes.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    // Member function to get the account balance
    double getBalance() const {
        return balance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". New balance:" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
};

int main() {
    // Creating multiple bank account objects
    BankAccount account1("123456", 1000.0);
    BankAccount account2("789012", 500.0);

    // Accessing and modifying attributes through member functions
    cout << "Account 1 Balance: " << account1.getBalance() << endl;
    account1.deposit(200.0);
    account1.withdraw(50.0);

    cout << "\nAccount 2 Balance: " << account2.getBalance() << endl;
    account2.deposit(100.0);
    account2.withdraw(700.0);

    return 0;
}
