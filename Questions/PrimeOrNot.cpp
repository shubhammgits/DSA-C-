#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;

    for(int i=1 ; i<=num ; i++){
        if(num%1==0 && num%i==0){
            cout<<num<<" is a prime number!";
        }

        else{
            cout<<num<<" is not a prime number!";
        }
    }
    return 0;
}