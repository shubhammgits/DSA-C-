#include<iostream>
using namespace std;

int sumAndProduct(int arr[], int size){
    int sum=0, prd=1;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
        prd = prd * arr[i];
    }
    cout<<"Sum of all the numbers : "<<sum;
    cout<<"Product of all the numbers : "<<prd;
}

int main(){
    int arr[] = {4,3,6,7,1,8,4,6,2,};
    int size = sizeof(arr)/sizeof(int);

    sumAndProduct(arr, size);
}