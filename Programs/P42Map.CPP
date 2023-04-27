#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    map<int , int > m1;
    map<int ,string> m;
    m[1]="Muhammad";
    m[3]="Arshad";
    m[2]="Usama";
    m[1]="Muhammad";
    m[3]="Arshad";
    m[2]="Usama";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }
    int arr[5]={5,2,6,8,9};
    for(int i=0;i<5;i++){
        m1[arr[i]]++;
    }
    for(auto i:m1){
        cout<<i.first<<" ";
    }
}