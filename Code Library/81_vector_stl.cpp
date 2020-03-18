#include <iostream> 
#include <vector> 
  
using namespace std;

int main(){

    vector <int> a1;

    a1.push_back(10);
    a1.push_back(20);
    a1.push_back(30);

    vector <int> ::iterator it;
    
    it=a1.begin();
    it++;
    a1.insert(it,100);

    a1.pop_back();

    for(auto i=a1.begin();i<a1.end();i++){
        cout<<*i<<"\n";
    }

    cout<<"Size = "<<a1.size()<<"\n";
    cout<<"Capacity = "<<a1.capacity()<<"\n";

    a1.resize(10);

    cout<<"Size = "<<a1.size()<<"\n";
    cout<<"Capacity = "<<a1.capacity()<<"\n";

    a1.resize(3);

    a1.erase(it);

    for(auto i=a1.begin();i<a1.end();i++){
        cout<<*i<<"\n";
    }

    return 0;
}

