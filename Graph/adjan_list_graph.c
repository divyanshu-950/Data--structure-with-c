#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int vertexno;
	struct node* next;
}node;
typedef struct List{
     node* head;
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
         printf("-> ");
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
	for(i=0;i<v;i++)
	{
		arr[i]=(list*)malloc(sizeof(list));
		arr[i]->head=NULL;
	}
	
	for(i=0;i<e;i++){
		src=(node*)malloc(sizeof(node));
		 dest=(node*)malloc(sizeof(node));
		printf("Enter edge (source and destination)");
		scanf("%d %d",&x,&y );
		
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
	print(arr, v);
}

int main()
{
	adjlist();
}
