#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    int ans=0;
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);

}
void printingFibonnic(int n){
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
}
int main(){
   int n;
   cout<<"Enter the number "<<endl;
   cin>>n;

   printingFibonnic(n);
}