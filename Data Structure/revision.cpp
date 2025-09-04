#include<iostream>
using namespace std;

int linearSrch(int arr[], int target, int sz){
    for(int i=0; i<sz; i++){
        if(arr[i]==target){
            cout<<"Target is at "<<i<<" index";
        }
    }
}

int main(){
    int arr[] = {3,2,5,6,4,7,2,8,9};
    int sz = sizeof(arr)/sizeof(int);
    int target = 7;

    cout<<linearSrch(arr, target, sz);
}