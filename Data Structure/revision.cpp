#include<iostream>
#include<vector>
using namespace std;

int pairSum(int arr[], int sz, int target){
    int start=0, end=sz-1;

    while(start<end){
        int ps = arr[start]+arr[end];
        if(ps<target){
            start++;
        }
        else if(ps>target){
            end--;
        }

        else{
            return ps;
        }
    }
}

int main(){
    int arr[] = {2,7,11,15};
    int n = 4, target = 13;
    cout<<pairSum(arr, n, target);
}