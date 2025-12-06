#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int countPartitions(vector<int> &nums, int k)
    {
        const int MOD = 1'000'000'007;
        int n = nums.size();

        vector<int> dp(n + 1), pref(n + 1);
        dp[0] = 1;
        pref[0] = 1;

        deque<int> dqMax, dqMin;
        int L = 0;

        for (int i = 0; i < n; ++i)
        {
            while (!dqMax.empty() && nums[dqMax.back()] <= nums[i])
                dqMax.pop_back();
            dqMax.push_back(i);

            while (!dqMin.empty() && nums[dqMin.back()] >= nums[i])
                dqMin.pop_back();
            dqMin.push_back(i);

            while (!dqMax.empty() && !dqMin.empty() &&
                   nums[dqMax.front()] - nums[dqMin.front()] > k)
            {
                if (dqMax.front() == L)
                    dqMax.pop_front();
                if (dqMin.front() == L)
                    dqMin.pop_front();
                L++;
            }

            int idx = i + 1;
            int firstValid = L + 1;
            long long ways = pref[idx - 1];
            int cutBefore = firstValid - 2;
            if (cutBefore >= 0)
                ways = (ways - pref[cutBefore] + MOD) % MOD;

            dp[idx] = ways;
            pref[idx] = (pref[idx - 1] + dp[idx]) % MOD;
        }

        return dp[n];
    }
};
