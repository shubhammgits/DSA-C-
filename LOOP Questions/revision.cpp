// Perfect Number or not:

#include<iostream>
using namespace std;

void checkPerfect(int num){
    int factSum = 0;
    for(int i=1; i<num; i++){
        if(num<2){
            cout<<num<<" is not a Perfect Number!"<<endl;
            return;
        }

        else if(num%i == 0){
            factSum += i;
        }
    }
    if(factSum == num) cout<<num<<" is a Perfect Number!"<<endl;
    else cout<<num<<" is not a Perfect Number!"<<endl;
}

int main(){
    checkPerfect(6);
    checkPerfect(56);
    checkPerfect(496);
}