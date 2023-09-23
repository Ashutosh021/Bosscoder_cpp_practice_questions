// simple calculator

#include<iostream>
using namespace std;
 
int main()
{
    int a;
    int b;

    cout<<"\nEnter a :- ";
    cin>>a;
    cout<<"\nEnter b :- ";
    cin>>b;

    char oper;
    cout<<"\nEnter Operator :- ";
    cin>>oper;

    switch (oper)
    {
    case '+':
        cout<<"\nAddition a+b = "<<a+b;
        break;
    case '-':
        cout<<"\nSubtraction a-b = "<<a-b;
        break;
    case '*':
        cout<<"\nMultiplication a*b = "<<a*b;
        break;
    case '/':
        cout<<"\nDivision a/b = "<<a/b;
        break;
    
    default:
        break;
    }
    return 0;
}