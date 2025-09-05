#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int sz = 7;

    int maxSum = 0;
    for(int start=0; start<sz; start++){
        int currSum=0;
        for(int end=start; end<sz; end++){
            currSum = currSum + arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<maxSum;
}