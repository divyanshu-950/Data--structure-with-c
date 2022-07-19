#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
   struct Node *head = NULL;
   
void push()
{
	char ch;
	do{
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;
    printf("enter data: ");
    scanf("%d",&ptr1->data);
    ptr1->next = head;
 
    if (head != NULL)
    {
        while (temp->next != head)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; 
 
    head = ptr1;
    fflush(stdin);
    printf("\nenter y to push again: ");
    scanf("%c",&ch);
    printf("\n");
}
while(ch=='y'||ch=='Y');
}
 
void printList(struct Node *head)
{
    struct Node *temp = head;
    if (head != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while (temp != head);
    }
}
 
int main()
{
   push();
 
    printf("Contents of Circular Linked List\n ");
    printList(head);
 
    return 0;
}
