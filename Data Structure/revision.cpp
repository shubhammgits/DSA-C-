#include<iostream>
#include<vector>
using namespace std;

int singleNum(vector<int> nums){
    int ans=0;
    for(int val : nums){
        ans ^= val;
    }
    return ans;
}

int main(){
    vector<int> nums = {1,5,2,5,1};
    cout<<singleNum(nums);
}