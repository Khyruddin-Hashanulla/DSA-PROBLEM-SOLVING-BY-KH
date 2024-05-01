// Find Unique Element in Vector Array
#include <iostream>
#include <vector>
using namespace std;
int FindElement(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    cout << "Enter the Element of an array" << endl;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int UniqueElement=FindElement(arr);
    cout<<"Unique Element is "<<UniqueElement<<endl;

    return 0;
}