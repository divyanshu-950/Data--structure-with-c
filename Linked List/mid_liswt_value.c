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
void mid();
int main()
{
	insert();
	mid();
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
}
void mid()
{
	int mi=0,i;
	  nod* ptr=head;
	  nod* temp=head;
	  while(ptr->next!=NULL)
	  {
	  	ptr=ptr->next;
	  	mi++;
	  }
	  printf("your mid term is: ");
	  for(i=0;i<mi/2;i++)
	  {
	  	temp=temp->next;
	  }
	  printf("%d",temp->data);
}

