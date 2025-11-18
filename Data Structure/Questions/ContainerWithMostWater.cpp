#include<iostream>
#include<vector>
using namespace std;





// Brute Force:



// int maxWaterCont(vector<int> arr){
//     int maxWater = 0;
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             int width = j-i;
//             int height = min(arr[i], arr[j]);


//             int currWater = width * height;

//             maxWater = max(maxWater, currWater);
//         }
//     }

//     return maxWater;
// }

// int main(){
//     vector<int> arr = {1,8,6,2,5,4,8,3,7};
//     cout<<maxWaterCont(arr);
// }








// Optimised (2-pointer):

int maxArea(vector<int>& height) {
        int n = height.size();
        int lp=0, rp=n-1, maxWater=0;

        while(lp < rp){
            int w = rp-lp;
            int ht = min(height[lp], height[rp]);
            int currWater = w*ht;
            maxWater = max(maxWater, currWater);

            if(height[lp] < height[rp]) lp++;
            else rp--;
        }
    return maxWater;
}

int main(){
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(arr);
}