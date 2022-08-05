#include <stdio.h>  
#include <stdbool.h>  
#include <stdlib.h>  
struct node{  
    int data;  
    struct node *left;  
    struct node *right;  
};  
struct node* root=NULL;
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
struct node* createNode(int data){  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
      
    return newNode;  
}  
   
int largestElement(struct node *temp){  
    if(root == NULL) {  
        printf("Tree is empty\n");  
        return 0;  
    }  
    else{  
        int leftMax, rightMax;  
        int max = temp->data;  
        if(temp->left != NULL){  
            leftMax = largestElement(temp->left);  
            max = (max > leftMax) ? max : leftMax;  
        }  
        
        if(temp->right != NULL){  
          rightMax = largestElement(temp->right);  
          max = (max > rightMax) ? max : rightMax;  
        }  
    return max;  
    }  
}  
   
int main()  
{  
       char ch;
   int n,item;
	printf("Enter data Of tree: -\n");
  do{
  	printf("\nenter data: ");
  	scanf("%d",&n);
  root = insertion(root, n);  
  fflush(stdin);
 printf("\nEnter 'y' to insert again: ");
 scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
          
    printf("\nLargest element in the binary tree: %d", largestElement(root));  
    return 0;  
}  
