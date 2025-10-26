#include <iostream>
using namespace std;

int main(){

    //BASICS

    // int age = 25;
    // cout<< "Hello World!" << " I am Shubham"<<endl << "My age is " << age <<endl;

    // cout<< sizeof(int) << " bytes" << endl;

    // char grade = 'A';
    // cout<< "My grade is " << grade <<endl;

    // float gpa = 8.75f;
    // cout<< "My GPA is " << gpa <<endl;

    // bool isStudent = true;
    // double price = 100.99; 




    //TYPE CONVERSION
    // Implicit Type Conversion
    // char letter = 'S';
    // int IntLetter = letter;
    // cout<< "The ASCII value of " << letter << " is " << IntLetter << endl;

    // Explicit Type Conversion
    // double num = 100.9999;
    // int newNum = (int)num;
    // cout<< "The integer value of " << num << " is " << newNum <<endl;




    //INPUT in C++

    // int age;
    // cout<< "Enter the age :";
    // cin >> age;
    // cout << "Your age is : " << age <<endl;



    //Operators in C++

    //Arithmatic:

    // int a=15, b=10;
    
    // cout << "Sum = "<< (a+b) <<endl;
    // cout << "Difference = "<< (a-b) <<endl;
    // cout << "Product = "<< (a*b) <<endl;
    // cout << "Division = "<< (a/b) <<endl;
    // cout << "Modulo = "<< (a%b) <<endl;


    // int m = 5;
    // float n = 2;

    // cout << "Division :" << (m/n) <<endl;

    // cout<< (5 / (double) 2)<<endl;



    // Relational:

    // cout<< (3>5) <<endl;    //false
    // cout<< (3<5) <<endl;    //true
    // cout<< (3==5) <<endl;   //false
    // cout<< (3!=5) <<endl;   //true



    // Logical:

    // cout<< !(3>5) <<endl;     //Logical NOT

    // cout<< ( (3>5) && (5>7) )<<endl;    //Logical AND

    // cout<< ( (3>5) || (5>7) )<<endl;    //Logical OR
    // return 0;


    // Unary Operator:

    int a = 10;

    int b = a++;    // kaam ; update

    cout<<" b = "<< b << endl;       //10
    cout<<" a = "<< a << endl;       //11
    cout<<"b = " << b <<endl;        //10


    int c = 10;
    int d = ++c;

    cout<<"c = " << c <<endl;       //
    cout<<"d = " << d <<endl;       //
}