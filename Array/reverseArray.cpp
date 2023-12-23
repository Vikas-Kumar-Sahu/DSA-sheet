#include<iostream>
using namespace std;

// we are using the two pointer method

void reverseString(int arr[], int size){
    int start = 0, end = size - 1;
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
    int arr1[] = {4, 5, 1, 2, 6, 7, 9};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    reverseString(arr1, 7);
    reverseString(arr2, 9);

    printArray(arr1, 7);
    printArray(arr2, 9);

    return 0;
}