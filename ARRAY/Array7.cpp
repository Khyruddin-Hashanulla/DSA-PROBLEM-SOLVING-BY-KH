// Union of Two Arrays
// Given two arrays, write a function to compute their union.
// Example 1:
// Input: nums1 = [1,2,4,5], nums2 = [9,3]
// Output: [1,2,4,5,9,3]

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {1, 4, 5, 6, 7};
    int sizea = 5;
    int brr[] = {2, 3, 9, 11};
    int sizeb = 4;
    vector<int> ans;
    // Push all element of arr in vector.
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    // Push all element of brr in vector.
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }
    
    // Print Element
    cout<<"Print All Element for Union of Two Arrays : ";
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
  
    return 0;
}