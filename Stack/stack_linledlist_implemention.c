#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}nod;
nod* head =NULL;
void push();
void pop();
void view();
int main()
{
	 int choice;
	 while(1)
	 {
	 	printf("\t\tWelcome To Stack Menu\n");
	 	printf("\t ===================================\n\n");
	 	printf("|1-->Push\n|2-->Pop\n|3-->View\n|4-->Exit\n\n");
	 	printf("|Enter Your Choice: ");
	 	scanf("%d",&choice);
	 	
	 	switch(choice)
	 	{
	 		case 1:
	 			push();
	 			break;
	 			
	 		case 2:
			    pop();
			    break;
			    
			case 3:
			    view();
			    break;
			    
			case 4:
				exit(0);
			    break;
			    
			default:
			   printf("\n\t\tWrong Choice\n\t    ----------------------\n");    
		 }
		 getch();
		 system("cls");
	 }
}
void push()
{
	nod* temp=malloc(sizeof(nod));
	temp->next=NULL;
	
	printf("\nEnter Data: ");
	scanf("%d",&temp->data);
	
	if(head==NULL)
	head=temp;
	else
	{
		temp->next=head;
		head=temp;
	}
	printf("\n\t\tPushed Successfully");
}
void pop()
{
	nod* temp=head;
	
	if(head==NULL)
	printf("Stack Is Empty");
	else{ 
	
		printf("\nPopped Data is: %d",temp->data);
		head=temp->next;
		free(temp);
	}
}
void view()
{
	nod* temp=head;
	if(head==NULL)
	printf("\n\t\tStack is Empty");
	else
	{
	printf("\nYour Stack Are: -\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
}
