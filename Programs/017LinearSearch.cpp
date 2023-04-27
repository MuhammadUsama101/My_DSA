#include<iostream>
using namespace std ;

bool search ( int arr[ ] , int size , int key ) {
    for ( int i = 0 ; i < size ; i ++ ){
         if ( arr[ i ] == key ) {
            return 1 ;
         }
    }
    return 0 ;
}

int main ( ) {
    int key , arr [ 5 ] = { 1, 4 ,5 ,7 ,5 } , size ; 
    cout << "Enter a key to find " << endl ;
    cin >> key ;
    bool found = search  (arr , 5 , key ) ;
    if ( found ) {
        cout << " key is present " << endl ;
    } 
    else {
        cout << "key is absent " << endl ;
    }
}