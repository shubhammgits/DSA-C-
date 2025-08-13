#include<iostream>
using namespace std;




void changeArr(int arr[], int size){
    cout<<"In changeArr Function:"<<endl;
    for(int i=0; i<size; i++){
        arr[i] = 2 * arr[i];
    }
}





//Linear Search:

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}








int main(){
    // double price[65];
    
    // int marks[5] = {98, 100, 54, 89, 78};

    // cout<<marks[0]<<endl;
    // cout<<marks[2]<<endl;

    // marks[0] = 100;

    // int sz= sizeof(marks)/sizeof(int);

    // for(int i =0; i<sz; i++){
    //     cout<<marks[i]<<endl;
    // }




    // int price[5];
    // int sz = 5;

    // for(int i=0; i<sz; i++){
    //     cout<<"Enter the element:";
    //     cin>>marks[i];
    // }

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;

    // return 0;














    // Pass By Referance:

    // int arr[] = {1,2,3};
    // int size = 3;

    // changeArr(arr, size);

    // cout<<"In main function:"<<endl;
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;













    //Linear Search:

    int arr[] = {4,5,6,8,9,2,4,1,3};
    int size = sizeof(arr)/sizeof(int);
    int target = 8;
    
    cout<<linearSearch(arr, size, target)<<endl;

    
}