/*
7. Reverse an array
*/

#include<iostream>
using namespace std;
int reverse(int arr[], int, int);
int main(){
    int arr[]= {1,2,1,1,5,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    int res= reverse(arr, 0, size-1);
    cout<<"[";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int reverse(int arr[], int start, int end){
    if(start >= end)
        return 0;

    int temp= arr[start];
    arr[start]= arr[end];
    arr[end]= temp;
    reverse(arr, start+1, end-1);
    return 0;
}