#include<iostream>
using namespace std;
 
int main()
{
    string str = "my name is ashu";
    string sub = "is";
    cout << "\n Your string location is :- ";
    
    int s = -1; // Initialize with -1 to indicate that the substring was not found initially
    int e = -1; // Initialize with -1 to indicate that the substring was not found initially
    int subLength = sub.length();

    for (int i = 0; i <= str.length() - subLength; i++) {
        if (str.substr(i, subLength) == sub) {
            s = i;
            e = i + subLength - 1; // Adjust the ending index
            break; // Exit the loop once the substring is found
        }
    }

    if (s != -1 && e != -1) {
        cout << "Substring found at positions " << s << " to " << e << endl;
    }
    else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
