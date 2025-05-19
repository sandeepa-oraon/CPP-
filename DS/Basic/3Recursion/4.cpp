/*
3. Print N to 1 using recursion
*/

#include<iostream>
using namespace std;
int fun(int );
int main(){
    int num=10;
    fun(num);
}
int fun(int num){
    if(num== 1){
        return 0;
    }
    num--;
    cout<<num<< "\n";
    fun(num);
    return 0;
}
