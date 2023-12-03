// Write a function to sort an array of
// cars using pointers+


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string arr[10]= {"Volvo", "BMW", "Ford", "Tata" , "Hyundai" , "Honda" , "Maruti" ,"Ashok","Mahindra","Force"};
    sort(arr,arr+10);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}