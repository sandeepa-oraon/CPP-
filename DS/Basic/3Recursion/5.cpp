/*
5. Sum of first N numbers
*/

#include<iostream>
using namespace std;
int sum(int );
int main(){
    int num;
    cout<<"enter the range of number to add: ";
    cin>>num;
    int res= sum(num);
    cout<<"the sum is: "<<res;
}
int sum(int num){
    
    if(num== 0){
        return 0;
    }
    return num + sum(num - 1);
}
