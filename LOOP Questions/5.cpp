// Perfect number or not

#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int factSum = 0;
    for(int i=1; i<n; i++){
        if(n%i ==0){
            factSum += i;
        }
    }

    if(factSum == n) cout<<"Perfect Number!";
    else cout<<"Not a perfect number!";
}