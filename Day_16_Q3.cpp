// Create a class for a bank account with attributes for balance and
// account number, and implement methods for deposit and withdrawal.
// Add parameterized constructors and  a destructor to your bank account class.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;
    string accountNumber;

public:
    BankAccount(string accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance)
    {
        // we can also initlize like this instead of   --> : accountNumber(accNumber), balance(initialBalance)
        // accountNumber = accNumber;
        // balance = initialBalance;
        cout << "Account created with account number: " << accountNumber << endl;
    }

    ~BankAccount()
    {
        cout << "Account with account number " << accountNumber << " is being destroyed." << endl;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn " << amount << ". New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount myAccount("123456789", 1000.0);

    int num;

    do
    {
        cout << "\n Enter You Choice :- ";
        cout << "\n 1. Deposite Money :- ";
        cout << "\n 2. Withdrawl Money :- ";
        cout << "\n 0. exit :- ";
        cin >> num;

        if (num == 1)
        {
            double dptAmt;
            cout << "\n Enter amount want to be deposite :- ";
            cin >> dptAmt;
            myAccount.deposit(dptAmt);
        }
        else if (num == 2)
        {
            double widAmt;
            cout << "\n Enter amount want to be deposite :- ";
            cin >> widAmt;
            myAccount.withdraw(widAmt);
        }

    } while (num != 0);

    cout << "Final balance: " << myAccount.getBalance() << endl;

    return 0;
}
