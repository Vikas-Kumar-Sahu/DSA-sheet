// this is the simple technique to find max and min array element

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {22, 14, 8, 17, 35, 3};

    for (int i = 0; i < 6; i++)
    {
        sort(arr.begin(),arr.end());
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "maximum array is = " << arr[5] << endl;
    cout << "minimum array is = " << arr[0] << endl;

    return 0;
}