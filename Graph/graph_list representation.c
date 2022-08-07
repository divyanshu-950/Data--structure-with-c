#include <stdio.h>
#include <stdlib.h>
 
struct AdjListNode {
    int dest;
    struct AdjListNode* next;
};
 
struct AdjList {
    struct AdjListNode* head;
};
struct Graph {
    int V;
    struct AdjList* array;
};
 
struct AdjListNode* newAdjListNode(int dest)
{
    struct AdjListNode* newNode
        = (struct AdjListNode*)malloc(
            sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}
 
struct Graph* createGraph(int V)
{
    struct Graph* graph
        = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
 
    graph->array = (struct AdjList*)malloc(
        V * sizeof(struct AdjList));
 
    int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;
 
    return graph;
}
 
void addEdge(struct Graph* graph, int src, int dest)
{
    struct AdjListNode* check = NULL;
    struct AdjListNode* newNode = newAdjListNode(dest);
 
    if (graph->array[src].head == NULL) {
        newNode->next = graph->array[src].head;
        graph->array[src].head = newNode;
    }
    else {
 
        check = graph->array[src].head;
        while (check->next != NULL) {
            check = check->next;
        }
        check->next = newNode;
    }
 
    newNode = newAdjListNode(src);
    if (graph->array[dest].head == NULL) {
        newNode->next = graph->array[dest].head;
        graph->array[dest].head = newNode;
    }
    else {
        check = graph->array[dest].head;
        while (check->next != NULL) {
            check = check->next;
        }
        check->next = newNode;
    }
 
}
 
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->V; ++v) {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl) {
            printf("-> %d", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}
 
int main()
{
    int V = 5;
     char ch;
   int n,it;
    struct Graph* graph = createGraph(V);
  do{
   printf("\nenter the node no. in pair: ");
  	scanf("%d %d",&n,&it);
 addEdge(graph, n, it); 
  fflush(stdin);
 printf("\nEnter 'y' to insert again: ");
 scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
   
    printGraph(graph);
 
    return 0;
}
