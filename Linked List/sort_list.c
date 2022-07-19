#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node* next;
};
typedef struct node nod;
nod* head;
void insert();
void sort();
void display();
int main()
{
	insert();
	display();
return 0;
}
void insert()
{
	int n,i;	 
	nod* temp;
	printf("enter term: ");
	scanf("%d",&n);
	printf("\nenter data: -\n");
	for(i=0;i<n;i++)
	{
		nod* ptr=malloc(sizeof(nod));
		scanf("%d",&ptr->data);
		ptr->next=NULL;
		if(head==NULL)
		temp=head=ptr;
		else{
		temp->next=ptr;
		temp=ptr;
			
		}
	}
	printf("\n");
	sort();
}
void sort()
{
	int x=0;
	nod* ptr=head;
	nod* temp;
	temp=NULL;
		while(ptr!=NULL)
		{
			temp=ptr;
			while(temp!=NULL)
			{
				if(ptr->data>temp->data)
				{
					x=ptr->data;
					ptr->data=temp->data;
					temp->data=x;
				}
				temp=temp->next;
			}
			ptr=ptr->next;
		}
		printf("\nyour sorted list is: - \n");
}
void display()
{
	nod* temp=head;
	if(head==NULL)
	printf("\t\tList is Empty");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
