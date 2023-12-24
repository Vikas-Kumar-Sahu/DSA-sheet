#include <iostream>
#include <algorithm> // for std::sort
#include <iterator>  // for std::begin and std::end

int main() {
    // Initialize an array
    int arr[] = {4, 2, 8, 5, 1, 3, 7, 6};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 1. Sorting the array
    std::sort(std::begin(arr), std::end(arr));

    // Display the sorted array
    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 2. Finding the sum of array elements
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    std::cout << "Sum of Array Elements: " << sum << std::endl;

    // 3. Finding the average of array elements
    double average = static_cast<double>(sum) / size;
    std::cout << "Average of Array Elements: " << average << std::endl;

    // 4. Finding the maximum and minimum elements
    int maxElement = *std::max_element(std::begin(arr), std::end(arr));
    int minElement = *std::min_element(std::begin(arr), std::end(arr));
    std::cout << "Maximum Element: " << maxElement << std::endl;
    std::cout << "Minimum Element: " << minElement << std::endl;

    return 0;
}
/*
Displays the original array.
Sorts the array using std::sort.
Displays the sorted array.
Finds the sum of array elements.
Finds the average of array elements.
Finds the maximum and minimum elements in the array using std::max_element and std::min_element.
*/