// Display n terms of natural numbers and their sum

#include<iostream>
using namespace std;

void sumOfN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        cout<<i<<" "<<endl;
        sum += i;
    }
    cout<<"Sum of "<<n<<" natural numbers = "<<sum<<endl;
}

int main(){
    sumOfN(10);
}




