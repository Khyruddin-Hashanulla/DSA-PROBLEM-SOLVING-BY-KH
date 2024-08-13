// This code finds the intersection of two arrays
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Create two vectors arr and brr
    vector<int> arr = {1, 2, 2, 1, 5};
    vector<int> brr = {2, 2, 5, 4, 6};
    // Create a vector ans to store the intersection of the two arrays
    vector<int> ans;
    // Loop through the elements of arr
    for (int i = 0; i < arr.size(); i++)
    {
        // Store the current element in arr in a variable element
        int element = arr[i];
        // Loop through the elements of brr
        for (int j = 0; j < brr.size(); j++)
        {
            // If the current element in arr is equal to the current element in brr
            if (element == brr[j])
            {
                // Set the current element in brr to -1
                brr[j] = -1;
                // Add the current element to the ans vector
                ans.push_back(element);
            }
        }
    }
    // Loop through the elements of ans and print them
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // Return 0 to indicate successful execution
    return 0;
}
