#include<stdio.h>
#include<stdlib.h>
#define INF 9999
struct Graph{
	int v;
	int e;
	int adj[20][20];
};
 void print(struct Graph* G)
 {
 	int i,j;
 	 for (i = 0; i < G->v; i++) {  
    printf("%d: ", i);  
    for (j = 0; j < G->v; j++) { 
	if(G->adj[i][j]==INF) 
	printf("%7s","INF");
	else
      printf("%7d", G->adj[i][j]);  
    }  
    printf("\n");  
  } 
 }
 struct Graph* floyd_warshall(struct Graph* G,int v)
 {	
 int i,j,k; 
	  for(k=0;k<v;k++){
	 for (i = 0; i < G->v; i++){
 		for (j = 0; j < G->v; j++){
 			if(G->adj[i][k]+G->adj[k][j]<G->adj[i][j])
 			 G->adj[i][j]=G->adj[i][k]+G->adj[k][j];
 			
 		}
 	}
 }
	 print(G);
 }
void adjmat()
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
 			 G->adj[i][j] = INF;
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
	print(G);
	printf("\nAfter floyd warshall: -\n");
	 floyd_warshall(G,G->v);
 }

 int main ()
{
	
adjmat();
	return 0;
}
