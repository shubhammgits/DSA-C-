#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character :";
    cin>>ch;

    int ascii = ch;
    // cout<<ascii <<endl;

    if(65 <= ascii && ascii <= 90){
        cout<<"Uppercase Character";
    }

    else if(97 <= ascii && ascii <= 122){
        cout<<"Lowercase character";
    }

    else{
        cout<<"Not alphabetical character";
    }

    return 0;
}
