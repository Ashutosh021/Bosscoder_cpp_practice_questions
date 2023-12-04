// Create a base class "Vehicle" and a
// derived class "Car.'

#include<iostream>
using namespace std;

class Vehicle{
    public:
     string type = "4 Wheeler";
};

class Car : public Vehicle{
    public:
     string carName = "Volvo";
};
 
int main()
{
    Car obj;
    cout<<"Car Name: "<<obj.carName;
    cout<<"\nCar Type: "<<obj.type;
    return 0;
}