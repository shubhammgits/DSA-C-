#include<iostream>
using namespace std;

int factN(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }

    cout<<endl;
    return fact;
}


int main(){
    cout<<factN(3);
    cout<<factN(4);
    cout<<factN(5);
}