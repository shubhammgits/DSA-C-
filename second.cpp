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


    int num;
    cout<< "Enter any number : ";
    cin>>num;

    if(num%2 == 0){
        cout<<"It is EVEN!";
    }
    else{
        cout<<"It is ODD!";
    }

    return 0;



    int marks;
    cout<<"Enter your marks :";
    cin>> marks;

    if(marks>=90){
        cout<<"Grade A";
    }

    else if(marks>=80 && marks<90){
        cout<<"Grade B";
    }

    else if(marks>=70 && marks<80){
        cout<<"Grade C";
    }

    else{
        cout<<"Fail";
    }
}