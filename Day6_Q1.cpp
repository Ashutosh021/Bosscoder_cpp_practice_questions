// function that calculate square of a number and return result

#include<iostream>
using namespace std;

int squr(int num){
    int result = num * num;
    return result;
}
 
int main()
{
    int num;
    cout<<"\n Enter a number :- ";
    cin>>num;

    cout<<squr(num);
    return 0;
}