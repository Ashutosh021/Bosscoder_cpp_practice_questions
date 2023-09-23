// Input number and print the Day

#include<iostream>
using namespace std;
 
int main()
{
    int num;
    cout<<"Enter a number :- ";
    cin>>num;

    switch (num)
    {
    case 1:
        cout<<"\nMonday";
        break;
    case 2:
        cout<<"\nTuesday";
        break;
    case 3:
        cout<<"\nednesday";
        break;
    case 4:
        cout<<"\nThrusday";
        break;
    case 5:
        cout<<"\nFriday";
        break;
    case 6:
        cout<<"\nSaturday";
        break;
    case 7:
        cout<<"\nSunday";
        break;
    
    default:
        cout<<"\n INVALID INPUT";
        break;
    }
    return 0;
}