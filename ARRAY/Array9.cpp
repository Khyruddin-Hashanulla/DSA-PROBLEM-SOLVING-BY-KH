#include<iostream>
using namespace std;
bool findTriplet(int arr[],int size,int sum){
    for(int i=0;i<size-2;i++){
        for(int j=i+1;j<size-1;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"Triplets are: "<<arr[i]<<","<<arr[j]<<","<<arr[k];
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    int arr[]={12,4,5,9,2,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=26;
    int triplet=findTriplet(arr,size,sum);
}