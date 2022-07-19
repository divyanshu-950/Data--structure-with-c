#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node{
	int data;
	struct node* next;
}nod;
void insert(nod**);
void merge(nod**,nod**);
void sort(nod**);
void display(nod**);

int main()
{
	nod* head1=NULL;
    nod* head2=NULL;
	printf("enter data of first list: \n");
	insert(&head1);
	printf("enter data of second list: \n");
	insert(&head2);
	merge(&head1,&head2);
}
void insert(nod** head)
{
	int i,n;
	nod*ptr=*head;
	printf("enter no. of term: ");
	scanf("%d",&n);
	printf("\nenter data: \n");
	for(i=0;i<n;i++)
	{
		nod* temp=malloc(sizeof(nod)); 
		temp->next=NULL;
		scanf("%d",&temp->data);
		if(*head==NULL)
		*head=temp;
		else
		temp->next=*head;
		*head=temp;
	
	
	
		}
	}
void merge(nod** head1,nod** head2)
{
	nod* ptr=*head1;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=*head2;
	sort(&*head1);
	}	
void sort(nod** head)
{
	int item;
	nod* ptr=*head;
	nod* temp;
	while(ptr->next!=NULL)
	{
		temp=ptr->next;
		while(temp->next!=NULL)
		{
			if(ptr->data>temp->data)
			{
				item=ptr->data;
				ptr->data=temp->data;
				temp->data=item;
			}
			temp=temp->next;
		}
		ptr=ptr->next;
	}
	display(&*head);
	}	
void display(nod** head)
{
	nod* temp=*head;
	if(head==NULL)
	printf("\t\tList is Empty");
	printf("\nyour sorted list is: \n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}


