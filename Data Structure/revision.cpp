#include<iostream>
using namespace std;

int changeX(int x){
    x = 2*x;
    cout<<"Value in fucntion : ";
    return x;
}

int main(){
    int x = 10;
    changeX(x);

    cout<<"Value in main:";
    cout<<x;
}