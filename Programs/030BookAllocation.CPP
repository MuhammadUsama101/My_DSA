#include<iostream>
using namespace std; 
bool isPossible(int arr[],int n, int m,int mid){
    int studentcount =1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else {
            studentcount++;
            if(studentcount>m || pagesum>mid ){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int Book_allocating(int arr[],int n, int m){
//here i have to make search space so i have to take it from 0 to 100.
    int start=0,sum=0,ans=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(arr,n,m,mid)){
           ans=mid;
           end =mid-1; 
        }
        else {
            start =mid+1;
        }
        mid =start+(end-start)/2;
    }
    return ans;
}
int main (){
    int arr[4]={12, 34, 67, 90};
    
    int n=Book_allocating(arr,4,2);
    cout<<n;
}
/*
int pagesum=0,studentCount=1;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else {
            studentCount++;
            if(studentCount>mid || pagesum>mid){
                return false ;
            }
            pagesum=arr[i];

        }
    }
    return true;
*/