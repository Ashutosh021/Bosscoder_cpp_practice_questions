//  String is Palindrome or not

#include<iostream>
#include<cstring>
using namespace std;
 
int main()
{
    string str;
    cout<<"Enter a string :- ";
    getline(cin,str);
    string str2 = str;

    int i = 0;
    int j = str.length()-1;
    while(i<=j){
        swap(str[i],str[j]);
        i++;
        j--;
    }

    if(str == str2){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    return 0;
}