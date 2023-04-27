#include<iostream>
using namespace std;

void printArray ( int arr [] , int size ){
     for ( int i = 0 ; i < size ; i ++ ){
         cout << arr[ i ] << " " ; 
     } 
     cout << " printing done " << endl; 
}

int main (){
     int first [ 10 ] = { 0 } , size = 10 ;
     printArray ( first , 10 );

     size = 7 ; 
     int sec [ 7 ] = { 1 , 4 , 6 , 5 , 3 , 5 , 7 } ; 
     printArray ( sec , 7 ) ; 

     size = 5 ;
     int third [ 5 ] = { 2 , 7 , } ; 
     printArray ( third , 5 ); 
}   