// calculate sum of first n number using for loop
#include<iostream>
using namespace std;
 
int main()
{
    cout<<"Sum of First 100 number :- ";
    int totalSum = 0;
    for(int i=1;i<=100;i++){
        totalSum = totalSum + i;
    }
    cout<<totalSum;
    return 0;
}