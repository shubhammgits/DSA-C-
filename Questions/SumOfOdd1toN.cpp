#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    cout<<"Enter the number :";
    cin>> n;

    for(int i=1 ; i<=n ; i++){
        if(i%2 != 0){
            sum+=i;
        }
    }

    cout<<"Sum of the odd numbers from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}