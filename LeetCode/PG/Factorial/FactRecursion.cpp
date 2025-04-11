#include<iostream>
int factorial(int num);

int main() {
    // std::cout << "Hello World!\n";
    int num;
    cin>>num;
    int fact= factorial(num);
    cout<<fact;
}
int factorial(int num){
    if(num==0 || num == 1)
        return 1;
    else
        return num*factorial(num-1 );
}
