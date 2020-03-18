#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue <int> q,temp;

    q.push(10);
    q.push(20);
    q.push(30);
    
    q.pop();

    temp=q;

    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }

}