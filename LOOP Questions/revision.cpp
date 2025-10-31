// Perfect Numbers between 1 to 500

#include<iostream>
using namespace std;

int main(){
    cout<<"Perfect Numbers between 1 and 500 : ";
    for(int i=3; i<=500; i++){
        int factSum = 0;
        for(int j=1; i<i; j++){
            if(i%j == 0){
                factSum += j;
            }
        }

        if(factSum == i) cout<<i<<" ";
    }
}