#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    //let us imagine we given the k=3
    //find the smallest and largest element in array
 
    int k = 3, size = 6, i;

    sort(arr.begin(),arr.end());

    cout << "sort array = "; 
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }   
    cout << endl;

    cout << "smallest element in array = " << arr[k-1] << endl;

    reverse(arr.begin(),arr.end());

    cout << "reverse sort array = "; 
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }   
    cout << endl;
    
    cout << "Largest element in array = " << arr[k-1] << endl;

    return 0;
}