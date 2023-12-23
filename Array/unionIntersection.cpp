#include<iostream>
using namespace std;

/*          this union intersection work when both array are sorted          */

void unionIn(int a[], int n, int b[], int m) {
    int i = 0, j = 0;  

    cout << "Union: ";
    while (i < n && j < m) {
        // when first array is smaller than second array
        if (a[i] < b[j]) {
            cout << a[i] << " ";
            i++;
        }
        // when first array is bigger than second array
        else if (a[i] > b[j]) {
            cout << b[j] << " ";
            j++;
        } 
        // when both array are eqaul then print first array and increase both array
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    // when we have only one array left 
    // remaining part print 
    while (i < n) {
        cout << a[i] << " ";
        i++;
    }

    while (j < m) {
        cout << b[j] << " ";
        j++;
    }

    cout << "\n";

    // some number are same in both array
    // print the number in intersection part

     i = 0, j = 0;

    cout << "Intersection: ";
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    cout << "\n";
}
   

int main(){
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 3, 5, 7};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    unionIn(a, n, b, m);

    return 0;
}