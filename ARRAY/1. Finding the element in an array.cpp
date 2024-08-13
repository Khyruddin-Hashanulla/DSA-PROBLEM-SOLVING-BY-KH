//Finding the element in an array using linear search method.
#include<iostream>
using namespace std;
//Declaring a function to find the number in the array.
bool findTheNumber(int arr[], int size, int key) 
{  
    // Linear search to find the element in an array.
    for (int i = 0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
};
int main(){
//Declaring an array and its size.
int arr[]={7,9,2,6,4,1,0,8};
int size =8;
int key;
//Prompting the user to enter the number they want to find.
cout<<"Enter the number you want to find: ";
//Taking input from the user.
cin>>key;

//Calling the function to find the number in the array.
bool ans=findTheNumber(arr,size,key);
//Checking if the number is present in the array.
if (ans==true){
cout << "Element is present"; 
}else{
cout << "Element is not present"; 
}
    return 0;
}
