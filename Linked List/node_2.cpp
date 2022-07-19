#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *addr;
};
int main()
{
	struct node* head,* p;
	p=(struct node*)malloc(sizeof(struct node));
	head=(struct node*)malloc(sizeof(struct node));
	head->addr =p;
	p->addr =NULL;
	printf("Enter Data of First Node\n");
	scanf("%d",&head->data);
	printf("Enter Data Of Second Node\n");
	scanf("%d",&p->data);
	struct node* temp=head;
	while(temp!=NULL){
	printf("%d ",temp->data);
	temp= temp->addr;
}
	return 0;
	

}
