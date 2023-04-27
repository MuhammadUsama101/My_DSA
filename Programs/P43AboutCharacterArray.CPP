#include<bits/stdc++.h>
using namespace std;
// upper case to lower case  
int ToLowerCase(char ch){
    if(ch>='a'&& ch<='z')
    return ch;
    else {
      char temp=ch-'A'+'a';
      return temp;
    }
}
// palindrome or not
bool CheckPalindrome(char name[] , int n){
    int start=0, end=n-1;
    while(start<=end){
        if(ToLowerCase(name[start])!= ToLowerCase(name[end])){
            return false;
        }
        else {
            start++; 
            end--;
        }
     return true;
    }
} 
// For reversing string 
void reverse(char name[],int n){
    int start=0, end=n-1;
    while(start<=end){
        swap(name[start++],name[end--]);
    }
}
// for getting length 
int Getlenght(char name[]){
     int count =0;
    for (int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    // name[3]='\0';
    cout<<"Your name is "<< name<<endl;
    cout<<"The lenght is "<<Getlenght(name)<<endl;
    int n=Getlenght(name);
    cout<<"Name is palindrome or not :"<<CheckPalindrome(name , n)<<endl;
    reverse(name,n);
    cout<<name<<endl;
}