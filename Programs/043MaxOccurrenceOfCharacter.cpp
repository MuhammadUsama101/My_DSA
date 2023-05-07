#include<bits/stdc++.h>
using namespace std;
// checking the  maximum occurrence of the character in a string 
char maxOccurrence(string &s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int num=0;
        num=ch-'a';
        arr[num]++;
    }
    int max=0,ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            max=arr[i];
            ans=i;
        }
    }
    return ans+'a';
}
int main(){
    string str;
    cout<<"Enter the string :"<<endl;
    cin>>str;
    cout<<maxOccurrence(str);
}
//----------------------------------------------------------------- 
//                    Using map concept 
//----------------------------------------------------------------- 
    // string given="usama Arshad";
    // map<string,int> mp;
    // string temp="";
    // for(auto i:given){
    //  temp+=i;  
    //  mp[temp]++;
    //  temp="";  
    // }
    // int largest_element=0;
    // for(auto i:mp){
    //     if(i.second>largest_element){
    //         largest_element=i.second;
    //     }
    // }
    // for(auto i:mp){
    //     if(largest_element==i.second){
    //         cout<<"The most occurred is : "<<i.first<<endl;
    //     }
    // }
