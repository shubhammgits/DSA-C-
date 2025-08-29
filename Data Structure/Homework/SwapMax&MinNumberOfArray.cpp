#include<iostream>
using namespace std;

void swapMaxAndMin(int arr[], int size){
    int maxIndex=0, minIndex=0;

    for(int i=0; i<size; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }

        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    
}