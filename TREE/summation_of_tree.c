#include<stdio.h>  
#include<stdlib.h>  
typedef struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
}nod;  
void insert();
void traversal(nod*);
nod* root=NULL; 
int n =0; 
int main()
{
	char ch;
		printf("\t\tWelcome To Tree Insertion Menu\n\n");
	do{
	insert();
	fflush(stdin);
	printf("\nEnter 'y' To Insert Again ");
	scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
	traversal(root);
	printf("\n\nyour summation of tree is: %d",n);
}
void insert()
{
	nod* trav;
		nod* temp=malloc(sizeof(nod));
		printf("\nEnter Data: ");
		scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
	    n=n+temp->data;
		if(root==NULL)
		root=temp;
		else
		{
			trav=root;
			while(1)
			{
			if(trav->data>temp->data)
			{
			    if(trav->left==NULL){
		        trav->left=temp;
		        return;
		    }
		        
		        trav=trav->left;
		    }
           else if(trav->data<temp->data)
           {
		     if(trav->right==NULL){
		    	trav->right=temp;
		    	return;
		    }
		    	trav=trav->right;
	    	}
		}
	}
} 

void traversal(nod* root) {
   if(root != NULL) {
      printf("%d ",root->data);
      traversal(root->left);
      traversal(root->right);
      
   }
   
}
