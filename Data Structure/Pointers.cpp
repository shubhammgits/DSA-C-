#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<&a<<endl;

    int* ptr = &a;
    cout<<ptr<<endl;

    cout<<&ptr<<endl;





    char ch = 'S';
    cout<<&ch<<endl;

    char* ptr2 = &ch;
    cout<<ptr2<<endl;

    cout<<&ptr2<<endl;
}