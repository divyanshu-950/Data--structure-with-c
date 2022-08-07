#include<stdio.h>
#include<stdlib.h>
struct graph{
	int v;
	int e;
	int** adj;
};
 
 struct graph* adjmat()
 {
 	int u,i,j;
 	struct graph* g=(struct graph*)malloc(sizeof(struct graph));
 	
 	printf("enter the no. of node and edges: ");
 	scanf("%d %d",&g->v,&g->e);
 	
 	for (i = 0; i < g->v; i++){
 		for (j = 0; j < g->v; j++)  {
 			 g->adj[i][j] = 0;  
		 }
	 }  
    
    fflush(stdin);
    printf("enter the node no. in pair: ");
    for (u = 0; u < g->v; u++){
    	scanf("%d %d",&i,&j);
    	g->adj[i][j]=1;
    	g->adj[j][i]=1;
	}
	 
  for (i = 0; i < g->v; i++) {  
    printf("%d: ", i);  
    for (j = 0; j < g->v; j++) {  
      printf("%d ", g->adj[i][j]);  
    }  
    printf("\n");  
  } 
 }
 int main ()
{
	adjmat();
	
	return 0;
}
