#include<iostream>
using namespace std ; 

  int print ( int arr [] , int n ){
    for ( int i = 0 ; i < n ; i ++ ){
        cout << arr [ i ] << " " ; 
    }
  }

  int Dnfsort ( int arr [] , int n ) {
    int start = 0 , mid = 0 , end = n - 1 ;
    while ( mid < end ){
        if ( arr [mid] == 0 ){
            swap ( arr [ mid ] , arr [ start ] ) ;
            mid ++ ;
            start ++ ; 
        }
        else if ( arr [mid] == 1 ){
             mid ++ ; 
        }
        else if ( arr [ end ] == 2 ){
            end -- ;
        }
        else if ( arr [ mid ] == 2 ){
            swap ( arr [ mid ] , arr [ end ] ) ; 
        }

    }
  }

int main ( ){
    int arr [ 10 ] = { 0 , 1 , 2 , 0 , 1 , 2  , 1 , 0 , 1 , 2 } ;
    cout << "Printing array before sorting " << endl ;
    print ( arr , 10 ) ;
    Dnfsort( arr , 10 ) ;
    cout << "\nAfter sorting " << endl ; 
    print (arr , 10 ) ;
}