// Sum of all numbers from 1 to N which are divisible by 3

#include<iostream>
using namespace std;

int main(){

    int sum=0;
    int n=10;
    for(int i=1 ; i<=n ; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}




// Print factorial of a number N

#include<iostream>
using namespace std;

int main(){
    int fact=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        fact*=i;
    }
    cout<<"The factorial of "<<n<<" is :"<<fact;
    return 0;
}