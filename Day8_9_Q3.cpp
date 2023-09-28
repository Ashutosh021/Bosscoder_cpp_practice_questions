// factorial using recursion
#include<iostream>
using namespace std;

int findFact(int n){
    if(n==0 || n==1)
    {
        return 1;
    }

    return n*findFact(n-1);
}
 
int main()
{
    int  num;
    cout<<"\nEnter a number :- ";
    cin>>num;

    cout<<"Factorial is :- "<<findFact(num);
    return 0;
}