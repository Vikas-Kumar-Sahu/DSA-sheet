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
                cout << j;
            }   
        }
        cout << "\n";
    }
    return 0;
}

/*
Output =>

    11111
    12111
    12311
    12341
    12345

*/