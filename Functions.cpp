#include<iostream>
using namespace std;


int printHello(){
    cout<<"hello\n";
    return 3;
}

int main(){

    printHello();
    printHello();
    printHello();

    int val = printHello();
    cout<<val;
    
    return 0;
}