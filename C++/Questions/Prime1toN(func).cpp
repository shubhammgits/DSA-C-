#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
        return false;
        }  
    }

    return true;
}


int main(){
    int n=20;

    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;

 

}