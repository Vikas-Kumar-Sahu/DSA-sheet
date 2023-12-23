#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {   
            if (j > i)
            {
                cout << "1";
            }
            else{
                cout << i;
            }   
        }
        cout << "\n";
    }
    return 0;
}

/*
Output =>

    11111
    22111
    33311
    44441
    55555

*/