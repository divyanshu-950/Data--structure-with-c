#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node{
	int data;
	int pow;
	struct node* next;
}nod;
void insert(nod**);
void addpo();
void display();
nod* head1=NULL;
nod* head2=NULL;
nod* head3=NULL;
int main()
{
	printf("enter data of first equation: \n");
	insert(&head1);
	printf("enter data of second equation: \n");
	insert(&head2);
	addpo();
	display();
}
void insert(nod** head)
{
	int i,n;
	nod*ptr=*head;
	printf("enter no. of term: ");
	scanf("%d",&n);
	printf("\nenter data: \n");
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		nod* temp=malloc(sizeof(nod)); 
		temp->next=NULL;
		printf("Enter Coefficient: ");
		scanf("%d",&temp->data);
		printf("Enter Power:x^");
		scanf("%d",&temp->pow);
		printf("\n\n");
		if(*head==NULL)
		*head=temp;
		else
		temp->next=*head;
		*head=temp;
		}
	
		
	}
void addpo()
{
	
	nod* temp2=NULL;
	while(head1->next!=NULL&&head2->next!=NULL)
	{
		nod* temp1=malloc(sizeof(nod));
		 temp1->next=NULL; 
		if(head1->pow>head2->pow)
		{
			temp1->pow=head1->pow;
			temp1->data=head1->data;
			head1=head1->next;
		}
		else if(head1->pow<head2->pow)
		{
			temp1->pow=head2->pow;
			temp1->data=head2->data;
			head2=head2->next;
		}
		 else
		 {
		 	temp1->pow=head1->pow;
		 	temp1->data=head1->data+head2->data;
		 	head1=head1->next;
		 	head2=head2->next;
		 }
		 if(head3=NULL)
		 head3=temp1;
		 if(temp2==NULL)
		 temp2=temp1;
		 else
		 temp2->next=temp1;
		 temp2=temp1;
}

	}	

void display(nod* head)
{
	while (head3->next!=NULL) {
        printf("%dx^%d", head3->data,head3->pow);
        head3=head3->next;
        if (head3->data>= 0) {
            if (head3->next!= NULL)
                printf("+");
        }
    }
    printf("\n");
}


