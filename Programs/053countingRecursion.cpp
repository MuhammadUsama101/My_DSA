#include<bits/stdc++.h>
using namespace std;
void counting(int n){
    if(n==0){
        return ;
    }
    counting(n-1);
    cout<< n<<endl;  /*to get counting in reverse take this above 
    counting(n-1) function*/
}
int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    counting(number);
    return 0;
}