#include <stdio.h> 
#include <stdlib.h> 

struct node{
    int data;
    struct node *next;
};

struct node * append(struct node *root,int a){
    struct node *temp=(struct node * )malloc(sizeof(struct node));
    temp->data=a;
    temp->next=NULL;

    if (root == NULL){
        root=temp;
        root->next=NULL;
    }
    else{
        struct node * temp1=root;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return root;
}

void print(struct node *root){
    struct node *temp=root;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main() {
    struct node *root = NULL;
    append(root,10);
    print(root);
    return 0;
}