#include<iostream>
using namespace std; 

bool isPrime(int n ){
    for ( int i = 2 ; i < n ; i++ ){
        if ( n % i == 0 ){
            return 0 ;
        }   
    }
    return 1 ;
}

int main (){
    int n ; 
    cout << "Enter a number to check it is prime or not "<<endl ;
    cin >> n ;
    if ( isPrime(n)){
        cout << "Is a prime number "<< endl; 
    }
    else 
     cout << "not a prime number "<< endl; 

}