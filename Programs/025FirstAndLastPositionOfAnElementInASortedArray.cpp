#include<iostream>
using namespace std ; 

int firstOccurence ( int arr [ ] , int n , int key ) {
    int ans = 0 , start = 0, end = n - 1 , mid ;
    mid = start + (end - start ) / 2 ;
    while ( start <= end ){
        if ( key == arr [ mid ] ) {
            ans = mid ;
            end = mid - 1 ;
        }
        else if ( key > arr [ mid ] ) {
            start = mid + 1 ;
        }
        else if ( key < arr [ mid ] ) {
            end = mid - 1 ;
        }
        mid = start + ( end - start ) / 2 ;
    }
    return ans ; 
}

int lastOccurence ( int arr [ ] , int n , int key ) {
    int ans = 0 , start = 0, end = n - 1 , mid ;
    mid = start + (end - start ) / 2 ;
    while ( start <= end ){
        if ( key == arr [ mid ] ) {
            ans = mid ;
            start = mid + 1 ;
        }
        else if ( key > arr [ mid ] ) {
            start = mid + 1 ;
        }
        else if ( key < arr [ mid ] ) {
            end = mid - 1 ;
        }
        mid = start + ( end - start ) / 2 ;
    }
    return ans ; 
}

int main ( ){
    int ans  , ans1 , arr [ 7 ] = { 1, 3 ,4, 4, 4, 7 ,9 } , key ;
    cout << "Enter a key to find its occurence " << endl ;
    cin >> key ; 
    ans = firstOccurence( arr , 7 , key) ;
    ans1 = lastOccurence (arr , 7 , key ) ;  
    cout <<"first index :"<< ans << endl ;
    cout <<"last  index :"<< ans1 << endl ; 

}