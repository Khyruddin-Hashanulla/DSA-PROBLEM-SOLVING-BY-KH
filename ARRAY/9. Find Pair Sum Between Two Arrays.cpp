#include <iostream>
using namespace std;

void findPairSum(int arr1[], int n1, int arr2[], int n2, int target) {
    // Iterate over each element in arr1
    for (int i = 0; i < n1; i++) {
        // Iterate over each element in arr2
        for (int j = 0; j < n2; j++) {
            // Check if the sum of elements equals the target
            if (arr1[i] + arr2[j] == target) {
                cout << "Pair found: (" << arr1[i] << ", " << arr2[j] << ")\n";
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 4, 5, 7};
    int arr2[] = {5, 6, 3, 4, 8};
    int target = 9;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findPairSum(arr1, n1, arr2, n2, target);

    return 0;
}