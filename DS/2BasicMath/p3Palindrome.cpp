/*
Check whether a number is palindrome or not
*/
#include<iostream>
using namespace std;

int main(){
    int num, digit, rev=0;
    cout<<"Enter a number to check if it is palindrome or not\n";
    cin>>num;
    int n= num;
    while(num!=0){
        digit= num%10;
        num= num/10;
        rev= (rev *10)+ digit;
    }
    if(rev == n){
        cout<<n<<" is palindrome number.";
    }else{
        cout<<n<<" is not palindrome number.";
    }
}