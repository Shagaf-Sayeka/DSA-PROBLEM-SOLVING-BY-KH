//Count 0's And 1's In Array
//Given an array of size n containing only 0’s and 1’s, the task is to count the number of 0’s and 1’s in it. Write a program that counts the number of zeros and ones.
#include<iostream>
using namespace std;
int main() {
    int arr[]={0,1,0,0,0,1,1,0,1,1,1,0,0,1,0};
    int size=15;//size of array
    int numzeros=0;
    int numones=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0)
        numzeros++;
        else
        numones++;
    }
    cout<<"Number Of Zeros = "<<numzeros<<endl;
    cout<<"Number Of Ones = "<<numones<<endl;
    return 0;
}