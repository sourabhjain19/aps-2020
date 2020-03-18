#include<iostream>
#include<forward_list>

using namespace std;

int main(){
    forward_list <int> fl,fl2,fl3,fl4;

    fl.assign({1,2,3,4,5});

    fl2.assign({10,20,30,40,50});

    fl3.assign({1,2,3,4,5});

    fl4.assign({10,20,30,40,50});
    
    for(auto i=fl.begin();i!=fl.end();i++){
        cout<<*i<<" ";
    }

    fl.insert_after(fl.begin(),100);
    
    cout<<endl;

    fl.splice_after(fl.begin(),fl2);
    
    for(auto i=fl.begin();i!=fl.end();i++){
        cout<<*i<<" ";
    }

    fl4.merge(fl3);

    for(auto i=fl4.begin();i!=fl4.end();i++){
        cout<<*i<<" ";
    }
    
    return 0;
}