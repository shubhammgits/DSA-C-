// Perfect numbers between 1 to 500

#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=500; i++){
        int factSum = 0;
        for(int j=1; j<i; j++){
            if(i%j == 0){
                factSum += j;
            }
        }

        if(factSum == i) cout<<i<<" ";
    }
}





