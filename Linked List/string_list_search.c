#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char c[20];
	struct node* next;
};
typedef struct node nod;
nod* head;
void insert();
void search();
void display();
int main()
{
	insert();
	search();
}
void insert()
{
	int pos,i;	 
	nod* temp;
	printf("enter term: ");
	scanf("%d",&pos);
	printf("\nenter sentence: -\n");
 	for(i=0;i<pos;i++)
	{
		fflush(stdin);
		nod* ptr=malloc(sizeof(nod));
		scanf("%s",&ptr->c);
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
void search()
{
	 char s[20];
	 int i=0;
	 nod* ptr=head;
	 nod* temp;
	 printf("enter to search: ");
	 scanf("%s",&s);
	 while(ptr!=NULL)
	 {
	 	i++;
	 	if(strcmp(s,ptr->c)==0)
	 	{
		 printf("your word %s is available at index %d ",ptr->c,i);
	 }
	 ptr=ptr->next;
	 }
	 if(i==0)
	 printf("not available");
}
