#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abbacd";
    string temp="";
    temp=str[0];
    for(int i=1;i<str.size();i++){
        if(str[i]==temp.back()){
            temp.pop_back();
        }
        else{
            temp.push_back(str[i]);
        }
    }
    for(auto i:temp){
        cout<<i;
    }
}