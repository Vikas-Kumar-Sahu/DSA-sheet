#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){

    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int k = 2;
    int size = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, 0, k-1);
    reverse(arr, k, size-1);
    reverse(arr, 0, size-1);
    printArray(arr, size);

    return 0;
}