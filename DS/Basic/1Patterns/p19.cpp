/*
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int sp=0;
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<(n-i); j++){
            cout<<"* ";
        }
        //space
        for(int j=0; j<sp; j++){
            cout<<"  ";
        }
        // star
        for(int j=0; j<(n-i); j++){
            cout<<"* ";
        }
        sp= sp+ 2;
        cout<<endl;
    }
    sp=8;
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        //space
        for(int j=0; j<sp; j++){
            cout<<"  ";
        }
        // star
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        sp= sp- 2;
        cout<<endl;
    }
}