#include<iostream>
using namespace std;

//this approach work correctly but the given answer is unsorted array

void negativeNumbers(int arr[], int size){
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
            swap(arr[i], arr[j]);
            j++;  
        }       
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
    int arr[] = {-4,6,7,-1,-6,8,-3,2};

    negativeNumbers(arr, 8);
    printArray(arr, 8);

}