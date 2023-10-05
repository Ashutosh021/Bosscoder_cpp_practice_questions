// Design a structure for storing information about books*

#include<iostream>
using namespace std;


// define structure
struct books
{
    string bookName;
    string authorName;
    int price;
};

 
int main()
{
    struct books obj;  //making object for books structure

    // populate the value
    obj.bookName = "Let Us C";
    obj.authorName = "Yashavant Kanetkar";
    obj.price = 300;


    // printing book information
    cout<<"Printing Book information :- ";
    cout<<"\nBook Name : "<<obj.bookName;
    cout<<"\nAuthor Name : "<<obj.authorName;
    cout<<"\nBook Price : "<<obj.price;
    return 0;
}