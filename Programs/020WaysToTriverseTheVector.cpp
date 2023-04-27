// Usama Arshad ...
#include<iostream >
#include<vector > 
using namespace std ;
 int main ( ) {
     vector < int > v ;
     v. push_back ( 1 ) ;
     cout << "capacity of vector " << v . capacity (  ) << endl ;
     v. push_back ( 2 ) ;
     cout << "capacity of vector " << v . capacity (  ) << endl ;
     v. push_back ( 4 ) ; 
     cout << "capacity of vector " << v . capacity (  ) << endl ;
     v . push_back ( 7 ) ;
     cout << "capacity of vector " << v . capacity (  ) << endl ;
     for ( int i : v ) {
        cout << i << " ";
     } 
     cout << endl ;
     cout << "size of vector is " << v . size ( ) << endl ;
     cout << "capacity of vector " << v . capacity (  ) << endl ;
     cout << "before pop back " << endl ;
     for ( int i : v ) {
        cout << i  << " " ; 
     }
     cout  << "\nAfter pop back " << endl ;
     v . pop_back ( ) ;
     for ( int i : v ){
        cout << i << " " ;
     }
     cout << "\nchecking first element " << endl ;
     cout << v . front ( ) ;
     cout << "\nChecking the last element " << endl ;
     cout << v . back ( ) ;
     cout << " \n" ;
     vector < int > v1 ( 5 , -3 ) ;
     for ( int i : v1 ) {
        cout << i << " " ; 
     }
     cout<<"\nBefore clear" <<endl;
    for(auto i:v){
      cout<<i<<" ";
    }
    cout<<"\nCapacity before clear "<<v.capacity()<<endl;
    cout<<"size before clear "<<v.size()<<endl;
    cout<<"random position "<<v.at(1)<<endl;
    v.clear();
    cout<<endl<<"After clear "<<endl;
    for(auto i:v){
      cout<<i<<" ";
    }
    cout<<"Capacity after clear "<<v.capacity()<<endl;
    cout<<"size after clear "<<v.size()<<endl;
 }
/*
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main (){
   int arr[5]={1,7,3,2,1};
   vector<int> v;
   for(int i=0;i<5;i++){
      v.push_back(arr[i]);
   }
   for(auto i:v){
      cout<<i;
   }
   cout<<endl;
   sort(v.begin(),v.end(),greater<int>()); it will reverse all the num
   for(auto i:v){
      cout<<i<<" ";
   }
}
*/
// ----------------------------------------------------------------
/*
#include<iostream>
#include<vector>
using namespace std ; 
int main ( ) {
   vector < int > v ;
   v . push_back ( 1 ) ;
   v . push_back ( 2 ) ; 
   v . push_back ( 3 ) ;
   cout << "first way to triverse the vector " << endl ;
   for ( int i = 0 ; i < v . size ( ) ; i ++ ) {
        cout << v [ i ] << " " ;
   }
   cout << "\n Second way to triverse the vector " << endl ;
   vector < int > :: iterator it ;
   for ( it = v.begin ( ) ; it != v . end ( ) ; it ++ ){
    cout << *it << " " ;
   } 
   cout << " \n Third way to triverse the vector " << endl ; 
   for ( auto element : v ){
     cout << element << " " ; 
   }
   cout << endl ;
//    removing last number from vector 
cout << " pop-back concept "  << endl ;
    v . pop_back ( ) ;
     for ( auto element : v ) {
         cout << element << " " ; 
     }
       cout << " \n" ; 
       cout << " making another vector with another style " ; 
     vector < int > v1 ( 3 , 2 ) ; 
     for ( int i = 0 ; i <= v . size ( ) ; i ++ ) {
        cout << v1 [ i ] << " " ;
     }
}
push_back is for adding the new number in an vector it comes 
at the end as shown in the program ...
pop_back is for eleminating a number from an vector ...
*/