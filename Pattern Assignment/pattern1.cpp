#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {   
            if (i == j)
            {
                cout << i;
            }
            else{
                cout << "1";
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
    11311
    11141
    11115
*/