/*
  Example 1:
                    Example 1:
                Input:N = 12345
               
                Output:54321
                
                Explanation: The reverse of 12345 is 54321.
                                        
                Example 2:
                Input:N = 7789                
                
                Output: 9877
                
                Explanation: The reverse of number 7789 is 9877.    
*/

#include<iostream>
using namespace std;

int main(){
    int num, digit, n, rev=0, count=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num > 0){
        digit= num%10;
        rev= rev * 10 + digit;
        num= num/10;
    }
    cout<<endl<<"reverse number: "<<rev;
    return 0;
}