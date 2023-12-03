// + How can pointers be passed as
// function parameters in C++


#include <iostream>
using namespace std;

void modifyValue(int *ptr)
{
    (*ptr) += 10;
}

int main()
{
    int value = 5;
    int *ptr = &value;

    cout << "Before: " << value << endl;

    modifyValue(ptr);

    cout << "After: " << value << endl;

    return 0;
}
