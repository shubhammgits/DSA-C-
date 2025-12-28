#include<iostream>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
         int ans = 0;
        for (char c : s) {
            int steps = (26 + ('a' - c)) % 26;
            ans = max(ans, steps);
        }
        return ans;
    }
};