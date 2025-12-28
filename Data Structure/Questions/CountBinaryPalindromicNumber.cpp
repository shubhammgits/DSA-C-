#include <iostream>
using namespace std;

class Solution
{
public:
    using ull = unsigned long long;
    ull make_pal(ull half, int len)
    {
        ull pal = half;
        ull t = half;
        if (len & 1)
            t >>= 1;
        while (t)
        {
            pal = (pal << 1) | (t & 1ULL);
            t >>= 1;
        }
        return pal;
    }

    int countBinaryPalindromes(long long n_)
    {
        ull n = (ull)n_;
        if (n == 0)
            return 1;
        long long ans = 1;
        int max_len = 64 - __builtin_clzll(n);
        for (int len = 1; len < max_len; ++len)
        {
            int half = (len + 1) / 2;
            ans += 1LL << (half - 1);
        }
        int half_len = (max_len + 1) / 2;
        ull start = 1ULL << (half_len - 1);
        ull left = n >> (max_len - half_len);
        if (left >= start)
        {
            ans += (long long)(left - start);
            ull pal = make_pal(left, max_len);
            if (pal <= n)
                ++ans;
        }
        return (int)ans;
    }
};