#include<iostream>
using namespace std;

int Searching(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        // check each array number
        if(arr[i] == key)
        return i;
    }
    return -1;
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

    int key;
    cout << "Enter the key to search " << endl;
    cin >> key;

    Display(arr, size);
    int result = Searching(arr, size, key);
    if(result != -1){
        cout << "key is present";
    }else{
        cout << "key is absent";
    }

    return 0;
}