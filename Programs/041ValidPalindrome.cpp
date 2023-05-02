#include<bits/stdc++.h>
using namespace std;


// removing extra's from the character array 
bool valid(char ch){
    if(ch>='a'&& ch<='z'||ch>='A'&& ch<='Z'||ch>='0'&& ch<='9')
        return 1;
    else 
         return 0;
    
}


// converting into lowercase
int lowerCase(char ch){
    if(ch>='a'&& ch<='z'||ch>='0'&& ch<='9'){
        return ch;
    }
    else {
        char temp =ch-'A'+'a';
        return temp;
    }
}

// checking palidrome or not
bool Checking ( vector<char> s){
    int n=s.size();
    int start=0, end = n-1;
    while(start<=end){
        if(s[start]!= s[end]){
            return 0;
        }
        else{
            start++ ;
            end--;
        }
    }
    return 1;
}
int main(){
    vector<char > temp;
    char name[100]="A man , a plan ,a canal : Panama";
    cout<<"String is:"<<name;


    // check that my string is valid or not 
    for ( int i=0;name[i]!='\0';i++){
        if(valid (name[i]))
        temp.push_back(name[i]);
    }
    cout<<endl;
    for( auto i : temp){
        cout<<i;
    }

   
    // converting into lowercase
     
     for( int i=0;i<temp.size();i++){
       temp[i]=lowerCase(temp[i]);
     }
    cout<<endl;
    for( auto i : temp){
        cout<<i;
    }
                                                           
    // checking that valid palindrome or not
    cout<<endl;
    cout<<"The ans is "<<Checking(temp);
    /*
    int n=temp.size();
    for( int i=0;i<n;i++){
        if(lowerCase(temp[i])){
            temp2.push_back(temp[i]);
        }
    }
    cout<<endl;
    for( auto i : temp2){
        cout<<i;
    }
    */
    
}