#include <stdio.h>

struct stack
{
  int data[1000];
  int top;
} s;

void push(int a){
    s.top++;
    s.data[s.top]=a;
}

void pop(){
    int temp=s.data[s.top--];
    printf("%d\n",temp);
}

void print(){
    int i;
    for(i=0;i<=s.top;i++){
        printf("%d ",s.data[i]);
    }
    printf("\n");
}
int main(){
    s.top=-1;
    push(1);
    push(2);
    push(3);
    print();
    pop();
    print();
    return 0;
}
