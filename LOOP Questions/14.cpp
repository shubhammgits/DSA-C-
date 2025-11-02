// Calculate sum and product of all numbers in an array

#include<iostream>
using namespace std;

void sumAndProduct(int arr[], int sz){
    int sum = 0;
    int prod = 1;
    for(int i=0; i<sz; i++){
        sum += arr[i];
        prod *= arr[i];
    }

    cout<<"Sum of all the elements inside the array = "<<sum<<endl;
    cout<<"Product of all the elements inside the array = "<<prod<<endl;
}

int main(){
    int arr[] = {2,5,3,4};
    int sz = 4;

    sumAndProduct(arr,sz);
}

