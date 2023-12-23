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
                cout << "0";
            }
        }
        cout << "\n";
    }
    return 0;
}

/*
Output =>

    10000
    02000
    00300
    00040
    00005

*/