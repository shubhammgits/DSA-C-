#include<iostream>
using namespace std;

void perfect1to500(){
    int sum = 1;

    for(int i=1; i<500; i++){
        if(i%i==0){
            sum += i;
        }
    }
}