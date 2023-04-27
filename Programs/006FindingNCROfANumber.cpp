#include<iostream>
using namespace std; 
int fact ( int n ) {
    int fact = 1 ;
    for ( int i = 1 ; i <= n ; i++ ){
        fact *= i ; 
    }
    return fact ;
}

int ncr ( int n , int r ){
    int numerator = fact (n) ;
    int denumerator = fact (r) * fact (n - r) ;
    int ans = numerator / denumerator ;
    return ans ;
}

int main(){
    int  ans , n , r ;
    cout<< "enter n and r for ncr "<< endl ; 
    cin>> n >> r ;
    ans = ncr ( n , r);
    cout << "Answer is " << ans << endl ; 
}