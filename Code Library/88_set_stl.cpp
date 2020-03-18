#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int,greater<int>> s;

    s.insert(12);
    s.insert(15);
    s.insert(6);
    s.insert(5);
    s.insert(20);

    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }

    cout<<"\n";
    
    set <int> s2(s.begin(),s.end());

    for(auto i=s2.begin();i!=s2.end();i++){
        cout<<*i<<" ";
    }

    s2.erase(s2.begin(),s2.find(12));

    cout<<"\n";
    
    for(auto i=s2.begin();i!=s2.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}