#include<iostream>
using namespace std;

int max(int a , int b, int c){
    int mx = max(a , max(b,c));
}
 
int main()
{
    cout<<"\nMaximum of two numbers :- ";
    cout<<max(3,5);
    cout<<"\nMaximum of three numbers :- ";
    cout<<max(9,5,4);
    return 0;
}