#include<iostream>
using namespace std;

int main(){
    int num = 7;
    for(int i=2; i*i<num; i++){
        if(num%i == 0){
            cout<<"Its not prime!";
            break;
        }

        else{
            cout<<"Its a prime number!";
            break;
        }
    }
}