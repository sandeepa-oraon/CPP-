/*
8. Check if a string is palindrome or not
*/
#include<iostream>
using namespace std;
int palin(string str, int, int);

int main(){
    string str="madam";
    // int str='ndskf';

    int res= palin(str, 0, str.length()-1);
    if(res){
        cout<<"String is Palindrome.";
    }
    else
        cout<<"String is not palindrome.";
}

int palin(string str, int start, int end){
    if(start >= end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    return palin(str, start+ 1, end-1);
}