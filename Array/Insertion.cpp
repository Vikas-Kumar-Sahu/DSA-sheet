#include<iostream>
using namespace std;

int Insertion(int arr[], int size, int element, int index, int capacity){
    // code for Insertion
    if(size >= capacity) return -1;
    for(int i = size-1; i >= index; i--)
        arr[i+1] = arr[i];
    arr[index] = element;
    return 1;
}

void Display(int arr[], int size){
    // code for travarsel
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int arr[] = {7, 8, 12, 27, 88};
    int size = sizeof(arr)/sizeof(arr[0]);

    int element = 45;
    int index = 3;
    int capacity = 100;

    Insertion(arr, size, element, index, capacity);
    size += 1;
    Display(arr, size);

    return 0;
}