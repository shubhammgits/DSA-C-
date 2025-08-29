#include<iostream>
using namespace std;

int sumAndProduct(int arr[], int size){
    int sum=0, prd=1;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
        prd = prd * arr[i];
    }
    cout<<"Sum of all the numbers : "<<sum<<endl;
    cout<<"Product of all the numbers : "<<prd<<endl;
}

int main(){
    int arr[] = {4,3,6};
    int size = sizeof(arr)/sizeof(int);

    sumAndProduct(arr, size);

    
}