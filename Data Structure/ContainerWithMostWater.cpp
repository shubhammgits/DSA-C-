#include<iostream>
#include<vector>
using namespace std;

int maxWaterCont(vector<int> arr){
    int maxWater = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int width = j-i;
            int height = max(arr[i], arr[j]);

            int area = height * width;

            maxWater = max(maxWater, area);
        }
    }

    return maxWater;
}