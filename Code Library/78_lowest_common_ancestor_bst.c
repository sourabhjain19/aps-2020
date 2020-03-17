#include<stdio.h>
#include<stdlib.h>

int max1(int a,int b){
    if(a>b)
        return a;
    else
        return b;
    
}
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

struct tree *lowestcommonancestor(struct tree *root,int data1,int data2){
    if(root==NULL)
        return NULL;
    if(root->data==data1 || root->data==data2)
        return root;
    if((root->data<data1 && root->data>data2) || (root->data<data1 && root->data>data2))
        return root;
    if(root->data<max1(data1,data2))
        return lowestcommonancestor(root->right,data1,data2);
    else if(root->data>max1(data1,data2))
        return lowestcommonancestor(root->left,data1,data2);
}

int main()
{
    struct tree *root = NULL;
    root=insert(root,10);
    root=insert(root,11);
    root=insert(root,12);
    root=insert(root,9);
    root=insert(root,8);
    
    root=lowestcommonancestor(root,12,11);

    printf("%d",root->data);

    return 0;
}