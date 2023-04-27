#include<iostream>
#include<set>
using namespace std ; 
int main ( ) {
       set < int > s ;
       s . insert ( 3 ) ;
       s . insert ( 5 ) ;
       s . insert ( 2 ) ;
       s . insert ( 4 ) ;
       s . insert ( 3 ) ;
       s . insert ( 1 ) ; 
       s . insert ( 2 ) ; 
       for ( int i : s ){
        cout << i  << " " ;
       }  
       cout << endl ;
       cout << "emplacing an number " << endl ;
       s . emplace ( ) ;
       for ( int i : s ) {
              cout << i <<  " " ; 
       }
       cout << endl ;
       cout << "erasing an number " << endl ;
       s . erase ( s. begin () ) ;
       for ( int i : s ) {
               cout << i << " " ; 
       }
       cout << endl ; 
       cout << " for checking that number is present or not " << endl ;
       cout << "5 is or not " << s . count ( 5 ) ;      
       /* 
       1 means present and zero means not present 
       */
}