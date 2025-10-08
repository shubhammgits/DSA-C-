#include<iostream>
using namespace std;

void reverseArr(int arr[], int sz){
    int start = 0, end = sz-1;
    for(int i=start; i<end; i++){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int sz=5;

    reverseArr(arr,sz);
}