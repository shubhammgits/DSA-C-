#include<iostream>
using namespace std;

class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> ngr(n, -1);
        vector<int> pgl(n, -1);
        {
            stack<int> st;
            for (int i = 0; i < n; ++i){
                while (!st.empty() && nums[i] > nums[st.top()]){
                    ngr[st.top()] = i;
                    st.pop();
                }
                st.push(i);
            }
        }
        {
            stack<int> st;
            for (int i = 0; i < n; ++i){
                while (!st.empty() && nums[i] > nums[st.top()]) {
                    st.pop();
                }
                if (!st.empty()) pgl[i] = st.top();
                st.push(i);
            }
        }
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            if (ngr[i] != -1 && ngr[i] - i >= 2) ++ans;
            if (pgl[i] != -1 && i - pgl[i] >= 2) ++ans;
        }
        return ans;
    }
};