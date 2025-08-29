#include<iostream>
#include<vector>
using namespace std;

int singleNum(vector<int> nums){
    int ans=0;
    for(int val:nums){
        ans^=val;
    }
    return ans;
}

int main(){
    vector<int> nums = {4,2,3,2,3};
    cout<<singleNum(nums);
}