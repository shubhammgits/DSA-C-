#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    int sz = nums.size();
    vector<int> ans;
    for(int i=0; i<sz; i++){
        for(int j=i+1; j<sz; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 7;
    pairSum(nums, target);
}