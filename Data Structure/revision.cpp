#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    cout<<nums.size()<<endl;
    
    for(int val : nums){
        cout<<val<<" ";
    }
    cout<<endl;

    nums.push_back(6);
    cout<<nums.size()<<endl;

    for(int val : nums){
        cout<<val<<" ";
    }
}