#include<stdio.h>
#include<stdlib.h>
#define INF 999
struct Graph{
	int v;
	int e;
	int adj[20][20];
};
 
struct Graph* adjmat()
 {
 	int u,i,j;
 	int v,e;
 	struct Graph* G=(struct Graph*)malloc(sizeof(struct Graph));
 	
	 fflush(stdin);
 	printf("enter the no. of node and edges: ");
 	scanf("%d %d",&G->v,&G->e);
 	fflush(stdin);                          
 	for (i = 0; i < G->v; i++){
 		for (j = 0; j < G->v; j++)  {
 			 G->adj[i][j] =INF;  
		 }
	 }  
	 

    printf("enter the node no. in pair: ");
    for (u = 0; u < G->e; u++){
    	scanf("%d%d",&i,&j);
    	G->adj[i][j]=1;
    	G->adj[j][i]=1;
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
