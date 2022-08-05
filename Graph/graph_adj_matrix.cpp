#include <stdio.h>  
#define V 4 

void init(int arr[][V]) {  
  int i, j;  
  for (i = 0; i < V; i++)  
    for (j = 0; j < V; j++)  
      arr[i][j] = 0;  
}  
  
void insertEdge(int arr[][V], int i, int j) {  
  arr[i][j] = 1;  
  arr[j][i] = 1;  
}  
  
void printAdjMatrix(int arr[][V]) {  
  int i, j;  
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
