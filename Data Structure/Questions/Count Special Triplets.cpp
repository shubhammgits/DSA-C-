#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const long long MOD = 1000000007LL;
        int n = nums.size();
        if(n < 3) return 0;

        int maxV = 0;
        for(int x : nums) maxV = max(maxV, x);

        int maxVal = 2 * maxV;

        vector<long long> cntLeft(maxVal + 1, 0), cntRight(maxVal + 1, 0);
        for(int x : nums) cntRight[x]++;

        long long ans = 0;

        for(int j = 0; j < n; j++) {

            int x = nums[j];
            cntRight[x]--;

            long long target = 2LL * x;
            if(target <= maxVal) {
                long long leftCount = cntLeft[target];
                long long rightCount = cntRight[target];
                ans = (ans + (leftCount * rightCount) % MOD) % MOD;
            }

            cntLeft[x]++;
        }

        return (int)ans;
    }
};