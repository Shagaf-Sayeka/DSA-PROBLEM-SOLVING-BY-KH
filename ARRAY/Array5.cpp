//Reverse An Array
//Given an array of integers, return a new array with elements in reversed order.
#include <iostream>  
using namespace std;  
int main(){ 
int arr[]= {10,23,56,78,47,49,51}; 
int size=7;
int start=0;
int end=size-1;
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