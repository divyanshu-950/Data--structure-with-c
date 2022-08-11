#include<stdio.h>
#include<stdlib.h>
struct Graph{
	int v;
	int e;
	int adj[20][20];
};
 
struct Graph* adjmat()
 {
 	int u,i,j,w;
 	int v,e;
 	struct Graph* G=(struct Graph*)malloc(sizeof(struct Graph));
 	
	 fflush(stdin);
 	printf("enter the no. of node and edges: ");
 	scanf("%d %d",&G->v,&G->e);
 
 	fflush(stdin);                          
 	for (i = 0; i < G->v; i++){
 		for (j = 0; j < G->v; j++)  {
 			 G->adj[i][j] = 999;
			  if(i==j)
			 G->adj[i][j]=0;   
		 }
	 }  
	 

    printf("enter the node no. in pair: ");
    for (u = 0; u < G->e; u++){
    	printf("\nenter: ");
    	scanf("%d%d",&i,&j);
    	printf("enter destination cost: ");
        scanf("%d",&w);
    	G->adj[i][j]=w;
    	printf("\n");
	}
	 return G;
 }
 void print(struct Graph* G)
 {
 	int i,j;
 	 for (i = 0; i < G->v; i++) {  
    printf("%d: ", i);  
    for (j = 0; j < G->v; j++) {  
      printf("%d ", G->adj[i][j]);  
    }  
    printf("\n");  
  } 
 }
 int main ()
{
	
struct Graph* g=adjmat();
print(g);
	return 0;
}
