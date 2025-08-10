#include<iostream>
using namespace std;


void changeA(int* ptr){       //pass by referance using pointers
    *ptr = 20;
}



void changeB(int &c){          //pass by referance using alias
    c = 20;
}



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





    // // Pass By Referance using Pointers:

    // int a = 10;
    // changeA(&a);
    // cout<<a<<endl;



    // // Pass by refrance using alias:

    // int b = 10;
    // changeB(b);
    // cout<<b<<endl;








    // Array Pointer:

    // int arr[] = {1,2,3,4,5};
    // cout<<arr<<endl;             //pointer
    // cout<<&arr[0]<<endl;

    // cout<< *arr <<endl;          //value at arr[0] memmory address












    // Pointer Arithmetic

    // int a = 10;
    // int* ptr = &a;
    // cout<<ptr<<endl;

    // ptr++;
    // cout<<ptr<<endl;       //increment of 4byte size in memory address

    // ptr--;
    // cout<<ptr<<endl;      //decrement to original address

    // ptr += 3;
    // cout<<ptr<<endl;




    // int arr[] = {1,2,3,4,5};


    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;


 
    // Subtraction between two pointers:
    // int* ptr1;
    // int* ptr2 = ptr1 + 2;

    // cout<<ptr2 - ptr1<<endl;





    // Comparison between two pointers:

    // int* ptr1;
    // int* ptr2;

    // cout<<ptr1<<endl;
    // cout<<ptr2<<endl;

    // cout<< (ptr1 < ptr2)<<endl;





    int arr[] = {10,20,30,40};
    int* ptr = arr;

    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+3)<<endl;
    ptr++;
    cout<<*ptr<<endl;
}

