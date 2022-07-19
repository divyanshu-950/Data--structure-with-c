#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
typedef struct node nod;
nod* head;
void add_beg();
void add_pos();
void add_end();
int main()
{
	int n;
	while(1)
	{
	cout<<"\t\tWelcome To Linked List Menu\n";
	cout<<"1>add at begining\n2>add at certain position\n3>add at end\n4>exit\n";
	cout<<"\tEnter Your Choice: ";
	cin>>n;
	switch(n)
	{
		case 1:
			add_beg();
			break;
		case 2:
			//add_pos();
			break;
		case 3:
			//add_end();
			break;
		case 4:
			cout<<"\n\t\tThank you For Using";
			exit(0);
		default:
		    cout<<"wrong choice";
		    
	}
}
	
}
void add_beg()
{
	nod* ptr=malloc(sizeof(nod));
	cout<<"\nenter data: "
	cin>>ptr->data;
	ptr->next=NULL;
	if(head==NULL)
	head=ptr;
	else
	ptr->next=head;
	head=ptr;
	
}
