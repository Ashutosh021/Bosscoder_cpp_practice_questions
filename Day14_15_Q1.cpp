// Create a simple class to represent a car

#include<iostream>
using namespace std;

class car{
    private:
        string company;
        string model;
        string color;
        int price;
        string oilType;

    public:
        void getData(){
            cout<<"\nEnter company :- ";
            cin>>company;
            cout<<"\nEnter model :- ";
            cin>>model;
            cout<<"\nEnter color :- ";
            cin>>color;
            cout<<"\nEnter price :- ";
            cin>>price;
            cout<<"\nEnter oilType :- ";
            cin>>oilType;
        }

        void putData(){

            cout<<"\n\nData is Printing \n\n";
            cout<<"\nCompany name is :- "<<company;
            cout<<"\nmodel name is :- "<<model;
            cout<<"\ncolor name is :- "<<color;
            cout<<"\nprice name is :- "<<price;
            cout<<"\noilType name is :- "<<oilType;
        }
};
 
int main()
{
    car obj;
    obj.getData();
    obj.putData();
    return 0;
}