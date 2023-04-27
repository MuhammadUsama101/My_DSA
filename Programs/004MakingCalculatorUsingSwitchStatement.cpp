#include<iostream>
using namespace std;
int main(){
    int a , b , sub , sum , div , pro , mod ; 
    cout<< " enter value of A and B "<< endl;
    cin>> a >> b ;
    char op ; 
    cout<< " enter a operation which you want to perform "<< endl;
    cin>> op ;
    switch ( op ){
         case '*':
             pro = a * b ;
            cout<< " product is "<< pro << endl ;
            break;
         case '/':
             div = a / b ;
            cout<< " div is "<< div << endl ;
            break;
         case '+':
             sum = a + b ;
            cout<< " the sum is "<< sum << endl; 
             break;
         case '-':
             sub = a - b ;
            cout<< " The subtract is "<< sub << endl; 
            break;
         case '%':
          mod = a % b ;
           cout<< "the module is " << mod << endl; 
           break;
           default :
           cout<< " this is invalid operation "<< endl;
    }
}