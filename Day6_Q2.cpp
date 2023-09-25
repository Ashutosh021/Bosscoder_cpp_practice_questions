// function to check given year is leap year or not

#include<iostream>
using namespace std;

int chekYear(int year){
    bool result = year % 4;
    return result;
}
 
int main()
{
    int year;
    cout<<"\nEnter the year :- ";
    cin>>year;

    int ans = chekYear(year);
    if(ans==1){
        cout<<"Not Leap Year";
    }else{
        cout<<"Leap Year";
    }
    return 0;
}