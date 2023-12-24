#include<iostream>
using namespace std;
// traversal code

void Display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int arr[] = {7, 8, 12, 27, 88};
    int size = sizeof(arr)/sizeof(arr[0]);

    Display(arr, size);

    return 0;
}