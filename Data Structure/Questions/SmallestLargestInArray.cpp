#include<iostream>
using namespace std;

int main(){
    int num[] = {2,4,5,2,-5,7,-15,8,1};

    int smallest = INT8_MAX;

    int sz = sizeof(num)/sizeof(int);
    for(int i=0; i<sz; i++){

        if(num[i] < smallest){
            smallest = num[i];
        }
    }

    cout<<smallest;

}