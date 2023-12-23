#include<iostream>
using namespace std;

void rotateArray(int arr[], int size) {
    int i = 0;
    int j = 1;
    while (j <= size)
    {
        swap(arr[i],arr[j++]);
    }
    // [5, 1, 2, 3, 4]
}

void rotate(int arr[], int size) {
    int lastValue = size;
    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = lastValue;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "size of array = " << size << endl; 

    rotate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    rotateArray(arr, size);
    
    return 0;

}