#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack <int> s,temp;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();

    temp=s;

    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }

    return 0;
}