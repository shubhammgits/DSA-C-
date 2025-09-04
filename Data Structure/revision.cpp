#include<iostream>
using namespace std;

int sum1toN(int n){
    int sum = 0;
    for(int i=1; i<n; i++){
        if(i%2 != 0){
            sum += n;
        }
    }
    return sum;
}

int main(){
    int n = 5;
    cout<<"Sum ="<<sum1toN(n);
}