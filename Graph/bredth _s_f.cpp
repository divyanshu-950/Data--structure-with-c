#include <stdio.h>  
#include<stdlib.h>
#define V 4 

int  q[20], visited[20], n, i, j, f = 0, r = -1;
int adjMatrix[V][V];  
void init(int arr[][V]) {  
  for (i = 0; i < V; i++)  
  q[i] = 0;
  visited[i] = 0;
    for (j = 0; j < V; j++)  
      arr[i][j] = 0;  
}  
  
void insertEdge(int arr[][V], int i, int j) {  
  arr[i][j] = 1;  
  arr[j][i] = 1;  
}  

void init(int arr[][V]) {  
  for (i = 0; i < V; i++)  
    for (j = 0; j < V; j++)  
      arr[i][j] = 0;  
}  
  
void insertEdge(int arr[][V], int i, int j) {  
  arr[i][j] = 1;  
  arr[j][i] = 1;  
}  
  
void printAdjMatrix(int arr[][V]) {  
  for (i = 0; i < V; i++) {  
    printf("%d: ", i);  
    for (j = 0; j < V; j++) {  
      printf("%d ", arr[i][j]);  
    }  
    printf("\n");  
  }  
}  
  
int main() {  
  int adjMatrix[V][V];  
  char ch;
  int edge1,edge2;
  
  init(adjMatrix);  
  do{
printf("\nenter edge coardinate(0-3): ");
scanf("%d%d",&edge1,&edge2);


	insertEdge(adjMatrix, edge1, edge2);  
fflush(stdin);
 printf("\nEnter 'y' to insert again: ");
 scanf("%c",&ch);
}while(ch=='y'||ch=='Y');

  printAdjMatrix(adjMatrix);  
  
  return 0;  
}  
void printAdjMatrix(int arr[][V]) {  
  for (i = 0; i < V; i++) {  
    printf("%d: ", i);  
    for (j = 0; j < V; j++) {  
      printf("%d ", arr[i][j]);  
    }  
    printf("\n");  
  }  
}  
  
int main() {  
  char ch;
  int v,edge1,edge2;
  
  init(adjMatrix);  
  do{
printf("\nenter edge coardinate(0-3): ");
scanf("%d%d",&edge1,&edge2);


	insertEdge(adjMatrix, edge1, edge2);  
fflush(stdin);
 printf("\nEnter 'y' to insert again: ");
 scanf("%c",&ch);
}while(ch=='y'||ch=='Y');

printf("Enter the starting vertex: ");
scanf("%d", &v);
bfs(v);

printf("\nThe node which are reachable are:");
for(i=1; i <= n; i++) {

if(visited[i])
printf(" %d", i);

else {
printf("\nBFS is not possible. All nodes are not reachable!");
break;

}
}  
printAdjMatrix(adjMatrix);  
  return 0;  
}
