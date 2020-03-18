#include <iostream>
#include <list>
#include <iterator> 

using namespace std;

int main(){
    list <int> l;

    l.push_back(3);
    l.push_back(3);
    l.push_back(4);
    l.push_back(6);

    l.push_front(10);
    l.push_front(11);
    l.push_front(12);
    l.push_front(13);

    l.pop_back();
    l.pop_front();

    l.sort();

    l.reverse();

    //removes all the ocurrance of element
    l.remove(3);

    l.unique();

    for(auto i=l.begin();i!=l.end();i++){
        cout<<*i<<"\n";
    }
    
    
    return 0;
}

