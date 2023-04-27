#include<iostream>
using namespace std;
int pivot(int arr[], int n){
    int start=0 , end=n-1 , mid ;
    mid=start + (end-start)/2;
    while(start<end){
        if (arr[mid]>=arr[mid+1]){
            start = mid+1;
        }
        else {
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int print(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={5,6,0,1,2,3,4};
    print (arr, 7);
      cout<<"\nThe pivot index is "<<pivot(arr,7);
}