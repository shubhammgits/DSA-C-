#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> prices){
    int n = prices.size();
    int maxProfit = 0, bestBuy = prices[0];

    for(int i=1; i<n; i++){
        if(prices[i] < bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}
