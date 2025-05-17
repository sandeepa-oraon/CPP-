/*
  Example 1:
                Input:N = 12345
               
                Output:5
                
                Explanation:  The number 12345 has 5 digits.
                                        
                Example 2:
                Input:N = 7789                
                
                Output: 4
                
                Explanation: The number 7789 has 4 digits.    
*/

#include<iostream>
using namespace std;

int main(){
    int num, count=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num != 0){
        num= num/10;
        count++;
    }
    cout<<endl<<"total number: "<<count;
    return 0;
}