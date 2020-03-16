#include <stdio.h> 
#include <stdlib.h> 

struct node{
    int data;
    struct node *next;
};

struct node * append(struct node *root,int a,int b){
    struct node *temp=(struct node * )malloc(sizeof(struct node));
    temp->data=a;
    temp->next=NULL;
    int count=0;

    if (root == NULL){
        root=temp;
        root->next=root;
    }
    else{
        count++;
        struct node * temp1=root;

        while(temp1->next!=root){

            if (count==b){
                temp->next=temp1->next;
                temp1->next=temp;
                return root;
            }
            temp1=temp1->next;
            count++;
        }

        if (count==b){
            temp->next=temp1->next;
            temp1->next=temp;
        }

    }
    return root;
}

struct node *delete(struct node *root,int a){
    struct node *temp1=root;
    struct node *prev=NULL;
    int count=0;
    if (count==a){
        root=temp1->next;
    }
    prev=temp1;
    temp1=temp1->next;    
    count++;

    while(temp1->next!=root){
        if (count==a){
            prev->next=temp1->next;
            break;
        }
        prev=temp1;
        temp1=temp1->next;
        
        count++;
    }
    return root;
}

void print(struct node *root){
    struct node *temp=root;
    while(temp->next!=root){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}

int main() {
    struct node *root = NULL;
    
    root=append(root,10,0);
    root=append(root,20,1);
    root=append(root,30,1);
    root=append(root,40,3);
    root=delete(root,1);

    print(root);
    return 0;
}