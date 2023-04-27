#include<iostream>
using namespace std ; 

int Binarysearch ( int arr [ ] , int n , int key  ){
    int start = 0 , end = n - 1 , mid ;
    mid = start +( end - start ) / 2 ; 
    while ( start <= end ) {
        if ( arr [ mid ] == key ){
            return mid ; 
        }
        else if ( key < arr [ mid ] ) {
            end = mid - 1 ;
        }
        else if ( key > arr [ mid ] ){
            start = mid + 1 ;
        }
        mid = start + ( end - start ) / 2 ;
    }
    
}
int main ( ){
    int arr [ 6 ] = { 3, 7, 11, 13, 19, 27 } , key ;
    cout << "Enter a key to check : "  ; 
    cin >> key ;
    int check = Binarysearch ( arr , 6 , key ) ; 
    cout <<"The index is : "<< check ;
}