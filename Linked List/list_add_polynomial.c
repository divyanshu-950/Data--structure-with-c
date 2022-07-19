#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
typedef struct node{
	int data;
	int pow;
	struct node* next;
}nod;
void insert(nod**);
void addpo();
void display(nod*);
nod* head1=NULL;
nod* head2=NULL;
nod* head3=NULL;
int main()
{
	int n;
	printf("entert first equation: -");
	insert(&head1);
	fflush(stdin);
	printf("entert second equation: -");
	insert(&head2);
	printf("\nyour first equation is: ");
	display(head1);
	printf("\n\nyour second equation is: ");
	display(head2);
	addpo();
	printf("\n\nyour summation is: ");
	display(head3);
}
void insert(nod** head)
{
	char ch;
	do{
	nod* temp=malloc(sizeof(nod));
	nod* ptr=*head;
	printf("\n\nenter value: ");
	scanf("%d",&temp->data);
	printf("enter power: ");
	scanf("%d",&temp->pow);
	temp->next=NULL;
	if(*head==NULL)
	*head=temp;
	else
	{
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
}
	ptr=temp;
	fflush(stdin);
	printf("\nenter 'y' to continue putting value: ");
	scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
}
void addpo()
{
	nod* ptr=NULL;
	while(head1!=NULL && head2!=NULL)
	{	
	    nod* temp=malloc(sizeof(nod));
	    temp->next=NULL;
	    	while(head3==NULL)
		{
			ptr=head3=temp;
		}
	    if(head1->pow > head2->pow)
		{
			temp->pow=head1->pow;
			temp->data=head1->data;
			head1=head1->next;
		}
		
		else if(head1->pow < head2->pow)
		{
			temp->pow=head2->pow;
			temp->data=head2->data;
			head2=head2->next;
		}
		
		else 
		{
			temp->pow=head1->pow;
			temp->data=head1->data+head2->data;
			head1=head1->next;
			head2=head2->next;
		}
	
		    if(head3!=NULL)
		  ptr->next=temp;;
		  ptr=temp;
		
	}
}
void display(nod* head)
{
	nod* ptr=head;
	if(head==NULL)
	printf("nothing to print");
	else
	{
		while (ptr!=NULL)
		{
			printf("%dx^%d",ptr->data,ptr->pow);
			if(ptr->next!=NULL)
			{
			printf(" + ");
			}
			ptr=ptr->next;
		}
	}	
}
		


