#include<bits/stdc++.h>
using namespace std;
int main (){
    int temp,arr[7]={10,1,7,4,8,2,11};
    for(int i=1;i<7;i++){
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"Insertion sorted array "<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}