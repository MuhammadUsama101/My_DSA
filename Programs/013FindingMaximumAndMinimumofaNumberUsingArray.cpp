#include<iostream>
using namespace std ;
int main () { 
    int arr[ 5 ] = { 1 , 3 , 5 , 7 , 2 } ;
    int max = 0 ;
    max = arr [ 0 ] ; 
    for ( int i = 0 ; i < 5 ; i ++ ) { 
        if ( arr [ i ] > max ){
          max = arr [ i ] ;
        }
    }    
    cout << " the maximum array is " << max ;
}