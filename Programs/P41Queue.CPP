#include<iostream>
#include<queue>
using namespace std; 
int main(){
    queue <string> q;
    q.push("Muhammad");
    q.push("Usama");
    q.push("Arshad");
    cout<<"The value at top is "<<endl;
    cout<<q.front();
    cout<<"\nThe value at end is "<<endl;
    cout<<q.back();
}