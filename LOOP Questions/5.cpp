// Perfect numbers between 1 and 500

#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int factSum = 0;
    for(int i=1; i<6; i++){
        if(n%i ==0){
            factSum += i;
        }
    }

    if(factSum == n) cout<<"Perfect Number!";
    else cout<<"Not a perfect number!";
}