#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque <int> d;
    d.push_back(10);
    d.push_front(11);
    d.push_back(12);
    d.push_front(13);

    d.pop_front();
    d.pop_back();
    for(auto i=d.begin();i!=d.end();i++){
        cout<<*i<<"\n";
    }

    return 0;
}