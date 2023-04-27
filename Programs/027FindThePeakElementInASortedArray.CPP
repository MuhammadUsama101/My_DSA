#include<iostream>
using namespace std ;
int print(int arr[], int n){
    for ( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int peakindex(int arr[], int n){
    int start=0,end=n-1,mid;
    mid=start+(end-start)/2;
    while (start<end){
        if( arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else if (arr[mid]>arr[mid+1]){
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
 int main (){
    int arr[6]={0,5,10,9,6,3};
    print(arr,6);
   int peak = peakindex(arr,6);
   cout<<"\nThe Peak index is "<<peak;
 }