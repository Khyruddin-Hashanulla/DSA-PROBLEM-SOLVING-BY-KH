#include <iostream>
#include <vector>
using namespace std;
int findFirstOccurrence(vector<int> arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end){
        int mid = start + (end-start) / 2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int findLastOccurrence(vector<int> arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + end / 2;
    int ans = -1;
    while (start <= end){
        int mid = start + (end-start) / 2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of vector:";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter all elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout<<"Enter your target element: ";
    cin>>target;
    int first = findFirstOccurrence(arr, n, target);
    if (first == -1)
    {
        cout << "Element is not found " << first;
    }
    else
    {
        int last = findLastOccurrence(arr, n, target);
        int count = last - first + 1;
        cout << "The element " << target << " appears " << count << " times." << endl;
    }
}