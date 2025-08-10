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
    
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }






    /*
        A B C D
        A B C D
        A B C D
        A B C D
    */


    for(int i=0; i<4 ; i++){
        char ch='A';
        for(int j=0; j<4; j++){
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }


    return 0;
}