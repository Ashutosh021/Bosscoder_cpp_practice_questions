#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    string color;
    int price;
    string oilType;

public:

    void showCarData() {
        cout << "\n Car Details are :- ";
        cout << "\nCompany name is :- " << company;
        cout << "\nModel is :- " << model;
        cout << "\nColor is :- " << color;
        cout << "\nPrice is :- " << price;
        cout << "\nOilType is :- " << oilType;
    }

  void inputCarDetails() {
    // why we use getLine(cin,variable_name) ->becuz when we take input with space then it skip the next input statement
    cout << "\nEnter Car Details :- ";
    
    cout << "\nEnter Company name :- ";
    getline(cin, company);

    cout << "Enter model :- ";
    getline(cin, model);

    cout << "Enter color :- ";
    getline(cin, color);

    cout << "Enter price :- ";
    cin >> price;

    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Enter oilType :- ";
    getline(cin, oilType);
}

};

int main() {
    Car myCar1;
    myCar1.inputCarDetails();
    myCar1.showCarData();

    return 0;
}
