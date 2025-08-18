#include<iostream>
using namespace std;

int main(){
    int num[] = {2,4,5,1,2,35,7,9,10,8};

    int smallest = num[0];

    int sz = sizeof(num)/sizeof(int);
    for(int i=0; i<sz; i++){

        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    
}