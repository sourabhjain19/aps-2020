#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

int sametree(struct node *root1,struct node *root2){
    if (root1==NULL && root2==NULL)
        return 1;
    if (root1==NULL || root2==NULL)
        return 0;
    if(root1->data==root2->data && sametree(root1->left,root2->left) && sametree(root1->right,root2->right))
        return 1;
    else
    {
        return 0;
    }
    
}

int main(){
    struct node *root1=NULL ,*root2=NULL ,*root3=NULL;
    
    struct node *temp1=(struct node * )malloc(sizeof(struct node));
    temp1->data=10;
    temp1->right=NULL;
    temp1->left=NULL;

    struct node *temp2=(struct node *)malloc(sizeof(struct node));
    temp2->data=20;
    temp2->right=NULL;
    temp2->left=NULL;

    struct node *temp3=(struct node *)malloc(sizeof(struct node));
    temp3->data=30;
    temp3->right=NULL;
    temp3->left=NULL;

    struct node *temp4=(struct node *)malloc(sizeof(struct node));
    temp4->data=10;
    temp4->right=NULL;
    temp4->left=NULL;

    temp1->left=temp2;
    temp1->right=temp3;

    root1=temp1;

    temp4->right=temp3;
    temp4->left=temp2;

    root2=temp4;

    printf("%d",sametree(root1,root2));
}