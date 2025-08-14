#include<iostream>
using namespace std;

int main(){
    int num;
    bool isPrime = true;
    cout<<"Enter the number :";
    cin>>num;



    // for(int i=2 ; i<=num-1 ; i++){
    //     if(num%i==0){
    //         isPrime = false;
    //         break;
    //     }
    // } 



    for(int i=2 ; i*i<=num ; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<num<<" is a prime number!";
    }

    else{
        cout<<num<<" is not a prime number!";
    }
    return 0;


}