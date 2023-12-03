// Write a function that takes a pointer
// to an array and returns the sum of its
// elements

#include <iostream>
using namespace std;

int sumValue(int* arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array Element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = sumValue(arr,n);
    cout<<"Sum is "<<sum;
    return 0;
}
