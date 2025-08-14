#include <iostream>
using namespace std;

int main()
{




    /*
          1 2 3 4
          1 2 3 4
          1 2 3 4
          1 2 3 4 
    */       
    

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }






    /*
        A B C D
        A B C D
        A B C D
        A B C D
    */


    // for(int i=0; i<4 ; i++){
    //     char ch='A';
    //     for(int j=0; j<4; j++){
    //         cout<<ch<<" ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }








    /*
       1 2 3
       4 5 6
       7 8 9
    */

    // int num=1;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }











    /*
       A B C D
       E F G H
       I J K L
     */


    // char ch='A';
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<ch<<"  ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }











    /*
       *
       * *
       * * *
       * * * *
    */

    // for(int i=0; i<6; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }













    /*
         1
         2 2
         3 3 3
         4 4 4 4
    */

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<(i+1)<<" ";
    //     }
    //     cout<<endl;
    // }






    /*
      A 
      B B
      C C C
      D D D D
    */

    // char ch='A';
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }








    /*
       1
       1 2
       1 2 3
       1 2 3 4
    */


    
    // for(int i=0; i<4; i++){
    //     for(int j=1; j<=i+1; j++){
    //         cout<<j<<"  ";
    //     }
    //     cout<<endl;
    // }












    /*
       1
       2 1
       3 2 1
       4 3 2 1
    */


    // for(int i=0; i<4; i++){
    //     for(int j=i+1; j>0; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }













    /*
       1
       2 3
       4 5 6
       7 8 9 10
    */


    int num=1;
    for(int i=0; i<4; i++){
        for(int j=0; j<i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }






    /*
       1 1 1 1
         2 2 2
           3 3
             4
    */



    









    return 0;
}