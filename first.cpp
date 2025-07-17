#include <iostream>
using namespace std;

int main(){

    // int age = 25;
    // cout<< "Hello World!" << " I am Shubham"<<endl << "My age is " << age <<endl;

    // cout<< sizeof(int) << " bytes" << endl;

    // char grade = 'A';
    // cout<< "My grade is " << grade <<endl;

    // float gpa = 8.75f;
    // cout<< "My GPA is " << gpa <<endl;

    // bool isStudent = true;
    // double price = 100.99; 


    char letter = 'S';
    int IntLetter = letter;
    cout<< "The ASCII value of " << letter << " is " << IntLetter << endl;

    double num = 100.9999;
    int newNum = (int)num;
    cout<< "The integer value of " << num << " is " << newNum <<endl;
    return 0;
}