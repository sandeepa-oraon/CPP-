/*
Input: n = 153

Output: true

Explanation: Number of digits : 3.

1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153.

Therefore, it is an Armstrong number.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num, count=0, digit, sum=0;
    cin>>num;
    int onum= num;
    int temp= onum;
    while(temp!= 0){
        temp= temp/10;
        count++;
    }
    temp= onum;
    while(temp!=0){
        digit= temp%10; 
        int n=round(pow(digit, count));
        sum= sum+ n;
        temp= temp/10;
    }
    if(sum== onum){
        cout<<num<<" is armstrong number.";
    }else{
        cout<<num<<" is not armstrong number.";
    }
}