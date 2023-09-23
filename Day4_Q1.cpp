// WAP to check entered number is + , - , 0
#include<iostream>
using namespace std;
 
int main()
{
    int num;
    cout<<"Enter a number :- ";
    cin>>num;

    if(num>0){
        cout<<"\npositive";
    }
    else if(num<0){
        cout<<"\nNegative";
    }
    else{
        cout<<"\nZERO";
    }
    return 0;
}