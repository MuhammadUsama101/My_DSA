/*
Row wise column wise sum and maximum sum from them
*/
#include<bits/stdc++.h>
using namespace std;
int RowSum(int arr[][4],int i , int j){
    int MaxSum=0,index=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        // cout<<sum<<endl;
        if(sum>MaxSum){
            index=i;
            MaxSum=sum;
        }
    } 
     cout<<"Maximum is :"<<MaxSum<<endl;
    return index;
}
int ColSum(int arr[][4], int i,int j){
    int MaxSum=0,index=-1;
    for(int j=0;j<4;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        // cout<<sum<<endl;
       if(sum>MaxSum){
        index=i;
        MaxSum=sum;
       }
    }
    cout<<"Maximum is :"<<MaxSum<<endl;
    return index;
}
int main(){
    int arr[3][4]={{7,2,2,4},{5,1,7,8},{2,12,1,5}};
      int sum1=RowSum(arr,3,4);
      int sum2=ColSum(arr,3,4);
      cout<<sum1<<endl;
      cout<<sum2<<endl;
}