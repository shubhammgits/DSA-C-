#include<iostream>
using namespace std;

void sumAndProduct(int arr[], int size){
    int sum=0, prd=1;
    for(int i=0; i<size; i++){
        sum += arr[i];
        prd *= arr[i];
    }
    cout<<"Sum ="<<sum<<endl;
    cout<<"Product ="<<prd<<endl;

}

int main(){
    int arr[] = {1,2,3,4,5};
    sumAndProduct(arr, 5);
}