//    ----------------------------------
//    | check number is at which index |
//    ----------------------------------
/*
#include<iostream>
using namespace std; 
int NumberIsAt(int arr[], int n ){
    int start=0, end =5-1;
    int mid =start+(end-start)/2;
    while (start<=end){
        if(n==arr[mid]){
            return mid;
        }
        if(n>arr[mid]){
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}
int main (){
    int n, arr[5]={1,2,3,4,5};
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<"The index of the number is "<< NumberIsAt(arr,n);
}
*/

//    --------------------------------------------------
//    | check number is at which index in reverse array |
//    --------------------------------------------------
/*
#include<bits/stdc++.h>
using namespace std; 
int IndexIs(int arr[], int key ){
    int start=0, end =5-1;
    int mid=start+(end-start)/2;
    while (start<=end){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    mid=start+(end-start)/2;
    }
}
int main (){
    int arr[5]={20,17,13,10,7},key;
    cout<<"Enter a key ";
    cin >>key;
    cout<<"The index of this "<< key <<" is "<<IndexIs(arr,key);
}
*/
//    ------------------------------------------------
//    | check sorted in ascending or descending order|
//    ------------------------------------------------
/*
#include<bits/stdc++.h>
using namespace std; 
int main (){
    int arr[100],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the values of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
        if(arr[start]>arr[start+1]){
            cout<<"It is in desending order "<<endl;
        }
        else {
         cout<<"It is in ascending order "<<endl; 
        }
}
*/
//    -----------------------------------------
//    | first & last occurrence of the element |
//    -----------------------------------------
/*
#include<bits/stdc++.h>
using namespace std; 
int FirstOccurrence(int arr[], int num){
    int start=0, end=18,ans=-1;
    int mid =start+(end-start)/2;
    while(start<=end){
        if(num==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if (num<arr[mid]){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
     mid =start+(end-start)/2;
    }
    return ans;
}
int LastOccurrence(int arr[], int num){
    int start=0, end=18,ans=-1;
    int mid =start+(end-start)/2;
    while(start<=end){
        if(num==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        else if (num<arr[mid]){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
     mid =start+(end-start)/2;
    }
    return ans;
}
int main (){
    int num,arr[19]={1,2,2,3,3,4,4,4,4,5,8,8,8,9,9,9,9,10,10};
    cout<<"Enter the number to check occurrence "<<endl;
    cin >>num;
     cout<<"The first occurrence is "<<FirstOccurrence(arr, num)<<endl;
    cout<<"The last occurrence is "<<LastOccurrence(arr, num);
}
*/
//    -----------------------------------------
//    |         count  of the element         |
//    -----------------------------------------
/*
#include<bits/stdc++.h>
using namespace std; 
int FirstOccurrence(int arr[], int num){
    int start=0, end=18,ans=-1;
    int mid =start+(end-start)/2;
    while(start<=end){
        if(num==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if (num<arr[mid]){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
     mid =start+(end-start)/2;
    }
    return ans;
}
int LastOccurrence(int arr[], int num){
    int start=0, end=18,ans=-1;
    int mid =start+(end-start)/2;
    while(start<=end){
        if(num==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        else if (num<arr[mid]){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
     mid =start+(end-start)/2;
    }
    return ans;
}
int main (){
    int num,arr[19]={1,2,2,3,3,4,4,4,4,5,8,8,8,9,9,9,9,10,10};
    cout<<"Enter the number to check occurrence "<<endl;
    cin >>num;
     cout<<"The first occurrence is "<<FirstOccurrence(arr, num)<<endl;
    cout<<"The last occurrence is "<<LastOccurrence(arr, num);
    int sum1=FirstOccurrence(arr,num),sum2=LastOccurrence(arr,num);
    int totalSum= sum2-sum1+1;
    cout<<"\nThe count of the element is "<<totalSum;
}
*/
//    -----------------------------------------------------------
//    |number of times a sorted array is rotated or finding pivot|
//    -----------------------------------------------------------
/*
#include<bits/stdc++.h>
using namespace std ;
int NumberOfTimesArrayRotated(int arr[]){
    int start=0,end=7;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>arr[mid+1]){
            start=mid+1;
        }
        else {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main (){
    int arr[8]={11,12,15,18,2,5,6,8},num;
    cout<<"Pivot is "<<NumberOfTimesArrayRotated(arr);
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
       
}