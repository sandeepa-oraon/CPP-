/*
1             1 
1 2         2 1 
1 2 3     3 2 1 
1 2 3 4 4 3 2 1 
*/
#include<iostream>
using namespace std;

int main(){
    int n=4, i, j;
    int space = 2* (n-1);
    for(i=0; i<n; i++){
        //number
        for(j=0; j<=i; j++)
            cout<<j+1<<" ";
        // space
        for(j=0; j<space; j++)
            cout<<"  ";
        // number
        for(j=i+1; j>0; j--)
            cout<<j<<" ";
        cout<<endl;
        space= space-2;
    }

}