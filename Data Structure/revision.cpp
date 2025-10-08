#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,3,6,2,8,5,1};
    int tar = 2;
    int sz = sizeof(arr)/sizeof(int);
    for(int i=0; i<sz; i++){
        if(arr[i] == tar){
            cout<<"Target found at "<<i<<" index!";
        }
    }
}