#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* ptr;
};
struct node* head;
int main()
{
	int i,n;
	struct node* p,*prev;
	printf("enter the no. elements:-\n");
	scanf("%d",&n);
	head=NULL;
	fflush(stdin);
	printf("enter elements:-\n");
	for(i=0;i<n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->ptr=NULL;
		if(head==NULL){
		head=p;
		head->ptr=p;
		
		
		
	}
		else 
		prev->ptr=p;
		prev=p;
			
	}
	struct node* temp;
	temp=head;
	printf("your linked list is:-\n");
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->ptr;
	}
	fflush(stdin);
	int x;
	struct node* ptr=head;
	struct node* ptr1=malloc(sizeof(struct node));
	printf("enter the location of node you want to delete");
	scanf("%d",&x);
	n--;
	for(i=0;i<n;i++)
	{
		ptr1=ptr;
		ptr=ptr->ptr;
	}
	ptr1->ptr=ptr->ptr;
	free(ptr);
	ptr=NULL;
	struct node* tem;
	tem=head;
	printf("your linked list is:-\n");
	while(tem!=0)
	{
		printf("%d\n",tem->data);
		tem=tem->ptr;
	}

	return 0;
}
