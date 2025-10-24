// Find prime number within a range

#include<iostream>
using namespace std;

int main(){
    int start = 1;
    int end = 100;

    for(int i=start; i<=end; i++){

        if(i<2) continue;

        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime == true) cout<<i<<" ";
    }
}