#include<iostream>
using namespace std;


// int printHello(){
//     cout<<"hello\n";
//     return 3;
// }



// int sum(int a, int b){
//     int s = a + b;
//     return s;
// }







int minOfTwo(int a, int b){
    cout<<"Enter the first number :";
    cin>>a;

    cout<<"Enter the second number :";
    cin>>b;

    if(a>b){
        cout<<"Minimum of "<<a<<" and "<<b<<" is :"<<b;
    }
    else{
        cout<<"Minimum of "<<a<<" and "<<b<<" is :"<<a;
    }
}





int main(){

    // printHello();
    // printHello();
    // printHello();

    // int val = printHello();
    // cout<<"val ="<<val;               


    // cout<<printHello();





    // cout<<sum(2,3)<<endl;
    // cout<<sum(5,8)<<endl;




    cout<<minOfTwo(5,10);


    return 0;
}