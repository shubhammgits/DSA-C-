// Prime or not

#include<iostream>
using namespace std;

void isPrime(int n){
    bool isPrime = true;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) cout<<"Prime Number!";
    else cout<<"Not a prime number!";
}

int main(){
    isPrime(3);
    isPrime(4);
    isPrime(5);
}