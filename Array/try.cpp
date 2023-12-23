#include<iostream>
using namespace std;
/*
void sameNumber(int a[], int n, int b[], int m){
    int i = 0, j = 0;
    cout << "Inersection : ";
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          if(a[i] > b[j])
            j++;
          else if(a[i] < b[j])
            j++;
          else{
            cout << a[i] <<" ";
            i++, j++;
          }    
       }
    }
    cout << endl << "Union is : ";
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          if(a[i] > b[j] && a[i] < b[j]){
            cout << a[i] <<" ";
            i++, j++;
          }
       }
    }
    while (i < n) {
        cout << a[i] << " ";
        i++;
    }

    while (j < m) {
        cout << b[j] << " ";
        j++;
    }
    cout << endl;
}

int main(){
    int a[] = {7,1,5,2,3,6};
    int b[] = {3,8,6,20,7};
    int answer[] = {};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    int ans = sizeof(b)/sizeof(b[0]);

    sameNumber(a,n,b,m);

    return 0;
}*/

int getSum(int arr[], int size) {
    
    //base case
    if (size == 0)
    {
      return 0;
    }
    if (size == 1)
    {
      return arr[0];
    }

    //processing and do recursive relation
    //we store arr[0] that's why we decrease the arr size and increase arr position.
    int remainingPart = getSum(arr+1, size-1); 
    int ans = arr[0] + remainingPart;
    return ans;
    
}

int main(){
  int arr[] = {3, 2, 1, 5, 6, 8, 9, 21, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  int sum = getSum(arr, size);
  cout << sum;

  return 0;
}