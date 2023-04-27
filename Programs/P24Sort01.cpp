#include<iostream>
using namespace std ; 

void print ( int arr [] , int n ){
    for ( int i = 0 ; i < n ; i ++ ){
        cout << arr [ i ] << " " ; 
    }
}

void sort( int arr [] , int n ) {
    int start = 0 , end = n - 1 ;
    while ( start < end ){
        if ( arr [ start ] == 0 ){
            start ++ ;
        }
        else if ( arr [ end ] == 1 ){
            end -- ; 
        }
        else if ( arr [start ] == 1 ){
            swap ( arr [ start] , arr [ end ] ) ;
        }
    } 
}

int main ( ){
    int arr [ 9 ] ={ 0 , 1 , 0 , 1 , 1 ,0 , 0 , 1 ,0 } ;
    cout << "before sorting " << endl  ; 
    print (arr , 9 ) ;
    cout << "\nAfter sorting " << endl ;
    sort ( arr , 9 ) ;  
    print ( arr , 9 ) ;
}