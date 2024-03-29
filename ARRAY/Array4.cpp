//Extreme Print In Array
//Given an array of integers, print the elements in reverse order.
#include<iostream>
using namespace std;
int main() {
    int arr[]={7,4,3,2,9,1,6,8,5};
    int size=9;
    int start=0;
    int end=size-1;
    while(true){
        if (start > end) 
        break;
        if(start==end){
            cout<<arr[start]<<endl;
            break;
        }else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            start++;
            end--;
        }
    }
    return 0;
}