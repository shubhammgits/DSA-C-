// Perfect number or not

#include<iostream>
using namespace std;

void perfectNum(int num){

    if(num<=1){
        cout<<num<<" is not a Perfect Number!";
        return;
    }
    int factSum = 0;
    for(int i=1; i<num; i++){
        if(num%i == 0){
            factSum += i;
        }
    }

    if(factSum == num) cout<<num<<" is Perfect Number!"<<endl;
    else cout<<num<<" is not a Perfect Number!"<<endl;
}

int main(){
    perfectNum(6);
    perfectNum(49);
    perfectNum(496);
    perfectNum(496);
    perfectNum(4960);
}