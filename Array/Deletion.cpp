#include<iostream>
using namespace std;

void Deletion(int arr[], int size, int index){
    for(int i = index; i < size; i++){
        // putting the next value in current array
        arr[i] = arr[i+1];    
    }
}

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

    int index;
    cout << "Enter the index number for delete ";
    cin >> index;

    Deletion(arr, size, index);
    size -= 1;
    Display(arr, size);

    return 0;
}