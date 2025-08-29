#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    cout<<"Enter any number :";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        sum+=i;
    }
    cout<<"The sum of numbers from 1 to "<<n<<" is : "<<sum<<endl;
    return 0;


    // int sum = 0;
    // int n = 10;
    // int i = 1;

    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }

    // cout<<"Sum is:"<<sum<<endl;

}