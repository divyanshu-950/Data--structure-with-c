#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int vertexno;
	struct node* next;
}node;
typedef struct List{
     node* head;
     int cost;
}list;

 list* arr[20]={0};
 
void print(list* arr[],int v )
{
		int i,j;
		 node* temp;
 	 for (i = 0; i <v; i++) { 
	  temp=arr[i]->head; 
    printf("Head:= ");  
    while(temp!=NULL)
    {  
      printf("%d ", temp->vertexno);  
      if(temp->next!=NULL)
         printf("-(%d)-> ",arr[i]->cost);
      temp=temp->next;
      
    }  
    printf("\n");  
  }
}

struct graph* adjlist()
{
	node* src,* dest,* temp=NULL ;
	int i,x,y,v,e;
	printf("Enter Number of node and edges: ");
	scanf("%d%d",&v,&e); 
	for(i=0;i<e;i++)
	{
		arr[i]=(list*)malloc(sizeof(list));
		arr[i]->head=NULL;
	}
	
	for(i=0;i<e;i++){
		src=(node*)malloc(sizeof(node));
		 dest=(node*)malloc(sizeof(node));
		printf("\nEnter edge (source and destination)");
		scanf("%d %d",&x,&y );
		printf("enter destinatination cost: ");
		scanf("%d",&arr[i]->cost);
	if(arr[x]->head==NULL){
		src->vertexno=x;
		src->next=NULL;
		arr[x]->head=src;
	}
	
      dest->vertexno=y;
      dest->next=NULL;
      
      temp=arr[x]->head;
      while(temp->next!=NULL)
      {
      	temp=temp->next;
	  }
	  temp->next=dest;
		
	}
	printf("\n");
	print(arr, v);
}

int main()
{
	adjlist();
}
