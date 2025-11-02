// Reverse only a part of the array

#include<iostream>
using namespace std;

void reverseArray(int arr[], int sz, int start, int end){

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int sz = sizeof(arr)/sizeof(int);

    reverseArray(arr,sz, 2,4);
}