#include<iostream>
using namespace std;

class Vehicle {
public:
    string str1 = "This is Public";
    
protected:
    string str2 = "This is Protected";

private:
    string str3 = "This is Private";
};

class Car : public Vehicle {
public:
    void display() {
        cout << "Car Name: " << str1;      // Public member is accessible
        cout << "\nCar Type: " << str2;    // Protected member is accessible
        // cout << "\nCar Type: " << str3; // Private member is NOT accessible
    }
};

int main() {
    Car obj;
    obj.display();
    return 0;
}
