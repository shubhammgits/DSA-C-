#include <iostream>
using namespace std;

int main(){
    // int age;
    // cout<< "Enter your age : "<<endl;
    // cin>>age;

    // if(age >= 18){
    //     cout<<"You can vote!\n";
    // }

    // else{
    //     cout<<"You cannot vote!\n";
    // };


    // int num;
    // cout<< "Enter any number : ";
    // cin>>num;

    // if(num%2 == 0){
    //     cout<<"It is EVEN!";
    // }
    // else{
    //     cout<<"It is ODD!";
    // }

    // return 0;



    // int marks;
    // cout<<"Enter your marks :";
    // cin>> marks;

    // if(marks>=90){
    //     cout<<"Grade A";
    // }

    // else if(marks>=80 && marks<90){
    //     cout<<"Grade B";
    // }

    // else if(marks>=70 && marks<80){
    //     cout<<"Grade C";
    // }

    // else{
    //     cout<<"Fail";
    // }




    // Ternary Operators:

    // int n;
    // cout<< (n>=0 ? "positive" : "negative");



    // LOOPS:

    // while loop:

    // int count =1;
    // int n = 100;

    // while(count <= n){
    //     cout<<count <<"  ";
    //     count++;
    // }



    //for loop:

    // int n=100;
    // for(int i=0 ; i<=n ; i = i+2){
    //     cout<<i << "  ";
    // }

    // for(int i=1 ; i<=100 ; i++){
    //     cout<<i<<"  ";
    //     if(i == 5){
    //         break;
    //     }
    // }



    //do-while loop:

    // do{
    //     cout<<"Hello World!";
    // }
    // while(3>5);


    // int n=10;
    // int i=1;
    // do{
    //     cout<<i<<"  ";
    //     i++;
    // }
    // while(i<=n);




    //Nested Loops:

    int n=10;
    for(int i=1 ; i<=n ; i++){
        int m=5;
        for(int j=1 ; j<=m ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}