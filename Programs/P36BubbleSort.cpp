#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    int arr[30];
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j+1],arr[j]);
            }
        }
    }
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*
ya ak unstable algorithm ha kion ka agr to array ma 3,3 a raha ha to 
ya zrari nahi ha ka ya order ma he a raha ho ga is ki position agy 
picha ho skti ha so thats why ya unstable algorithm ha...
--------------------------
pr isi ka sath sath ya ak in-place sorting ha kion ka hmm 
usi array ka ander rahty howa usa sort kr rahy haan us ka lia
kisi temporary arr ya vector wagera ka istemal nai kr rahy 
is lia ya in-place sorting ma ata ha ....
*/