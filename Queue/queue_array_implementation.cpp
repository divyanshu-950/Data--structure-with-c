#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[100],n,front=0,rear=-1;
void push();
void pop();
void view();
int main()
{
	 int choice;
	 printf("Enter Limit Of Your Queue: ");
	 scanf("%d",&n);
	 system("cls");
	 while(1)
	 {
	 	printf("\t\tWelcome To Stack Menu\n");
	 	printf("\t ===================================\n\n");
	 	printf("|1-->Push\n|2-->Pop\n|3-->View\n|4-->Exit\n\n");
	 	printf("|Enter Your Choice: ");
	 	scanf("%d",&choice);
	 	
	 	switch(choice)
	 	{
	 		case 1:
	 			push();
	 			break;
	 			
	 		case 2:
			    pop();
			    break;
			    
			case 3:
			    view();
			    break;
			    
			case 4:
				exit(0);
			    break;
			    
			default:
			   printf("\n\t\tWrong Choice\n\t    ----------------------\n");    
		 }
		 getch();
		 system("cls");
	 }
}
void push()
{
	int data;
	char ch;
	do{
	if(rear==n-1)
	{
	printf("\n\t\tQueue Overflow");
	return;
}
	else{
	printf("\nEnter Data: ");
	scanf("%d",&data);
	
	rear++;
	queue[rear]=data;
	fflush(stdin);
	printf("\nEnter 'y' to Push Again: ");
	scanf("%c",&ch);
}
}while(ch=='y'||ch=='y');
printf("\n\tEnter Any Key To continue..");
}
void pop()
{
	if(rear==-1||front==n){
	printf("\n\t\tQueue Uderflow");
	return;
}
	else
	{
		printf("\nPopped Data: %d",queue[front]);
			front++;
	}
}

void view()
{
	int i;
	if(rear==-1||front==n-1)
	{
	printf("\n\t\tQueue Is Empty");
	return;
	}
	else
	{
	printf("\nYour Data is: -\n");
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
}
}
