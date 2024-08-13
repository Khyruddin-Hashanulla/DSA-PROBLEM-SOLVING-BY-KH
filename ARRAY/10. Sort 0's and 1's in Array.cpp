#include <iostream>
using namespace std;

void sortZeroesAndOnes(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        // Move left pointer until we find a 1
        while (arr[left] == 0 && left < right) {
            left++;
        }

        // Move right pointer until we find a 0
        while (arr[right] == 1 && left < right) {
            right--;
        }

        // Swap the elements at left and right pointers
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortZeroesAndOnes(arr, n);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}