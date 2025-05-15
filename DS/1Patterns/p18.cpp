/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(char j='E'-i; j<='E'; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}