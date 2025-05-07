//cpp code to chek if two strings are anagram or not
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    std::string str1, str2;
    std::cout<<"Enter the 1st string";
    std::cin>>str1;
    std::cout<<"Enter 2nd string";
    std::cin>>str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if(str1== str2)
        std::cout<<"String is anagram";
    else
        std::cout<<"String is not anagram";
}
