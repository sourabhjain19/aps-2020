#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int,int> m;

    
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(5,40));
    
    for(auto i=m.begin();i!=m.end();i++){
        cout<<i->first<<" "<<i->second<<"\n";
    }

    cout<<"\n";
    
    map <int,int> m2(m.begin(),m.end());

    for(auto i=m2.begin();i!=m2.end();i++){
        cout<<i->first<<" "<<i->second<<"\n";
    }

    m2.erase(m2.begin(),m2.find(2));

    cout<<"\n";
    
    for(auto i=m2.begin();i!=m2.end();i++){
        cout<<i->first<<" "<<i->second<<"\n";
    }

    return 0;
}