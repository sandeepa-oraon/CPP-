/*
to Check if a given number is prime or not
Example 1:
                Input:N = 2
               
                Output:True
                
                Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
                                        
                Example 2:
                Input:N =10                
                
                Output: False
                
                Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.  
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num <= 1){
        cout << "False" << endl;  // Not prime
        return 0;
    }
    bool isPrime= true;
    for(int i=2; i<= sqrt(num); i++){
        if(num%i == 0){
            isPrime= false;
            break;
        }
    }
    if(isPrime){
        cout << "True" << endl;   // Prime
    } else {
        cout << "False" << endl;  // Not prime
    }
    return 0;
}