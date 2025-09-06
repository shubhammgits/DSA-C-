#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> nums){
    int n = nums.size();
    int freq = 0;
    for(int val : nums){
        for(int elem : nums){
            if(elem == val){
                freq++;
            }
        }

        if(freq > n/2){
            return val;
        }
    }

    return -1;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
}