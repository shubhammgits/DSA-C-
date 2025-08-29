#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec = {1,2,3};
    // cout<<vec[0];


    // vector<int> vec(5,0);
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;
    // cout<<vec[4]<<endl;
    // cout<<vec[5]<<endl;





    // vector<char> vec = {'a','b','c','d','e'};
    // cout<<"Size of the vector :"<<vec.size()<<endl;
    // for(char val : vec){
    //     cout<<val<<endl;
    // }






    // vector<int> vec;
    // cout<<"Size = "<<vec.size()<<endl;

    // vec.push_back(5);
    // cout<<"Size after push back 5 ="<<vec.size()<<endl;

    // vec.push_back(10);
    // cout<<"Size after push back 10 ="<<vec.size()<<endl;

    // vec.push_back(15);
    // cout<<"Size after push back 15 ="<<vec.size()<<endl;

    // for(int val : vec){
    //     cout<<val<<endl;
    // }

    // vec.pop_back();
    // for(int val: vec){
    //     cout<<val<<endl;
    // }

    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(0);





    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    cout<<"Size =" <<vec.size()<<endl;
    cout<<"Capacity =" <<vec.capacity()<<endl;
}
