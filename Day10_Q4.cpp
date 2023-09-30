// find the largest and smallest element with index from array

#include<iostream>
using namespace std;
 
int main()
{
    int arr[10]={19,74,47,9,34,23,14,16,76,99};
    int max = -1;
    int min = 2000;

    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max = arr[i];
        }

        if(arr[i]< min){
            min = arr[i];
        }

    }

    cout<<"\n Max = "<<max;
    cout<<"\n Min = "<<min;
    return 0;
}