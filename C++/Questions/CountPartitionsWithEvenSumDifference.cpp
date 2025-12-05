#include<iostream>

using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long S = 0;
        for (int x : nums)
            S += x;
        if (S % 2 == 0)
            return (int)nums.size() - 1;
        return 0;
    }
};