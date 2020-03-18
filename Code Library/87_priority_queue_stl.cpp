//decending sort

#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue <int> pq,temp;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    temp=pq;

    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }

}