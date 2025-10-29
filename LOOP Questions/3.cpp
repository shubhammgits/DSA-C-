// Display n terms of natural numbers and their sum

#include<iostream>
using namespace std;

void nTermsSum(int n){
    int sum = 0;
    cout<<"Terms : ";
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
        sum += i;
    }
    cout<<endl<<"Sum of the terms : "<<sum<<endl;
}


int main(){
    nTermsSum(10);
}




