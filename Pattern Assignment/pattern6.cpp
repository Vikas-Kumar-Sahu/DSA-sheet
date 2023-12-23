#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {   
            if ((i+j)%2 == 0)
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

    101010
    010101
    101010
    010101
    101010
    010101

*/