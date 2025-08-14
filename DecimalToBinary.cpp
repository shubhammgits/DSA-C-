#include<iostream>
using namespace std;

int main(){
    int decNum = 6;
    int ans = 0;
    int pow = 1;
    while(decNum>0){

        int rem = decNum%2;
        decNum = decNum/2;

        ans = ans + (rem*pow);
        pow = pow * 10;
    }

    cout<<ans;
}