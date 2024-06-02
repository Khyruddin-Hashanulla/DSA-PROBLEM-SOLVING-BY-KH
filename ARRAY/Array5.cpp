//Reverse An Array
//Given an array of integers, return a new array with elements in reversed order.
#include <iostream>  
using namespace std;  
int main(){ 
//Declare an array of integers
int arr[]= {10,23,56,78,47,49,51}; 
//Declare the size of the array
int size=7;
//Declare two pointers, start and end
int start=0;
int end=size-1;
//Use a while loop to swap elements at the start and end pointers
while(start<=end) {
//Step-1
swap(arr[start],arr[end]); 
//Step-2
start++;
//Step-3
end--;
}
cout<<"Array after swapping first and last element"<<endl; 
//Printing Array
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}