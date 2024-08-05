#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int> arr, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == mid + 1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return start + 1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int missingElement = findMissingElement(arr, n);
    cout << "The missing element is: " << missingElement << endl;

    return 0;
}