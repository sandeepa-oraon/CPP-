/*
6. Factorial of N numbers
*/

#include<iostream>
using namespace std;
int factorial(int );
int main(){
    int num;
    cout<<"enter the number: \n";
    cin>>num;
    int fact= factorial(num);
    cout<<"the factorial is: "<<fact;
}
int factorial(int num){
    
    if(num== 1){
        return 1;
    }
    return num * factorial(num - 1);
}
