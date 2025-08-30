#include <iostream>
#include <climits>
using namespace std;





// To print all the subarrays:


// int main(){

//     int arr[5] = {1,2,3,4,5};
//     int n=5;

//     for(int st=0; st<n; st++){
//         for(int end=st; end<n; end++){
//             for(int i=st; i<=end; i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }










// To print the Maximum subarray sum (Brute force approach):


// int main(){
//     int arr[] = {3, -4, 5, 4, -1, 7, -8};
//     int n = 7;

//     int maxSum = INT_MIN;
//     for(int st=0; st<n; st++){
//         int currSum = 0;
//         for(int end=st; end<n; end++){

//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }

//     cout<<"Max Subarray Sum: "<<maxSum;


// }











// Kadane's Algorithm:


