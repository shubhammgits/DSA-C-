#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int sz = 6;
    for(int startInd=0; startInd<sz; startInd++){
        for(int endInd=startInd; endInd<sz; endInd++){
            for(int val: nums){
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }
}