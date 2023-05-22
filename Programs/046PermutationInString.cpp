#include<bits/stdc++.h>
using namespace std;
bool checking (int arr1[] , int arr2[]){
    for( int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}
bool slidingFunction(string str1, string str2){
        int i=0;
        int arr1[26]={0};
    int arr2[26]={0};
    for( int i=0;i<str2.size();i++){
        int index= str2[i]-'a';
        arr1[index]++;
    }
    int slidingwindow=str2.size();
    while(i<str2.size()){
        int index= str1[i]-'a';
        arr2[index]++;
        i++;
    }
    if(checking(arr1,arr2)){
        return 1;
    }
    while(i<str1.size()){
        int index=str1[i]-'a';
        arr2[index]++;
        index=str1[i-slidingwindow]-'a';
        arr2[index]--;
        i++;
        if(checking(arr1,arr2)){
            return 1;
        }
    }
    return 0;
}
int main(){
    string str1="eidbaooo";
    string str2="ao";
    cout<<"The correct ans is "<<slidingFunction(str1,str2);
}