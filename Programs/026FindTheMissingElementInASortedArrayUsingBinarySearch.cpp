#include<iostream>
using namespace std ;

int findarray( int arr [] , int n ) {
    int start = 0 , end = n - 1  , mid ;
    mid = start +( end - start ) / 2 ;  
    while ( start <= end ) {
        if ( arr [ mid ] <= mid ){
            start = mid + 1 ;
        }
        else if ( arr [ mid] > mid ){
            end = mid - 1 ;
        }
        mid = start +( end - start ) / 2 ;
    }
    return start ; 
}

int main ( ){
     int   ans , arr [ 6 ] ={ 0 , 1, 2, 3 ,5, 6 } ;
     cout << "\nThe array before sorting " << endl ;
     for ( int i = 0 ; i < 6 ; i ++ ){
        cout << arr [ i ] << " " ;
     }
    ans = findarray( arr , 6 ) ;
    cout << "\nThe missing element is " << ans ;
}