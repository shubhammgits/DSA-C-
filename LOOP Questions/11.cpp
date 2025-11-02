// Find smallest and largest from an array:

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {3,2,6,7,4,9,2,0};
    int n = sizeof(arr)/sizeof(int);

    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }

        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Smallest = "<<min<<endl;
    cout<<"Largest = "<<max<<endl;
}