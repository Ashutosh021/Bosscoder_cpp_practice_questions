// Create a dynamic array of "Person"
// objects and manipulate them using pointers

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    
public:
    Person(string name, int age) : name(name), age(age) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

};

int main() {
    const int numPersons = 3;

    // Create a dynamic array of Person objects
    Person *personArray = new Person[numPersons]{
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22}
    };

    // Use pointers to manipulate the Person objects
    for (int i = 0; i < numPersons; ++i) {
        Person *currentPerson = &personArray[i];

        // Display information using pointers
        cout << "Person " << i + 1 << ":" << endl;
        currentPerson->display();

        // Modify information using pointers
        currentPerson->display();
    }

    // Don't forget to delete the dynamically allocated array
    delete[] personArray;

    return 0;
}
