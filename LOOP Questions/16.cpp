// Print all the unique elements in an array

#include<iostream>
using namespace std;

void uniqueElements(int arr[], int sz){

    for(int i=0; i<sz; i++){
        bool isUnique = true;
        for(int j=0; j<sz; j++){

            if(i!=j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }

        if(isUnique){
            cout<<arr[i]<<" ";
        }
    }
}




int main(){
    int arr[] = {1,3,1,4,2};
    int sz = sizeof(arr)/sizeof(int);

    uniqueElements(arr,sz);
}

