// Display n terms of natural numbers and their sum

#include<iostream>
using namespace std;

int naturalSum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
        sum += i;
    }
    cout<<"The sum of "<<n<<"terms :"<<sum;
}

int main(){
    naturalSum(10);
}


