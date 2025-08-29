#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character :";
    cin>>ch;

    // int ascii = ch;
    // cout<<ascii <<endl;

    if(65 <= ch && ch <= 90){
        cout<<"Uppercase Character";
    }

    else if(97 <= ch && ch <= 122){
        cout<<"Lowercase character";
    }

    else{
        cout<<"Not alphabetical character";
    }

    return 0;
}
