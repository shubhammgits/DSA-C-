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







void minOfTwo(int a, int b){

    if(a>b){
        cout<<"Minimum of "<<a<<" and "<<b<<" is :"<<b;
    }
    else{
        cout<<"Minimum of "<<a<<" and "<<b<<" is :"<<a;
    }

    cout<<endl;
    
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




    minOfTwo(10,6);
    minOfTwo(100,600);


    return 0;
}