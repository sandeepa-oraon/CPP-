/*
2. Print name N times using recursion
*/
#include<iostream>
using namespace std;
int fun(int , string);
int main(){
    int num=0;
    string name= "Sandy";
    fun(num, name);
}
int fun(int num, string name){
    cout<<num<<" ";
    num++;
    if(num<10){
        fun(num, name);
    }
    return 0;
}