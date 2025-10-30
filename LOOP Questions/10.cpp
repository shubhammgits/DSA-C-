// Factors of a number:

#include<iostream>
using namespace std;

void factors(int num){
    cout<<"Factors of "<<num<<" are : ";
    for(int i=1; i<=num; i++){
        if(num%i == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    factors(6);
    factors(10);
    factors(25);
}