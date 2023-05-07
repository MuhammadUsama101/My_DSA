// converting string (my name is usama) into many forms
// ---> amasu si eman yM
// ---> usama is name my 
// ---> yM eman si amasu
#include<bits/stdc++.h>
using namespace std;
int main(){
    string given="My name is usama";
    vector<string> main_ans; //make it stack to run stack porgram
    string temp="";
//--------------------------------------------------- 
//--------------------------------------------------- 
//    for reversing the whole string
            // reverse(given.begin(),given.end());
            // cout<<given;
//--------------------------------------------------- 
//--------------------------------------------------- 
//--------------------------------------------------- 
//    for reversing the words
// here i am using stack instead of vector so stack<string> main_ans;
            // for(auto i:given){
            //     if(i==' '){
            //         main_ans.push(temp);
            //         temp="";
            //     }
            //     else 
            //     temp+=i;
            // }
            // main_ans.push(temp);
            // while(!main_ans.empty()){
            //     cout<<main_ans.top()<<" ";
            //     main_ans.pop();
            // }
//--------------------------------------------------- 
//--------------------------------------------------- 
//--------------------------------------------------- 
//    for reversing the string but in sequence 
            //  for(auto i:given){
            //      if(i==' '){
            //         reverse(temp.begin(),temp.end());
            //          main_ans.push_back(temp);
            //          temp="";
            //      }
            //      else 
            //      temp+=i;
            //  }
            //  reverse(temp.begin(),temp.end());
            //  main_ans.push_back(temp);    
            //  for(auto i:main_ans){
            //     cout<<i<<" ";
            //  }
//--------------------------------------------------- 
//--------------------------------------------------- 
//--------------------------------------------------- 
}