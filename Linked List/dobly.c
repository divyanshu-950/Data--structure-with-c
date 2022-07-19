#include<stdio.h>
#include<stdlib.h>
void insert_beg();
void insert_end();
void display();
void insert_spe();
void delete_beg();
void delete_end();
void delete_spe();
struct node{
	struct node* pre;
	int data;
	struct node* next;
};
typedef struct node NODE;
NODE* head=NULL;
void insert_beg()
{
	int item;
    NODE* ptr=malloc(sizeof(NODE));
    ptr->pre=NULL;
    ptr->next=NULL;
    printf("enter data\n");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    head=ptr;
    else{
    head->pre=ptr;
    ptr->next=head;
    head=ptr;
}
    printf("inserted succesfully");
}
void insert_end()
{
	int item;
	NODE* ptr=malloc(sizeof(NODE));
	NODE* re=head;
	ptr->next=NULL;
	ptr->pre=NULL;
	printf("enter data\n");
	scanf("%d",&item);
	ptr->data=item;
	if(head==NULL)
	  head=ptr;
	else
	{
		while(re->next!=NULL)
		{
			re=re->next;
		}
		ptr->pre=re;
		re->next=ptr;
	
	}
	printf("node inserted");
	
}
void display()
{
	NODE* trav=head;
	if(head==NULL)
	printf("empty ");
	else
{
	printf("your list is:-\n");
	while(trav!=NULL)
	{
		printf("%d\n",trav->data);
		trav=trav->next;
	}
}
}
void insert_spe()
{
	int i;
	int item,pos;
	NODE* temp=head;
	NODE* ptr=malloc(sizeof(NODE));
	ptr->next=NULL;
	ptr->pre=NULL;
	if(head==NULL)
	printf("list is empty");
	else{
	printf("enter data\n");
	scanf("%d",&item);
	ptr->data=item;
	printf("enter position\n");
	scanf("%d",&pos);
	pos--;
	for(i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	ptr->next=temp->next;
	ptr->pre=temp;
	temp->next=ptr;
	temp->next->pre=ptr;
 	printf("node inserted");
}   
 
}
void delete_beg()
{
	NODE* temp=head;
	if(head==NULL)
	printf("nothing to delete");
	else if(head->next==NULL){
	  free(head);
	  printf("deleted succesfully");
	  head=NULL;
}
	else
	{
	 head=head->next;
	 temp->next=NULL;
	 head->pre=NULL;
	 printf("deleted succesfully");
	 
}
}
void delete_end()
{
	NODE* temp=head;
	if(head==NULL)
	printf("nothing to delete");
	else if(head->next==NULL){
	  free(head);
	  printf("deleted succesfully");
	  head=NULL;
}
    else
    {
    	while(temp->next!=NULL)
    	{
    		temp=temp->next;
		}
		temp->pre->next=NULL;
		free(temp);
		printf("deleted succesfully");
	}
    
	
}
void delete_spe()
{
	struct node *ptr, *temp;  
    int val;  
    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d",&val);  
    ptr=head;  
    while(ptr->data!=val)  
    ptr=ptr->next; 
	
	if(ptr->next==NULL&&ptr->pre==NULL)
	 {
	 	free(ptr);
	 	head=NULL;
	 	printf("\nnode deleted\n");
	 } 
   
    else if(ptr->next==NULL)  
    {  
        ptr->pre->next=NULL;
		free(ptr)  ;
		printf("\nnode deleted\n");  
    } 
	else if(ptr->pre==NULL) 
	{
		ptr->next->pre=NULL;
		free(ptr)  ;
		head=head->next;
		printf("\nnode deleted\n");  
	}
	 
    else  
    {   
        ptr->pre->next=ptr->next;
        ptr->next->pre=ptr->pre;
        free(ptr);
        printf("\nnode deleted\n");  
    }     
}
int main()
{
	system("color 0F");
	int n;
	while(1)
	{
	printf("1->insert at begining\n2->insert at end\n3->view\n4->insert at certain positon\n5->exit\n6->delete from beginibg\n7->delete at end\n8->delete certain data\n\n");
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
		    display();
		    break;
		case 5:
		    exit(0);
			break; 
		case 4:
		    insert_spe();
			break;
		case 6:
		    delete_beg();
			break;
		case 7:
		    delete_end();
			break;	
		case 8:
		    delete_spe();
			break;				   
		default:
		    printf("dhang se daal bhai.....");
			break;    
	}
	getch();
	system("cls");
}
}

