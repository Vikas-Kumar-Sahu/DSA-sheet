#include<iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = INT_MIN;
    int current_sum = 0;

    for (int i = 0; i < size; i++){
        current_sum = current_sum + arr[i];

    if (sum < current_sum)
        sum = current_sum;
    if(current_sum < 0)
        current_sum = 0;
    }

    return sum;
}

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = sumArray(arr, size);

    cout << "Sum of maximum Array = " << ans;
}