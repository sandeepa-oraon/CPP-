/*
1. Understand recursion by print something N times
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
    cout<<num<<". "<<name<<" \n";
    num++;
    if(num<10){
        fun(num, name);
    }
    return 0;
}