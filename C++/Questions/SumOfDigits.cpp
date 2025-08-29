#include<iostream>
using namespace std;



int SumOfDigits(int num){
    
    int digSum=0;

    while(num>0){
        int lastDig = num%10;
        num = num/10;

        digSum += lastDig;
    }

    return digSum;
}




int main(){

    cout<<"Sum = "<<SumOfDigits(12345)<<endl;
    return 0;
}