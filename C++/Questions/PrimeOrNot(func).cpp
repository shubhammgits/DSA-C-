#include<iostream>
using namespace std;

int primeOrNot(int num){
    bool isPrime = true;

    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<num<<" is a Prime number"<<endl;
    }
    else{
        cout<<num<<" is not a Prime Number"<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    primeOrNot(n);
    return 0;
}