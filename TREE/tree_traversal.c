#include<stdio.h>  
#include<stdlib.h>  
void insert();
void traversal();
typedef struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
}nod;  
nod *root=NULL;  
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
	traversal();
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
			while(trav!=NULL)
			{
			if(trav->data>temp->data)
			{
			    if(trav->left==NULL)
		        trav->left=temp;
		        
		        trav=trav->left;
		    }
           else if(trav->data<temp->data)
           {printf("x ");
		     if(trav->right==NULL)
		    	trav->right=temp;
		    	
		    	trav=trav->right;
	    	}
		}
	}
	

}

void traversal() {
	printf("x ");
   if(root != NULL) {
      traversal(root->left);
      printf("%d ",root->data);          
      traversal(root->right);
   }
}
