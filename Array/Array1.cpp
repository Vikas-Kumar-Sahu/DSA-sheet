// All Types of Array in One Code
// Certainly! Below is an example of a C++ code that demonstrates various array operations,  including initialization, traversal, insertion, deletion, and searching. This code uses a   dynamic array (allocated on the heap) for simplicity:

#include <iostream>
// #include <algorithm>

using namespace std;

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    cout << "Array Elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a specified index in the array
void insertElement(int arr[], int& size, int index, int value) {
    if (index < 0 || index > size) {
        cout << "Invalid index for insertion." << endl;
        return;
    }

    // Shift elements to make space for the new element
    for (int i = size - 1; i >= index; --i) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[index] = value;

    // Update the size of the array
    ++size;
}

// Function to delete an element at a specified index in the array
void deleteElement(int arr[], int& size, int index) {
    // If there is no space
    if (index < 0 || index >= size) {
        cout << "Invalid index for deletion." << endl;
        return;
    }

    // Shift elements to fill the gap left by the deleted element
    for (int i = index; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Update the size of the array
    --size;
}

// Function to search for an element in the array
int searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Return the index if the element is found
        }
    }

    return -1; // Return -1 if the element is not found
}

int main() {
    const int maxSize = 10;
    int* arr = new int[maxSize]; // Dynamic array
    int size = 0;

    // Initialize array elements
    for (int i = 0; i < 5; ++i) {
        arr[size++] = i * 2;
    }

    // Display initial array
    displayArray(arr, size);

    // Insert an element at index 2
    insertElement(arr, size, 2, 10);
    displayArray(arr, size);

    // Delete an element at index 4
    deleteElement(arr, size, 4);
    displayArray(arr, size);

    // Search for an element (e.g., 10)
    int target = 10;
    int index = searchElement(arr, size, target);
    if (index != -1) {
        cout << target << " found at index " << index << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    // Clean up: release memory
    delete[] arr;

    return 0;
}
