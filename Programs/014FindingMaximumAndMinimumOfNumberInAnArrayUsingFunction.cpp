#include<iostream >
using namespace std; 

int max ( int arr[ ] , int n ) {
     int max = 0  ;
     max = arr [ 0 ] ; 
     for ( int i = 0 ; i < n ; i ++ ) {
           if ( arr [ i ] > max ) {
             max = arr [ i ] ; 
           }
     }
     return max ; 
}

int min ( int arr [ ] , int n ) {
    int min = 0 ; 
    min = arr[ 0 ] ;
    for ( int i = 0 ; i < n ; i ++ ) {
         if ( arr [ i ] < min ) {
             min = arr [ i ] ; 
         }
    }
    return min ; 
}

int main ( ) {
     int size ;
      cout << "Enter a size of array  " << endl ;
      cin >> size ; 
      int arr [ 100 ] ; 
      for ( int i = 0 ; i < size ; i ++ ) {
         cin >> arr [ i ] ; 
      } 
      int ans = max ( arr , size ) ; 
      int anss = min ( arr , size ) ; 
      cout << " The maximum number is " << ans << endl ; 
     cout << " The minimum number is " << anss << endl ;  
}