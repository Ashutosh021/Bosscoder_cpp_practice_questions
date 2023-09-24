// find factorial using do while loop

#include<iostream>
using namespace std;
 
int main()
{
    int fact = 1 , i = 1;
    int n;
    cout<<"Enter n number :- ";
    cin>>n;
    do
    {
        fact = fact * i;
        i++;
    } while (i<=n);

    cout<<"\n Factorial is :- "<<fact;
    
    return 0;
}