#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    // base case
    if(n==0){
        return 1;
    }
    int smallerSolution = factorial(n-1);
    int biggerSolution = n*smallerSolution;
    return biggerSolution;
}
int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    cout<<factorial(number);
}