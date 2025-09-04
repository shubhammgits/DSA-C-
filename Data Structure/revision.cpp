#include<iostream>
using namespace std;

int changeX(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 2*arr[i];
    }

    cout<<"Array in changeX()"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5};

    cout<<changeX(arr, 5)<<endl;
    cout<<"Array in main():"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
}