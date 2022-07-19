# include<stdio.h>
#include<stdlib.h>  
#include<conio.h>
struct node{
	int data;
	struct node* next;
};
typedef struct node nod;
nod* head;
void insert();
void reverse();
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
	reverse();
}
void reverse()
{
	nod* ptr=head;
	nod* temp,* temp1,* temp2,*temp3;
	temp=temp1=temp2=temp3=NULL;
	int i,n;
	printf("enter group size: ");
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{
		temp=ptr->next;
		ptr->next=temp1;
		
		
		temp1=ptr;
		ptr=temp;	
	}
	temp3=head;
	head=temp1;
	while(ptr!=NULL){
		temp=ptr->next;
		ptr->next=temp2;
		
		temp2=ptr;
		ptr=temp;
	}
	temp3->next=temp2;
	printf("\n\tyour list is reversed in group\n");
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
