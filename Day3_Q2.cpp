// format the output of tempratue in Celcius and Fahrenheit side by side
#include<iostream>
using namespace std;
 
int main()
{
    float C=0;
    float F=0;
    cout<<"\nEnter temprature in Celcuis :- ";
    cin>>C;
    cout<<"\nEnter temprature in Farenheit :- ";
    cin>>F;

    cout<<"\nFormatting is done into int :- ";
    cout<<"\nTemprature in F :- "<<int(C);
    cout<<"\nTemprature in F :- "<<int(F);
    return 0;
}