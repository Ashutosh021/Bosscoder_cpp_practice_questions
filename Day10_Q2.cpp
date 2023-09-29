// sum all element of array and find average 
#include<iostream>
using namespace std;
 
int main()
{
    int arr[5]={3,6,9,13,17};
    int sum = 0;
    for(int i=0;i<5;i++){
     sum = sum + arr[i]; 
    }
    cout<<"Average of arr :- "<<endl;
    cout<<"sum :- "<<sum<<endl;
    cout<<"Avg :- "<<sum/5;
    return 0;
}