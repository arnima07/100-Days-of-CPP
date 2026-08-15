// finds the second largest element in an array

#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1; // Indicate error
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
        return -1; // Indicate error
    }

    return secondLargest;
}