#include<bits/stdc++.h>
using namespace std;
int main(){
    string given="My name is usama";
    string temp="";
    for(int i=0;i<given.length();i++){
        if(given[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else {
            temp.push_back(given[i]);
        }
    }
    cout<<temp;
}
    // string given="My name is usama";
    // vector<string> v;
    // string temp="";
    // for( auto i:given){
    //     if(i==' '){
    //     temp+="@40";
    //     }
    //     else 
    //      temp+=i;
    // }
    // v.push_back(temp);
    // for(auto i:temp){
    //     cout<<i;
    // }
