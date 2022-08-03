#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[100],n,top=-1;
void push();
void pop();
void view();
int main()
{
	 int choice;
	 printf("Enter Limit Of Your Stack: ");
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
	if(top==n-1)
	{
	printf("\n\t\tStack Overflow");
	return;
}
	else{
	printf("\nEnter Data: ");
	scanf("%d",&data);
	
	top++;
	stack[top]=data;
	fflush(stdin);
	printf("\nEnter 'y' to Push Again: ");
	scanf("%c",&ch);
}
}while(ch=='y'||ch=='y');
printf("\n\tEnter Any Key To continue..");
}
void pop()
{
	if(top==-1){
	printf("\n\t\tStack Uderflow");
	return;
}
	else
	{
		printf("\nPopped Data: %d",stack[top]);
		top--;
	}
}

void view()
{
	int i;
	if(top==-1)
	{
	printf("\n\t\tStack Is Empty");
	return;
	}
	else
	{
	printf("\nYour Data is: -\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
}
