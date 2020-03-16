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

void pre_order_traversal(struct tree* root) {
   if(root != NULL) {
      printf("%d ",root->data);
      pre_order_traversal(root->left);
      pre_order_traversal(root->right);
   }
}

void inorder_traversal(struct tree* root) {
   if(root != NULL) {
      inorder_traversal(root->left);
      printf("%d ",root->data);          
      inorder_traversal(root->right);
   }
}

void post_order_traversal(struct tree* root) {
   if(root != NULL) {
      post_order_traversal(root->left);
      post_order_traversal(root->right);
      printf("%d ", root->data);
   }
}

int main()
{
    struct tree *root = NULL;
    root=insert(root,10);
    root=insert(root,11);
    root=insert(root,12);
    root=insert(root,9);
    root=insert(root,8);
    pre_order_traversal(root);
    printf("\n");
    inorder_traversal(root);
    printf("\n");
    post_order_traversal(root);
    printf("\n");
    
}