/*
3. Print 1 to N using recursion
*/

#include<iostream>
using namespace std;
int fun(int );
int main(){
    int num=0;
    fun(num);
}
int fun(int num){
    if(num== 10){
        return 0;
    }
    num++;
    cout<<num<< "\n";
    fun(num);
    return 0;
}
