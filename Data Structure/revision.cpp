#include<iostream>
using namespace std;

int sum1toN(int n){
    int sum = 0;
    for(int i=0; i<=n; i++){
        if(n%2 != 0){
            sum += n;
        }
    }
    return sum;
}

int main(){
    int n = 10;
    cout<<"Sum ="<<sum1toN(n);
}