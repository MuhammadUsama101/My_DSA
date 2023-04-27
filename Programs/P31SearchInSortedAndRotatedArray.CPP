#include<iostream>
using namespace std;
int search(int arr[],int s ,int e ,int key){
    int start =s, end =e;
   int mid = start +(end-start)/2;
    while (start<=end){
       if (key>arr[mid]){
        start=mid +1;
       }
       else if (key==arr[mid]){
        return mid;
       }
       else if (key<arr[mid]){
        end=mid-1;
       }
        
        mid = start+(end-start)/2;
    }
   
} 
int Pivot(int arr[],int n){
    int start=0,end=n-1,mid;
    mid = start +(end-start)/2;
    while (start<end){
        if(arr[mid]<arr[0]){
            end = mid;
        }
        else if ( arr[mid]>arr[0]){
            start = mid +1;
        }
        mid= start+(end-start)/2;
    }
    return start;
}
int print ( int arr[], int n ){
    for ( int i=0;i<n;i++){
        cout << arr[i]<<" " ;
    }
}
int findingPosition(int arr[],int n ,int key){
    int pivot = Pivot(arr,7);
    if (key>=arr[pivot] && key<=arr[n-1]){
        return search(arr, pivot , n-1 ,key );
    }
    else 
        return search(arr, 0,pivot-1, key);
}
int main (){
    int key,arr[7]={5,6,0,1,2,3,4};
    cout<<"Enter a key to check the index "<<endl;
    cin >> key;
    int find = findingPosition(arr,7,key);
    cout << "The index is "<< find<< endl ;
}



/*
Another approch 

class Solution {
public:
    int search(vector<int>& nums, int target) {
     int n = nums.size();
      int left = 0;
      int right = n-1;
      int mid= left + (right - left) / 2;
      while(left <= right){
      mid = left + (right - left) / 2;
        if(nums[mid] == target)
         return mid;
        if(nums[mid] >= nums[left]) {
          if(target >= nums[left] && target <= nums[mid])
            {
                right = mid - 1;
            }
           else left = mid + 1;
        } 
        else {
          if(target >= nums[mid] && target <= nums[right]) 
            left = mid + 1;
          else right = mid - 1;
        }
          mid = left + (right - left) / 2;
      }
      return -1;
    }
};

*/