// print all even number 1-20

#include<iostream>
using namespace std;
 
int main()
{
    for(int i=1;i<=20;i++){
        // if((i & 1)==0){    //with bitwise operator &
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}