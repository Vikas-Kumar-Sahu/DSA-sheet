#include<iostream>
using namespace std;

void pointer(int arr[], int size){
    int i = 0, j = 0;
    while (j <= size)
    {
        switch (arr[j])
        {
        case 0:
            swap(arr[i++],arr[j++]);
            break;

        case 1:
            j++;
            break;

        case 2:
            swap(arr[j],arr[size--]);
            break;   
         
        }   
    }
}

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10]; 
    int size;
    cout << "enter your array size = ";
    cin >> size;

    cout << "enter array element are : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    } 

    pointer(arr, size-1);
    print(arr, size);

}