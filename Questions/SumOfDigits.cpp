#include<iostream>
using namespace std;




int main(){

    int digSum=0;

    int num=12345;

    while(num>0){
        int lastDig = num%10;
        
        num = num/10;

        digSum += lastDig;
    }

    cout<<digSum<<endl;
    return 0;
}