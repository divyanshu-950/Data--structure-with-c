#include <iostream>  
#include <stdlib.h>
using namespace std;  
struct Node {  
    int data;  
    Node *left;  
    Node *right;  
};  
Node* create(int item)  
{  
    Node* node = new Node;  
    node->data = item;  
    node->left = node->right = NULL;  
    return node;  
}  
void inorder(Node *root)  
{  
    if (root == NULL)  
        return;  
    inorder(root->left); 
    cout<< root->data << "   "; 
    inorder(root->right); 
}  
Node* findMinimum(Node* cur) 
{  
    while(cur->left != NULL) {  
        cur = cur->left;  
    }  
    return cur;  
}  
Node* insertion(Node* root, int item) 
{  
    if (root == NULL)  
        return create(item); 
    if (item < root->data)  
        root->left = insertion(root->left, item);  
    else  
        root->right = insertion(root->right, item);  
    return root;  
}  
void search(Node* &cur, int item, Node* &parent)  
{  
    while (cur != NULL && cur->data != item)  
    {  
        parent = cur;  
        if (item < cur->data)  
            cur = cur->left;  
        else  
            cur = cur->right;  
    }  
}  
void deletion(Node*& root, int item)
{  
    Node* parent = NULL;  
    Node* cur = root;  
    search(cur, item, parent); 
    if (cur == NULL)  
        return;  
    if (cur->left == NULL && cur->right == NULL)
    {  
        if (cur != root)  
        {  
            if (parent->left == cur)  
                parent->left = NULL;  
            else  
                parent->right = NULL;  
        }  
        else  
            root = NULL;  
        free(cur);       
    }  
    else if (cur->left && cur->right)  
    {  
        Node* succ  = findMinimum(cur->right);  
        int val = succ->data;  
        deletion(root, succ->data);  
        cur->data = val;  
    }  
    else  
    {  
        Node* child = (cur->left)? cur->left: cur->right;  
        if (cur != root)  
        {  
            if (cur == parent->left)  
                parent->left = child;  
            else  
                parent->right = child;  
        }  
        else  
            root = child;  
        free(cur);  
    }  
}  
int main()  
{  
   char ch;
   int n,item;
  Node* root = NULL;  
  do{
  	printf("\nenter data: ");
  	scanf("%d",&n);
  root = insertion(root, n);  
  fflush(stdin);
 printf("\nEnter 'y' to insert again: ");
 scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
  printf("The inorder traversal of the given binary tree is - \n");  
  inorder(root);
  printf("\n\nenter data to delete: ")  ;
  scanf("%d",&item);
  deletion(root, item);  
  printf("\ndata deleted\n\n");
  printf("\nAfter deleting node %d - \n\n",item);  
  inorder(root);   
  insertion(root, 2);  
  printf("\n\nAfter inserting node 2, - \n\n");  
  inorder(root);  
  return 0;  
}  
