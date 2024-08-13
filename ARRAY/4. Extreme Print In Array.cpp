//Extreme Print In Array
//Given an array of integers, print the elements in reverse order.
#include<iostream>
using namespace std;
int main() {
    //Declare an array of integers
    int arr[]={7,4,3,2,9,1,6,8,5};
    //Declare the size of the array
    int size=9;
    //Declare two pointers, start and end, to iterate through the array
    int start=0;
    int end=size-1;
    //Loop through the array until the start pointer is greater than the end pointer
    while(true){
        //If the start pointer is greater than the end pointer, break the loop
        if (start > end) 
        break;
        //If the start and end pointers are equal, print the value of the element at the start pointer
        if(start==end){
            cout<<arr[start]<<endl;
            break;
        }else{
            //Print the values of the elements at the start and end pointers, separated by a space
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            //Increment the start pointer and decrement the end pointer
            start++;
            end--;
        }
    }
    //Return 0 to indicate successful execution
    return 0;
}