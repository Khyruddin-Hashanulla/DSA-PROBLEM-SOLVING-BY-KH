// Find Unique Element in Vector Array
#include <iostream>
#include <vector>
using namespace std;
// Function to find unique element in array
int FindElement(vector<int>arr){
    // Initialize result as 0
    int ans=0;
    // Iterate through each element in array
    for(int i=0;i<arr.size();i++){
        // XOR the result with each element
        ans=ans^arr[i];
    }
    // Return the unique element
    return ans;
}
int main()
{
    // Input size of array
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    // Input elements of array
    cout << "Enter the Element of an array" << endl;

    // Create vector of size n
    vector<int> arr(n);
    // Input elements of array
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    // Find unique element in array
    int UniqueElement=FindElement(arr);
    // Output unique element
    cout<<"Unique Element is "<<UniqueElement<<endl;

    return 0;
}