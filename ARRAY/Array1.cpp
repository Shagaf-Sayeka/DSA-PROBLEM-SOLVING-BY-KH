//Finding the element in an array using linear search method.
#include<iostream>
using namespace std;
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
int arr[]={7,9,2,6,4,1,0,8};
int size =8;
int key;
cout<<"Enter the number you want to find: ";
cin>>key;

bool ans=findTheNumber(arr,size,key);
if (ans==true){
cout << "Element is present"; 
}else{
cout << "Element is not present"; 
}
    return 0;
}
