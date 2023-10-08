//Create a class representing a "Person" with attributes like name
// and age, and instantiate objects of this class,


#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

    void display(){
        cout<<"\n\nName is "<<name;
        cout<<"\nAge is "<<age;
    }
};
 
int main()
{
    Person obj;
    obj.name = "User ABC";
    obj.age = 21;

    cout<<"Name is "<<obj.name<<" and age is "<<obj.age;
    obj.display();
    return 0;
}