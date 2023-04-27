#include<iostream>
using namespace std; 
int main ( ){
    
     int name[ 100 ];
     fill_n (name ,  100  , 1 );
     for ( int i = 0 ; i < 100 ; i++ ){
         cout << name [ i ] << " " ; 
     }
}