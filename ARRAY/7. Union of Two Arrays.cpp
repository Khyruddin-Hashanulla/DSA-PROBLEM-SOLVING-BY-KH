// This code is written to find the union of two arrays.
#include <iostream>
// Include the vector library to use vector data structure.
#include <vector>
// Using namespace std is used to use the standard names of the C++ library.
using namespace std;
int main()
{
    // Declare an array named arr and initialize it with values 1, 4, 5, 6, 7.
    int arr[] = {1, 4, 5, 6, 7};
    // Declare the size of the array arr.
    int sizea = 5;
    // Declare an array named brr and initialize it with values 2, 3, 9, 11.
    int brr[] = {2, 3, 9, 11};
    // Declare the size of the array brr.
    int sizeb = 4;
    // Declare a vector named ans.
    vector<int> ans;
    // Push all element of arr in vector.
    for (int i = 0; i < sizea; i++){
        ans.push_back(arr[i]);
    }
    // Push all element of brr in vector.
    for (int i = 0; i < sizeb; i++){
        ans.push_back(brr[i]);
    }
    
    // Print Element
    cout<<"Print All Element for Union of Two Arrays : ";
    // Loop through the vector ans and print each element.
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
  
    return 0;
}