// Find prime numbers within range

#include<iostream>
using namespace std;

void primeInRange(int start, int end){

    for(int i=start; i<=end; i++){

        if(i<2) continue;

        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime == true) cout<<i<<" ";

    }
}

int main(){
    primeInRange(1,100);
}