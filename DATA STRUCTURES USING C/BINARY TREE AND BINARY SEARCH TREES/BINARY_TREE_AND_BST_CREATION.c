#include <stdio.h>
#include <stdlib.h>

struct NODE
{
  int data;
  struct NODE* left;
  struct NODE* right;
};

struct NODE* newNode(int data)
{
    struct NODE* node = (struct  NODE*) malloc(sizeof(struct NODE));
    node->data=data;
    node->left=NULL;
    node->right= NULL;
}
struct NODE* NEW_NODE_IN_BST( struct NODE * root, int data)
{
    if(root==NULL)
    {
        root=malloc(sizeof(struct NODE));
        root->data=data;
        return root;
    }
    if(data<root->data)
    root->left=NEW_NODE_IN_BST(root->left, data);
    if(data>root->data)
    root->right=NEW_NODE_IN_BST(root->right, data);
    return root;
}

void preorder(struct NODE* root)
{
    if(root==NULL)
    {
        return ;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct NODE* root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct NODE* root)
{
    if(root==NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int main() {
    
printf(" BINARY TREE CONSTRUCTION : \n");
struct NODE* root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->right->left=newNode(6);
root->right->right=newNode(7);
root->left->left->left=newNode(8);
root->left->left->right=newNode(9);
root->left->right->left=newNode(10);
root->left->right->right=newNode(11);
printf("PREORDER TRAVERSAL OF BINARY TREE IS : \n");
preorder(root);
printf("\n");
printf("INORDER TRAVERSAL OF BINARY TREE IS : \n");
inorder(root);
printf("\n");
printf("POSTORDER TRAVERSAL OF BINARY TREE IS : \n");
postorder(root);
printf("\n\n\n");

printf(" BINARY SEARCH TREE CONSTRUCTION  :\n");
struct NODE* ROOT_IN_BST =NULL;
ROOT_IN_BST=NEW_NODE_IN_BST(ROOT_IN_BST,1);
NEW_NODE_IN_BST(ROOT_IN_BST,2);
NEW_NODE_IN_BST(ROOT_IN_BST, 3);
NEW_NODE_IN_BST(ROOT_IN_BST, 4);
NEW_NODE_IN_BST(ROOT_IN_BST, 5);
NEW_NODE_IN_BST(ROOT_IN_BST,6);
NEW_NODE_IN_BST(ROOT_IN_BST,7);
NEW_NODE_IN_BST(ROOT_IN_BST,8);
NEW_NODE_IN_BST(ROOT_IN_BST, 9);
NEW_NODE_IN_BST(ROOT_IN_BST, 10);

printf("PREORDER TRAVERSAL OF BINARY SEARCH TREE IS : \n");
preorder(ROOT_IN_BST);
printf("\n");
printf("INORDER TRAVERSAL OF BINARY SEARCH TREE IS : \n");
inorder(ROOT_IN_BST);
printf("\n");
printf("POSTORDER TRAVERSAL OF BINARY SEARCH TREE IS : \n");
postorder(ROOT_IN_BST);
system("pause");
	return 0;
}
