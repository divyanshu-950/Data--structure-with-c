#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
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
int isIdentical(struct node* x, struct node* y)
{
    if (x == NULL && y == NULL) {
        return 1;
    }
 
    return (x && y) && (x->data == y->data) &&
            isIdentical(x->left, y->left) &&
            isIdentical(x->right, y->right);
}
 
int main()
{
    char ch;
   int n,item;
  struct node* root1 = NULL;  
  struct node* root2 = NULL;  
	printf("Enter data Of First tree: -\n");
  do{
  	printf("\nenter data: ");
  	scanf("%d",&n);
  root1 = insertion(root1, n);  
  fflush(stdin);
 printf("\nEnter 'y' to insert again: ");
 scanf("%c",&ch);
}while(ch=='y'||ch=='Y');

	printf("\nEnter data Of second tree: -\n");
  do{
  	printf("\nenter data: ");
  	scanf("%d",&n);
  root2 = insertion(root2, n);  
  fflush(stdin);
 printf("\nEnter 'y' to insert again: ");
 scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
 
    if (isIdentical(root1, root2)) {
        printf("\n\t\tThe given binary trees are identical");
    }
    else {
         printf("\n\t\tThe given binary trees are not identical");
    }
 
    return 0;
}
