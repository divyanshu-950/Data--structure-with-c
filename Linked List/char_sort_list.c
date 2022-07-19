#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	char c;
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
	sort();
	display();
}
void insert()
{
	int pos,i;	 
	nod* temp;
	printf("enter term: ");
	scanf("%d",&pos);
	printf("\nenter character: -\n");
 	for(i=0;i<pos;i++)
	{
		fflush(stdin);
		nod* ptr=malloc(sizeof(nod));
		scanf("%c",&ptr->c);
		ptr->next=NULL;
		if(head==NULL)
		temp=head=ptr;
		else{
		temp->next=ptr;
		temp=ptr;
		}
	}
	printf("\n");
}
void sort()
{
	char x;
	nod* ptr=head;
	nod* temp;
	temp=NULL;
		while(ptr!=NULL)
		{
			temp=ptr;
			while(temp!=NULL)
			{
				if(ptr->c>temp->c)
				{
					x=ptr->c;
					ptr->c=temp->c;
					temp->c=x;
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
		printf("%c\n",temp->c);
		temp=temp->next;
	}
}
