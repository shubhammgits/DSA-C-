// Find the last prime number before a given number

#include<iostream>
using namespace std;

void lastPrime(int end){

    int lastPrimeNo = -1;
    for(int i=2; i<end; i++){
        if(i<2) continue;
        bool isPrime = true;

        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            lastPrimeNo = i;
        }
    }

    if(lastPrimeNo != -1){
        cout<<"Last prime number before "<<end<<" is : "<<lastPrimeNo<<endl;
    }

    else{
        cout<<"No prime number found before "<<end<<endl;
    }
}

int main(){
    lastPrime(3);
}