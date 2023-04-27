/*
Jo cheez pahly enter krta haan wo end pr niklti haan 
or jo end pr hoti ha pahli niklti haan 
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <string> s;
    s.push("Muhammad");
    s.push("Usama");
    s.push("Arshad");
    cout<<"\nBefore pop (top is) "<<s.top();
    s.pop();
    cout<<"\nAfter pop (top is) "<<s.top();
    cout<<"\nThe size of stack is "<<s.size();
}