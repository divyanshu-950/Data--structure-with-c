#include<stdio.h>  
#include<stdlib.h>  
#include<conio.h>
typedef struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
}nod;  
void insert();
void search(nod*,nod*,int);
void display(nod*);
void deletion();
nod* root=NULL;  
int main()
{
	int n;
	while(1)
	{
	printf("\t\tWelcome To Tree Deletion Menu\n\n");
    printf("1->Insertion\n2->Display\n3->Deletion\n4->Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d",&n);
    switch(n)
    {
    	case 1:
    		insert();
    		break;
    	
		case 2:
		    display(root);
		    break;
		    
	    case 3:
		    deletion();
		    break;
		
		case 4:
			exit(0);
			break;
			
		default:
			printf("\n\t\tWrong Choice");
			break;
	}
	printf("\n\t\tPress Any Key To Continue");
	getch();
    system("cls");
}
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

void search(nod*& temp,nod*& temp1,int item) {
   
 while (temp != NULL && temp->data != item)  
    {  
        temp1 = temp1;  
        if (item < temp->data)  
            temp = temp->left;  
        else  
            temp = temp->right;  
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
void deletion()
{
	int data;
	nod* temp=root;
	nod* temp1=NULL;
	printf("%d ",temp->data);
	printf("\nEnter Data To Delete: ");
	scanf("%d",&data);
	search(temp,temp1,data);
	printf("\n%d %d\n",temp->data,temp1->data);
	if(temp==NULL)
	printf("Tree is Empty");
	if(temp->left==NULL&&temp->right==NULL)
	{
		if(temp!=root)
		{
			if(temp1->left==temp)
			temp1->left=NULL;
			 
			else 
			temp1->right=NULL; 
		}
	}
	else 
	   root=NULL;
	   free(temp);
	printf("\n\t\tDeleted Successfully");
}
