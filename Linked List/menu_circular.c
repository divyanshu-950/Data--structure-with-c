#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node{
	int data;
	struct node* next;
}nod;
nod* tail=NULL;
void insert_beg();
void insert_end();
void insert_pos();
void del_beg();
void del_end();
void del_pos();
void view();
int main()
{
	int n;
	while(1){
	printf("\t\tWelcome To Circular List\n");
	printf("\t============================================\n");
	printf("1->Insert At Begining\n2->Insert At End\n3->Insert at Certain Position\n4->View List\n5->Delete From Begining\n6->Delete From End\n7->Delete From Certain position\n8->Exit List\n");
	printf("X--x--x--x--x--x--x--x--x--x--x--x--x--x--x--x--x--x--X\n\n");
	printf("\nEnter Your Choice: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		   insert_beg();
		   break;
		case 2:
		   insert_end();
		   break;
		case 3:
		   insert_pos();
		   break;   
		case 4:
		   view();
		   break;
		case 5:
		   del_beg();
		   break;
		case 6:
		   del_end();
		   break;   
		case 7:
		   del_pos();
		   break;          
		case 9:
			printf("\n\t\tPess Any Key To Exit List");
			printf("\n\t-------------------------------------");
		    exit(0);
		default:
			printf("Wrong choice\nPress Enter To Try Again");
		    break;     
	}
	printf("\n\t\tPress Any Key To Continue");
	printf("\n\t------------------------------------------");
	getch();
system("cls");
}

}
void insert_beg()
{
	char ch;
	do{
		nod* ptr=malloc(sizeof(nod));
		printf("\n Enter Data: ");
		scanf("%d",&ptr->data);
		ptr->next=ptr;
		if(tail==NULL){
			tail=ptr;
		}
		else
			{
				ptr->next=tail->next;
				tail->next=ptr;
			}
		fflush(stdin);
		printf("\nEnter y To Insert Again: ");
		scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
}
void insert_end()
{
	char ch;
	do{
		nod* ptr=malloc(sizeof(nod));
		printf("\n Enter Data: ");
		scanf("%d",&ptr->data);
		ptr->next=ptr;
		if(tail==NULL){
			tail=ptr;
		}
		else
			{
				ptr->next=tail->next;
				tail->next=ptr;
			}
			tail=ptr;
		fflush(stdin);
		printf("\nEnter y To Insert Again: ");
		scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
}
void insert_pos()
{
	int n,i;
	nod* temp=tail;

		nod* ptr=malloc(sizeof(nod));
		printf("\n Enter Data: ");
		scanf("%d",&ptr->data);
		printf("Enter Position: ");
		scanf("%d",&n);
		ptr->next=ptr;
		if(tail==NULL){
			printf("List Is Empty");
		}
		else
			{
				for(i=0;i<n-1;i++)
				{
					temp=temp->next;
					if(temp==NULL)
					printf("not possible");
				}
				ptr->next=temp->next;
				temp->next=ptr;
				
			}
}
void del_beg()
{
	nod* temp=tail->next;
	if(tail==NULL||temp==tail)
	printf("\n\t\tNOT POSSIBLE\n");
	else{
		tail->next=temp->next;
		free(temp);
		temp==NULL;	
		printf("\n\t\tDleted Successfully\n");
	}
}
void del_end()
{
	nod* temp=tail->next;
	if(tail==NULL||temp==tail)
	printf("\n\t\tNOT POSSIBLE\n");
	else
	{
	while(temp->next!=tail)
	{
		temp=temp->next;
	}
	temp->next=tail->next;
	tail=temp;
	printf("\n\t\tDleted Successfully\n");
}
}
void del_pos()
{
		int n,i;
	nod* temp=tail;
	nod* temp1;
		printf("\nEnter Position: ");
		scanf("%d",&n);
		if(tail==NULL||temp->next==tail){
			printf("\n\t\tNOT POSSIBLE\n");
		}
		else
			{
				for(i=0;i<n-1;i++)
				{
					temp=temp->next;
				}
				temp1=temp->next;
				temp->next=temp1->next;
				if(temp1==tail)
				tail=temp;
				free(temp1);
				temp1==NULL;
				printf("\n\t\tDleted Successfully\n");
			}

}
void view()
{

	nod* ptr=tail;
	if(tail==NULL)
	printf("List Is Empty");
    else{
    	printf("\nyour Circular List Elements are: \n");
		do{
			ptr=ptr->next;
		printf("%d\n",ptr->data);
	}
	while(ptr!=tail);
}
}
