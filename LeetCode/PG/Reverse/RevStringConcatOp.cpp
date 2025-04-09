//reverse the given string using concatenation operator
#include<iostream>
int main() {
    // std::cout << "Hello World!\n";
    string str="";
    string str1="Sandy";
    for( int i=str1.length()-1; i>=0; i--){
        str= str+ str1[i];
    }
    cout<<str;
}
