#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *insert(struct tree *root, int data)
{
    struct tree *temp = (struct tree *)malloc(sizeof(struct tree));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    struct tree *current = NULL;
    struct tree *parent = NULL;

    if (root == NULL)
    {
        root = temp;
        return root;
    }

    current = root;

    while (1)
    {
        parent = current;

        if (data < parent->data)
        {
            current = current->left;
            if (current == NULL)
            {
                parent->left = temp;
                return root;
            }
        }
        else
        {
            current = current->right;
            if (current == NULL)
            {
                parent->right = temp;
                return root;

            }
        }
    }
}

void inorder_traversal(struct tree* root) {
   if(root != NULL) {
      inorder_traversal(root->left);
      printf("%d ",root->data);          
      inorder_traversal(root->right);
   }
}

struct tree *delete(struct tree *root,int data){
    if (root == NULL)
        return root;
    else if (root->data<data)
        root->right=delete(root->right,data);
    else if(root->data > data)
        root->left=delete(root->left,data);
    else
    {
        if(root->right==NULL && root->left==NULL){
            free(root);
            root=NULL;
        }
        else if (root->right==NULL){
            struct tree *temp=root;
            root=root->left;
            free(temp);
        }
        else if (root->left==NULL){
            struct tree *temp=root;
            root=root->right;
            free(temp);
        }
        else{
            struct tree *temp1=root->right;
            while(temp1->left!=NULL){
                temp1=temp1->left;
            }
            root->data=temp1->data;
            root->right=delete(root->right,root->data);
        }
    }
    return root;
    
}
int main()
{
    struct tree *root = NULL;
    root=insert(root,10);
    root=insert(root,11);
    root=insert(root,12);
    root=insert(root,9);
    root=insert(root,8);
    
    inorder_traversal(root);
    printf("\n");

    root=delete(root,10);

    inorder_traversal(root);
    printf("\n");    

    return 0;
}