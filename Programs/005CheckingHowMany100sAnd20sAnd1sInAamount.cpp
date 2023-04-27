#include<iostream>
using namespace std; 
int main(){
    int n , ans = 0 , div ; 
    cout<< " enter a number "<<endl; 
    cin>> n ;
    char check = 'c';
    cout<< " enter c for check "<< endl;
    cin >> check ;
    switch ( check ) {
        case 'c' :{
            div = (n / 100);
            ans = n - (div * 100);
            cout<< "100s are "<< div << endl ;
        }
        case 'f' :{
            div = ( ans / 50 );
            ans = ans - (div * 50 );
            cout<< "50s are "<< div << endl ;
        }
        case 't' :{
            div = ans / 20 ;
            ans = ans - ( div * 20 );
            cout<< "20s are " << div << endl ;  
        }
        case 'o' :{
           div = ans / 1 ;
           cout << "1s are " << div << endl ;  
        }
    }
}