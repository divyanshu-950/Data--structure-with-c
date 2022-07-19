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
void rotate();
void display();
int main()
{
	char ch;
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
	rotate();
}
void rotate()
{
	int pos,i,x=0;
	nod* ptr=head;
	nod* temp1=NULL;
	nod* temp2=NULL;
	printf("enter Rotation value: ");
	scanf("%d",&pos);
	for(i=0;i<pos;i++)
	{
		temp1=ptr->next;
		temp2=ptr;
		while(temp1!=NULL)
		{
			x=temp2->data;
			temp2->data=temp1->data;
			temp1->data=x;
			
			temp2=temp1;
			temp1=temp1->next;
			
		}
	}
	printf("\n\t\t after rotating the list: -\n");
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
