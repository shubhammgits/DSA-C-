#include<iostream>
#include<vector>
using namespace std;

int maxWaterCont(vector<int> arr){
    int maxWater = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int width = j-i;
            int height = min(arr[i], arr[j]);
            

            int currWater = width * height;

            maxWater = max(maxWater, currWater);
        }
    }

    return maxWater;
}

int main(){
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    cout<<maxWaterCont(arr);
}