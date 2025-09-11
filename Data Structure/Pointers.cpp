#include<iostream>
using namespace std;

int main(){
    // int a=10;

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






    // int a = 10;
    // int* ptr = &a;

    // int** parPtr = &ptr;

    // cout<<*(parPtr)<<endl;
    // cout<<ptr<<endl;

    // cout<<**(parPtr)<<endl;









    // int a = 5;
    // int* p = &a;
    // int** q = &p;

    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<p<<endl;
    // cout<<*q<<endl;



    int a = 10;
    changeA(a);
    cout<<a<<endl;
}

void changeA(int a){
    a = 20;
}