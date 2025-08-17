#include<iostream>
using namespace std;

int binToDec(int binNum){
    int ans = 0, pow = 1;
    while(binNum>0){
        int rem = binNum%10;
        binNum= binNum/10;

        ans += rem*pow;
        pow *= 2;
    }

    return ans;
}


int main(){
    int binNum = 1100101;
    cout<< binToDec(binNum)<<endl;
    return 0;
}