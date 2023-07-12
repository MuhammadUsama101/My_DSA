#include<bits/stdc++.h>
using namespace std;
bool Function(int arr[][4], int target , int i , int b){
    for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            if(arr[i][j]==target)
            return 1;
        }
    }
    return 0;
}
int main(){
     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
     int target;
     cout<<"Enter the target "<<endl;
     cin>>target;
     if(Function(arr, target ,3,4))
     {
        cout<<"Found"<<endl;
     }
     else cout<<"Not found";
}