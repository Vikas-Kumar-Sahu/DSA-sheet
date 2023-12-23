#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {   
            if (i <= j)
            {
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout << "\n";
    }
    return 0;
}

/*
Output =>

    11111
    01111
    00111
    00011
    00001

*/