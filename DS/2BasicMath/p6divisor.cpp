/* 
You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

Input: n = 6

Output = [1, 2, 3, 6]

Explanation: The divisors of 6 are 1, 2, 3, 6.
*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i=1; i<= num; i++){
        if(num%i ==0 ){
            cout<< i<<" ";
        }
    }
}
