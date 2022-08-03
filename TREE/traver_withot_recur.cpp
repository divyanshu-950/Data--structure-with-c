#include<stdio.h>
#include<stdlib.h>
struct node 
{
	struct node* left;
	struct node* right;
	int data;
};
struct stack 
{
	struct node* data;
	struct stack* next;
};

void push(struct stack** top,struct node* n);
struct node* pop(struct stack** top);
int isEmpty(struct stack* top);
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
int tree_traversal(struct node* root) 
{ 
	struct node* temp = root;
	struct stack* s_temp = NULL;
	int flag = 1;
	while(flag) 
	{
		if(temp){
			printf("%d ",temp->data);
                        push(&s_temp,temp);
			temp = temp->left;
		}
		else{
			if(!isEmpty(s_temp)){
				temp = pop(&s_temp);
				temp = temp->right;
			}
			else
				flag = 0;
		}
	 } 
}
void push(struct stack** top,struct node* n)
{
	struct stack* new_n = (struct stack*)malloc(sizeof(struct stack));
	new_n->data = n;
	new_n->next = (*top);
	(*top) = new_n;
}
int isEmpty(struct stack* top) 
{
	if(top==NULL)
		return 1;
	else
		return 0;
}
struct node* pop(struct stack** top_n) 
{
	struct node* item;
	struct stack* top;
	top = *top_n;
	item = top->data;
	*top_n = top->next;
	free(top);
	return item;
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
printf("\n\nyour tree traversal is: -\n");
	tree_traversal(root); 
	return 0;
}
