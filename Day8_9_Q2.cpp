// declare a global variable and a static variable inside a function and compare their lifecycle


// Global Variable        --> we can access this variable anywhere


// #include<iostream>
// using namespace std;

// int gblVar=10;

// void func1(){
//     cout<<"glbVar :- "<<gblVar;
// }
 
// int main()
// {
//     cout<<"glbVar :- "<<gblVar;

//     if(1){
//     cout<<"glbVar :- "<<gblVar;
//     }
//     return 0;
// }


// Static Variable        -> value is incremented every time e called it

#include <iostream>
using namespace std;
int a = 5;


void myFunction() {
    static int staticVariable = 5; 
    cout << "Static Variable: " << staticVariable<<endl;
    staticVariable++;
}

int main() {
    myFunction();
    myFunction();
    return 0;
}
