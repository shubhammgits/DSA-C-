#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[0]) return 1;
        }
        return 0;
    }
};