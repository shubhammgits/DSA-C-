#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter any number : "<<endl;
    cin>>n;

    if(n >= 0){
        cout<< n<<" is positive\n";
    }

    else{
        cout<< n<<" is negative\n";
    }


    return 0;
}