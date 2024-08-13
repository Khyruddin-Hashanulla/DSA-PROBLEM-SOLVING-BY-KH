//Maximum Number In An Array
/*
 * Given an array of integers, find the maximum number in it.  
 */
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={7,4,3,6,5,2,13,81,43};
    int size=9;//size of the array
    int maxi=INT_MIN;//initializing with minimum integer value 
    //loop through the array to find the maximum number
    for(int i=0;i<size;i++){
        if(arr[i] > maxi)
            maxi = arr[i];
    }
    //print the maximum number
    cout<<"The maximum element is: "<<maxi<<endl;
    return 0;
}
