#include<stdio.h>
#include<stdlib.h>
int arr[50],i,n;
void input(); void linear(); void binary(); void dislay();
void input()
{
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter elements: -\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
}
void linear()
{
	int item,flag=0;
	printf("enter the value you want to search\n");
	scanf("%d",&item);
		for(i=0;i<n;i++)
	{
		if(arr[i]==item){
		flag=0;
		printf("item is found at %d: -",i+1);
		break;
		}
		else
		flag=1;
		
	}
	if(flag=1)
	printf("item is not found");
	
}
void binary()
{
	int low=0,high=n-1,mid=(low+high)/2,item;
	printf("enter the item you want to search\n");
	scanf("%d",&item);
	while(low<=high){
		if(arr[mid]<item)
		low=mid+1;
		else if(arr[mid]==item){
		printf("item is found at %d: -",i+1);
		break;	
		}
		else 
		high=mid-1;
		mid=(high+low)/2;
		
	}
	if(low>high)
	printf("item is not found");
}
void display()
{
		for(i=0;i<n;i++)
	{
		printf("%d\n",&arr[i]);
		
	}
	
}
int mai()
{
	int x;
	{
		while(1)
	printf("1->linear search\n2->binary search\n4->exit\n\nenter your choice");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			linear();
			display();
			break;
		case 2:
		    binary();
			display();
			break;
		case 3:
			printf("press any key to exit");
			exit(0);
			break;
		default:
		printf("you have entered a wrong choice\n\ntry again")	;
		break;
	}
}
	return 0;
}







