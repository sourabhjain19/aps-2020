#include<stdio.h>

struct queue{
    int data[1000];
    int front;
    int rear;
} q ;

void enqueue(int a){
    q.rear++;
    q.data[q.rear]=a;
}

void dequeue(){
    printf("%d\n",q.data[q.front++]);
}

void print(){
    int i;
    for(i=q.front;i<=q.rear;i++){
        printf("%d ",q.data[i]);
    }
    printf("\n");
}

int main(){
    q.front=0;
    q.rear=-1;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    print();
    dequeue();
    print();
    dequeue();
    print();
}