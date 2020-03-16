#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insert(struct node * root,int data,int index){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;

    if(root==NULL){
        root=temp;
        return root;
    }

    int count=0;

    if(count==index){
        temp->next=root;
        root->prev=temp;
        root=temp;
        return root;
    }

    count++;

    struct node *temp1=root;
    while(temp1!=NULL){
        if (count==index){
            temp->next=temp1->next;
            temp->prev=temp1;
            if(temp1->next!=NULL)
                temp1->next->prev=temp;
            temp1->next=temp;
            return root;
        }
        temp1=temp1->next;
        count++;
    }

    return root;

}

struct node *delete(struct node * root,int index){
    int count=0;
    struct node *temp=root;
    while(temp!=NULL){
        if (count==index){
            if (temp->prev==NULL){
                temp->next->prev=NULL;
                root=temp->next;
                return root;
            }
            temp->prev->next=temp->next;
            
            if(temp->next==NULL)
                temp->prev==NULL;
            else
                temp->next->prev=temp->prev;

            return root;
        }
        count++;
        temp=temp->next;
    }
}

void display(struct node *root){
    struct node *temp=root;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    struct node *root=NULL;
    
    root=insert(root,5,0);
    root=insert(root,6,1);
    root=insert(root,7,0);
    root=insert(root,8,3);
    root=insert(root,9,4);
    root=delete(root,0);

    display(root);

    return 0;
}