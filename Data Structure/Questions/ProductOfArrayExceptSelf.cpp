#include<iostream>
#include<vector>
using namespace std;




// Brute Force

// vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n, 1);
        
//         for(int i=0; i<n; i++){

//             for(int j=0; j<n; j++){
//                 if(i!=j){
//                     ans[i] *= nums[j];
//                 }
//             }
//         }

//     return ans;
// }

// int main(){
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = productExceptSelf(nums);

//     int n = nums.size();
//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
// }






// Brute Optimized (Time Complexity = O(n) and Space Complexity != O(1))

// vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n,1);
//         vector<int> prefix(n,1);
//         vector<int> suffix(n,1);

//         //prefix
//         for(int i=1; i<n; i++){
//             prefix[i] = prefix[i-1]*nums[i-1];
//         }

//         //suffix
//         for(int i=n-2; i>=0; i--){
//             suffix[i] = suffix[i+1]*nums[i+1];
//         }

//         //ans
//         for(int i=0; i<n; i++){
//             ans[i] = prefix[i] * suffix[i];
//         }

//         return ans;
// }


// int main(){
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = productExceptSelf(nums);

//     int n = nums.size();
//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
// }











// Brute Most Optimized (Time Complexity = O(n) and Space Complexity = O(1))




vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        for(int i=1; i<n; i++){
            ans[i] = ans[i-1]*nums[i-1];
        }

        int suffix = 1;
        for(int i=n-2; i>=0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }

        return ans;
    }


    int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptSelf(nums);

    int n = nums.size();
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}