#include<iostream>
using namespace std;

int main(){
    // double price[65];
    
    int marks[5] = {98, 100, 54, 89, 78};

    // cout<<marks[0]<<endl;
    // cout<<marks[2]<<endl;

    // marks[0] = 100;

    int sz= sizeof(marks)/sizeof(int);

    for(int i =0; i<sz; i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}