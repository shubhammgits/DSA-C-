#include<iostream>
using namespace std;

int main(){
    int a=10;

    // int* ptr = &a;

    // cout<<*(&a)<<endl;

    // cout<<&ptr<<endl;
    // int ** ptr2 = &ptr;
    // cout<<&ptr2<<endl;





    // char ch = 'S';
    // cout<<&ch<<endl;

    // char* ptr3 = &ch;
    // cout<<ptr3<<endl;

    // cout<<&ptr3<<endl;






    int a = 10;
    int* ptr = &a;

    int** parPtr = &ptr;

    cout<<*(parPtr)<<endl;
    cout<<ptr<<endl;

    cout<<**(parPtr)<<endl;
}