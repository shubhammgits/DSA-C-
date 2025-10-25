// Prime or not

#include<iostream>
using namespace std;

void checkPrime(int num){
    bool isPrime = true;
    for(int i=2; i*i<=num; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) cout<<num<<" is a Prime Number!";
    else cout<<num<<" is not a Prime Number!";
}

int main(){
    checkPrime(3);
    checkPrime(4);
    checkPrime(5);
    checkPrime(67);
    checkPrime(6677);
}