#include<iostream>
using namespace std;

int main(){
    int num;
    bool isPrime = true;
    cout<<"Enter the number :";
    cin>>num;

    for(int i=2 ; i<=num-1 ; i++){
        if(num%i==0){
            isPrime = false;
            break;
        }
    }
    return 0;
}