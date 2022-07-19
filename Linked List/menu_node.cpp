#include<stdio.h>
#include<stdlib.h>
void create();
int beg_insert();
void display();
void end_insert();
void random_insert();
struct node{
	int data;
	struct node* link;
};
struct node* head;
void create(){
	head=(struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	int n,i;
	struct node* prev,* p;
	printf("\t\t\tEnter Number Of Elements:-\n\t\t\t");
	scanf("%d",&n);
	printf("\t\t\tEnter Elements:-\n");
	fflush(stdin);   
	for(i=0;i<n;i++)
	{
	   p=(struct node*)malloc(sizeof(struct node));
	    printf("\t\t\t");
	   scanf("%d",&p->data);
	   p->link=NULL;
	   if(head==NULL)
	   	head=p;
	   else 
	   	prev->link=p;
	   	prev=p;
   	}
}
void display()
{
		struct node* temp;
	temp=head;
	printf("\t\t\tYour Linked List Is:-\n");
	while(head!=0)
	{
		printf("\t\t\t%d\n",head->data);
		head=head->link;
	}
}


int beg_insert()
{ int n;
	create();
	struct node* new_=malloc(sizeof(struct node) );
	printf("\t\t\tEnter Data Of New Node\n\t\t\t");
	scanf("%d",&new_->data);
	new_->link=NULL;
	
	new_->link=head;
	head=new_;
	display(); 
}
	

int main(){
	system("color 1B");
	while(1){
	int n;
	printf("\n\n\t\t\t\tMAIN MENU\n");
	printf("\t\t============================================\n");
	printf("\t\tInsert A Element At Begining          [1]\n");
	printf("\t\tInsert A Element At End               [2]\n");
	printf("\t\tInsert A Element At Certain Position  [3]\n");
	printf("\t\tEXIT                                  [4]\n");
	printf("\t\t============================================\n\n");
	printf("\t\t\tENTER YOUR CHOICE\n\t\t\t");
	scanf("%d",&n);
	switch(n){
		case 1:
			beg_insert();
			break;
		case 2:
//			end_insert();
			break;
		case 3:
//			random_insert();
			break;
		case 4:
		    exit(0)	;
		    break;
		default:
		    printf("\t\t\tINVALID CHOICE, TRY AGAIN");
		    break;
	}

}
	return 0;
}
 
