#include<iostream>
using namespace std;

void checkPrime(int num){
    bool isPrime = true;
    if(num < 2){
        cout<<num<<" is not a Prime Number!"<<endl;
        return;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) cout<<num<<" is a Prime Number!"<<endl;
    else cout<<num<<" is not a Prime Number!"<<endl;
}

int main(){
    checkPrime(0);
    checkPrime(1);
    checkPrime(3);
    checkPrime(4);
    checkPrime(7);
}