#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(0);
    for(auto i:d){
        cout<<i<<" ";
    }
    d.pop_back();
    cout<<"\nAfter pop back "<<endl;
    for(auto i:d){
        cout<<i<<" ";
    }
    d.pop_front();
    cout<<"\nAfter pop front "<<endl;
    for(auto i:d){
        cout<<i<<" ";
    }
    cout<<"\nAfter pushing more values "<<endl;
    d.push_back(3);
    d.push_front(5);
    for(auto i:d){
        cout<<i<<" ";
    }
    cout<<"\nThe size is \n"<<d.size ()<<endl;
    d.erase(d.begin()+2,d.begin()+3);
    cout<<"After erasing value "<<endl;
    for(auto i:d){
        cout<<i<<" ";
    }
    cout<<"\nValue at index 2 is "<<d.at(2);

}