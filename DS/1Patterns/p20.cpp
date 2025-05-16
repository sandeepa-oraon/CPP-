/*
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int space= (2*n -2);
    for(int i=0; i<=(2* n- 2); i++){
        int star= i;
        if(i>=n){
            star= (2*n-i)-2 ;
        }
        // star
        for(int j=0; j<=star; j++){
            cout<<"* ";
        }
        // space
        for( int j=0; j<space; j++){
            cout<<"  ";
        }

        // star
        for(int j=0; j<=star; j++){
            cout<<"* ";
        }
        if(i>=n-1){
            space= space + 2;
        }else{
            space= space - 2;
        }
        cout<<endl;
    }
}