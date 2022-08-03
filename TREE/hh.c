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
int maxDepth(struct node* node)
{
    if (node == NULL)
        return -1;
    else {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

 
int main()
{
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
 
    printf("Height of tree is %d", maxDepth(root));
 
    getchar();
    return 0;
}
