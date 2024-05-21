// Intersection of Two Arrays
// Given two arrays, write a function to compute their Intersection.
//  nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
//  nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 2, 1, 5};
    vector<int> brr = {2, 2, 5, 4, 6};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // For every element run loop on brr
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
