#include<iostream>
using namespace std; 
bool ispossible(int n ){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=i*2;
        if(ans==n){
            return true;
        }
    }
   return false ;
}
int main (){
    int n ;
    cout<<"Enter a number to check" <<endl;
    cin>>n;
    int k=ispossible(n);
    cout<<k;
}