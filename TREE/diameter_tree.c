#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
 
struct node* create(int item)  
{  
    struct node* node = malloc(sizeof(struct node));  
    node->data = item;  
    node->left = node->right = NULL;  
    return node;  
}  

struct node* insertion(struct node* root, int item) 
{  
    if (root == NULL)  
        return create(item); 
    if (item < root->data)  
        root->left = insertion(root->left, item);  
    else  
        root->right = insertion(root->right, item);  
    return root;  
}  
int getMax(int a, int b){
    if(a >= b)
        return a;
    else
        return b;
}
int getHeight(struct node *root){
    int leftHeight, rightHeight;
    if(root == NULL)
        return 0;
    leftHeight = getHeight(root->left);
    rightHeight = getHeight(root->right);
     
    return getMax(leftHeight, rightHeight) + 1;
}
 
int getDiameter(struct node *nodePtr) {
   if (nodePtr == NULL)
     return 0;
  int leftHeight = getHeight(nodePtr->left);
  int rightHeight = getHeight(nodePtr->right);
  
  int leftDiameter = getDiameter(nodePtr->left);
  int rightDiameter = getDiameter(nodePtr->right);
  
  return getMax(leftHeight + rightHeight + 1, 
              getMax(leftDiameter, rightDiameter));
}
 
int main() {
     char ch;
   int n,item;
  struct node* root = NULL;  
	printf("Enter data Of First tree: -\n");
  do{
  	printf("\nenter data: ");
  	scanf("%d",&n);
  root = insertion(root, n);  
  fflush(stdin);
 printf("\nEnter 'y' to insert again: ");
 scanf("%c",&ch);
}while(ch=='y'||ch=='Y');

     
    printf("\nDiameter of Tree = %d", getDiameter(root));
     
    getchar();
    return 0; 
}
