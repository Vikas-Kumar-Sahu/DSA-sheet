#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1, 12, 15, 26, 38};
    int arr2[] = {2, 13, 17, 30, 45};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int size = sizeof(arr2)/sizeof(arr2[0]);

    for (int i = 0; i < size; i++)
    {
        if(arr1[i] < arr2[i])
            arr1[i++];
        else if(arr[i] > arr2[i])
            arr2[i++];    
    }
    
    
}