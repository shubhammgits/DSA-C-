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















void fun(){
    int x = 25;
    cout<<"x = "<<x<<endl;
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




    // minOfTwo(10,6);
    // minOfTwo(100,600);






    fun();
    // cout<<x<<endl;         It will return error because x isdefined within the fun() function!







    return 0;
}