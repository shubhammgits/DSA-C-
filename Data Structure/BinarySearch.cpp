#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start=0, end=n-1;
    
    int mid = (start+end)/2;
    for(int i=start; i<end; i++){
        if(target > arr[mid]){
        start = mid + 1;
    }

    else if(target < arr[mid]){
        end = mid-1;
    }

    else {
        return mid;
    }
    }
}


int main(){
    int arr[] = {-1,0,3,5,7,9,11,13};
    int target = 0;
    int n = 8;
    cout<<binarySearch(arr,n, target);
}