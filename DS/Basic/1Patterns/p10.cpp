/*
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
*/

#include<iostream>
using namespace std;

int main(){
    int n=5, i, j;
    for(i=0; i< 2*n-1; i++){
        int a= i;
        if(i> n-1){
            a= 2*n - i-2;
        }
        for(j=0; j<=a; j++){
            // cout<<i<<j<<" *";
            cout<<" *";
        }
        cout<<endl;
    }
}