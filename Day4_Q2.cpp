// Input marks and output grades
#include<iostream>
using namespace std;
 
int main()
{
    int num;
    cout<<"Enter your Percentage :- ";
    cin>>num;

    if(num>=90 && num<=100){
        cout<<"\n Grade A";
    }
    else if(num>=80 && num<=90){
        cout<<"\n Grade B";
    }
    else if(num>=60 && num<=80){
        cout<<"\n Grade C";
    }
    else if(num>=50 && num<=60){
        cout<<"\n Grade D";
    }
    else if(num>=40 && num<=50){
        cout<<"\nGrade E";
    }
    else{
        cout<<"\n Grade F";
    }
    return 0;
}