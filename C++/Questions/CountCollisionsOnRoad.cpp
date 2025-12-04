#include<iostream>
using namepsace std;

class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int l = 0;
        while (l < n && directions[l] == 'L') ++l;
        int r = n - 1;
        while (r >= 0 && directions[r] == 'R') --r;
        if (l > r) return 0;
        int cnt = 0;
        for (int i = l; i <= r; ++i) if (directions[i] != 'S') ++cnt;
        return cnt;
        }

};