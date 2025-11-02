// Linear Search

#include<iostream>
using namespace std;

void linearSrch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){
            cout<<"Target found at index = "<<i<<endl;
        }
    }
}

int main(){
    int arr[] = {4,3,7,2,8,9,10};
    int target = 7;
    int sz = sizeof(arr)/sizeof(int);

    linearSrch(arr,sz,target);
}