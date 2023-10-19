// Overload the "+" operator to concatenate two "Person" objects' names.

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string firstName;
    string lastName;

public:
    // Constructor to initialize Person with first and last names
    Person(const string& first, const string& last)
        : firstName(first), lastName(last) {}

    // Overloaded + operator for concatenating names
    Person operator+(const Person& other) const {
        // Concatenate the first names and last names
        return Person(firstName + other.firstName, lastName + other.lastName);
    }

    // Function to display the person's name
    void display() const {
        cout << "Name: " << firstName << " " << lastName << endl;
    }
};

int main() {
    // Creating two Person objects
    Person person1("Arun", "Mohan");
    Person person2("Varun", "Singh");

    // Concatenating names using the + operator
    Person combinedPerson = person1 + person2;

    // Displaying the results
    cout << "Person 1: ";
    person1.display();

    cout << "Person 2: ";
    person2.display();

    cout << "Combined Person: ";
    combinedPerson.display();

    return 0;
}
