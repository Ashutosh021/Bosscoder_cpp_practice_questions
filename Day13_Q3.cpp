//  Define a structure for storing information about students anda create an array of student records

#include <iostream>
#include <string>
using namespace std;
// Define the structure for a student
struct Student {
    string name;
    int age;
    double rollNo;
};

int main() {
    int n = 3; // Define the number of students

    // Create an array of student records
    Student studentArray[n];

    // Populate the student records
    for (int i = 0; i < n; ++i) {
        cout << "Enter information for student #" << i + 1 << ":\n";
        
        cout << "Name : ";
        cin >> studentArray[i].name;
        
        cout << "Age : ";
        cin >> studentArray[i].age;
        
        cout << "Roll No : ";
        cin >> studentArray[i].rollNo;
    }

    // Display the student records
    cout << "\nStudent Records:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Student #" << i + 1 << ":\n";
        cout << "Name : " << studentArray[i].name << endl;
        cout << "Age : " << studentArray[i].age << endl;
        cout << "Roll No : " << studentArray[i].rollNo << endl;
        cout << endl;
    }

    return 0;
}
