#include<bits/stdc++.h>
using namespace std;

int getDifference(int arr[], int size, int key) {
    sort(arr, arr+size);
    int tempmax = arr[size-1];
    int tempmin = arr[0];
    int ans = tempmax - tempmin;

    for(int i = 0; i < size; i++){
        if(arr[i] - key < 0)
            continue;
        tempmin = min(arr[0] + key, arr[i] - key);
        tempmax = max(arr[i-1] + key, arr[size - 1] - key);
        ans = min(ans, tempmax - tempmin);
    }
        
    return ans;
}

int main(){
    int arr[] = {25, 8, 1, 5, 15, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    int ans = getDifference(arr, size, key);
    cout << ans;
}