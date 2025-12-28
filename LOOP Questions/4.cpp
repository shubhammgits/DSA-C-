// Prime or not!

#include<iostream>
using namespace std;

void isPrime(int num){
    bool isPrime = true;

    if(num<=1){
        isPrime = false;
    }
    
    for(int i=2; i*i<=num; i++){
        if(num%i == 0) {
            isPrime = false;
            break;
        }
   }
    if(isPrime == true) cout<<num<<" is Prime!";
    if(isPrime == false)cout<<num<<" is not Prime!";
}

int main(){
    isPrime(3);
}