#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j >= i; j--)
        {   
            cout << " ";
        }     
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }                 
        cout << "\n";
    }
    
    return 0;
}

/*
Output =>

        1
       12
      123
     1234
    12345

*/