#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    int sz = nums.size();
    int start=0, end=sz-1;
    vector<int> ans;
    
    while(start<end){
        int ps = nums[start] + nums[end];
        if(ps>target) end--;
        else if(ps<target) start++;
        else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> ans = pairSum(nums, target);
    cout<<ans[0]<<" "<<ans[1];
}