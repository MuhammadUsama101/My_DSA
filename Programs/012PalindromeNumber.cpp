#include<iostream>
using namespace std; 
int main ( ){
     int n , ans = 0 ; 
     cout << "Enter a number " << endl ;
     cin >> n ; 
     int temp = n ; 
     if ( n < 0 ) {
         cout << " Not a palindrome number " << endl ;
         return 0;
     }
    while ( n != 0 ) {
         int digit = n % 10 ; 
         ans = ( ans * 10 ) + digit ; 
         n = n / 10 ; 
    }   
       if ( ans == temp ){
    cout << " it is palindrome number " << endl ;
    }
    else {
        cout << " Not a palindrome number " << endl ; 
    } 
}