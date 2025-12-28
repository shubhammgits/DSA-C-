// Display n terms of natural numbers and their sum

#include<iostream>
using namespace std;

void displaySum(int n){
    int sum = 0;
    cout<<"Natural Numbers : ";
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
        sum += i;
    }
    cout<<endl<<"Sum is : "<<sum;
}

int main(){
    displaySum(10);
}