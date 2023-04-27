#include<iostream>
#include<math.h>
using namespace std; 
int main(){
    int n ;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int i = 0 , ans = 0 ,digit ; 
    while(n != 0){
        digit = n % 10;
        if(digit == 1 ){
            ans = ans + pow(2 , i);
        }
            n = n / 10;
            i++; 
    }
    cout<<ans<<endl;
}