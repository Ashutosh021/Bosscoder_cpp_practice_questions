// function to print a table of a given number 
#include<iostream>
using namespace std;

void printTable(int n)
{
    for(int i=1;i<=10;i++){
        cout<<"\n"<<n<<" * "<<i<<" = "<<n*i;
    }
}
 
int main()
{
    int n;
    cout<<"Enter a  number :- ";
    cin>>n;

    printTable(n);
    return 0;
}