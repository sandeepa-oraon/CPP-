/*
9. Fibonacci Number
*/
#include<iostream>
using namespace std;
int fibonacci(int num);
int main(){
    int num=6;
     cout << "Fibonacci number at position " << num << " is: " << fibonacci(num) << endl;

}
int fibonacci(int num){
    if (num == 0) return 0;  // base case 1
    if (num == 1) return 1;  // base case 2

    // recursive case
    return fibonacci(num - 1) + fibonacci(num - 2);
}