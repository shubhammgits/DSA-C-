#include<iostream>
using namespace std;

int main(){
    int nums[] = {4,6,8,3,1,2,6,8,9};
    int n = sizeof(nums)/sizeof(int);

    int smallest = nums[0];
    int index = 0;
    for(int i=0; i<n; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            index = i;
        }
    }
    

    cout<<smallest;
}