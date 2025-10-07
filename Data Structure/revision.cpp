#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,-9,4,10,13,-10,5,4,3};
    int sz = sizeof(arr)/sizeof(int);

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for(int i=0; i<sz; i++){
        if(arr[i] > largest) largest = arr[i];

        if(arr[i] < smallest) smallest = arr[i];
    }

    

    cout<<"Smallest = "<<smallest<<endl;
    cout<<"Largest ="<<largest<<endl;
}