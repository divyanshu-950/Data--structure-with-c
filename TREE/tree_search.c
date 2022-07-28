#include<stdio.h>  
#include<stdlib.h>  
typedef struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
}nod;  
void insert();
void search(nod*,int);
nod* root=NULL;  
int main()
{
	int item;
	char ch;
		printf("\t\tWelcome To Tree Insertion Menu\n\n");
	do{
	insert();
	fflush(stdin);
	printf("\nEnter 'y' To Insert Again ");
	scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
fflush(stdin);
printf("\nEnter Data to Search: ");
scanf("%d",&item);
	search(root,item);
}
void insert()
{
	nod* trav;
		nod* temp=malloc(sizeof(nod));
		printf("\nEnter Data: ");
		scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
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

void search(nod* root,int item) {
   if(root==NULL || item==root->data) 
   	printf("\n\t\t%d Is Available in A Tree",item);
  
   else if(item>root->data)
   return search(root->right,item);
   else
   return search(root->left,item);
}
