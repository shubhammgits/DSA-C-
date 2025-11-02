// Swap min and max number of an array

#include<iostream>
#include<climits>
using namespace std;

void swapMinAndMax(int arr[], int sz){
    int minIndex = 0, maxIndex = 0;

    for(int i=1; i<sz; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }

        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    for(int i=0 ; i<sz; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {5,4,3,8,7,6,9};
    int sz = sizeof(arr)/sizeof(int);

    swapMinAndMax(arr,sz);
}