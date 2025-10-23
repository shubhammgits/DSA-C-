// Prime or not

#include<iostream>
using namespace std;

void checkPrime(int num){
    bool isPrime = true;
    for(int i=2; i*i<= num; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) cout<<num<<" is Prime!"<<endl;
    else cout<<num<<" is not Prime!"<<endl;
}

int main(){
    checkPrime(4);   
}