#include<stdio.h>  
#include<stdlib.h>  
typedef struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
}nod;  
void insert();
void display(nod* );
void deletion(nod* ,int);
nod* max(nod* );
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
printf("\nYour Tree is: -\n");
display(root);
fflush(stdin);
printf("\nEnter Data to delete: ");
scanf("%d",&item);
deletion(root,item);
printf("\nYour Tree is: -\n");
display(root);
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
void display(nod* root)
{
	  if(root!= NULL) {
      printf("%d ",root->data);
      display(root->left);
     display(root->right);
   }
  
}
nod* max(nod* root)
{
	while(root!=NULL)
	{
		root=root->right;
	}
	return root;
}
void deletion(nod* root,int data)
{
	nod* temp=root;
	nod* temp1=NULL;
	nod* temp2=NULL;
	if(temp==NULL)
	printf("Not Possible");
	
	while(temp->data!=data)
	{
		temp1 = temp;
		if(data<temp->data)
		  temp=temp->left;
		  else
		  temp=temp->right;
	}

	  if(temp->data==data){
	  	 
	  	 if(temp->right&&temp->left)
	  	 {
	  	 	temp2=max(temp->left);
	  	 	temp->data=temp2->data;
	  	 	deletion(temp->left,temp->data);
	  	 }
	  	 else if(temp->left==NULL&&temp->right==NULL)
	  	 {
	  	 	if(temp1->left==temp)
	  	 	temp1->left=NULL;
	  	 	else 
	  	 	temp1->right=NULL;
		   }
		   else{
		   	if(temp->right==NULL)
		   	  temp1->left=temp->left;
		   	  else
		   	  temp1->right=temp->right;
		   }
		   free(temp);
		   printf("\n\t\tData Deleted Successfully");
	  	
	  }
	
	
}

