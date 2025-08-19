#include<iostream>
using namespace std;




void changeArr(int arr[], int size){
    cout<<"In changeArr Function:"<<endl;
    for(int i=0; i<size; i++){
        arr[i] = 2 * arr[i];
    }
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

    int arr[] = {1,2,3};

    changeArr(arr, 3)
}