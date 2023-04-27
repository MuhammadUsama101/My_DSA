#include<iostream>
using namespace std; 
int main ( ) {
    long y = 0 , n , i = 3 , count = 0 ; 
    cout << " enter a number " << endl; 
    cin >> n ; 
    while ( n > y ) {
        y = y + i ;   //y += i ;
        i = i + 2 ;   //i += 2 ;
        count ++  ;
    }
    cout << "square root of " << n << " is " << count << endl ;
}