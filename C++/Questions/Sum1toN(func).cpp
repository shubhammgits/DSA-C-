#include<iostream>
using namespace std;

int sum1toN(int n){
    int sum=0;

    for(int i=0; i<=n; i++){
        sum+=i;
    }

    cout<<endl;
    return sum;
}

int main(){
    cout<<sum1toN(10);
    cout<<sum1toN(100);
}