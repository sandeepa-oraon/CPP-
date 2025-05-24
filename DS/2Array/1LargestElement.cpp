/*
Input: nums = [3, 3, 6, 1]

Output: 6

Explanation: The largest element in array is 6
*/
#include<iostream>
using namespace std;
int main(){
    int max=0;
    int nums[]= {3, 3, 0, 99, -40};
    int size= sizeof(nums)/sizeof(nums[0]);
    for(int i=0; i<size; i++){
        if(nums[i]>max){
            max= nums[i];
        }
    }
    cout<<"The largest number is: "<<max;
}
