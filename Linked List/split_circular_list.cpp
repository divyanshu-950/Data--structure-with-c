#include<stdio.h> 
#include<stdlib.h> 
  
struct Node
{
  int data;
  struct Node *next;
}; 
  struct Node *head = NULL;
  
  
void splitList(struct Node *head, struct Node **head1_ref, 
                                            struct Node **head2_ref)
{
  struct Node *slow_ptr = head;
  struct Node *fast_ptr = head; 
  
  if(head == NULL)
    return;
   
  while(fast_ptr->next != head &&
         fast_ptr->next->next != head) 
  {
     fast_ptr = fast_ptr->next->next;
     slow_ptr = slow_ptr->next;
  }  
  
  if(fast_ptr->next->next == head)
    fast_ptr = fast_ptr->next;      
    
  *head1_ref = head;    
       
  if(head->next != head)
    *head2_ref = slow_ptr->next;
    
  fast_ptr->next = slow_ptr->next;
    
  slow_ptr->next = head;       
}
  
void push()
{
	char ch;
	do{
  struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
  struct Node *temp = head; 
  printf("enter data: ");
  scanf("%d",&ptr1->data);
  ptr1->next = head; 
    
  if(head != NULL)
  {
    while(temp->next != head)
      temp = temp->next;        
    temp->next = ptr1; 
  }
  else
     ptr1->next = ptr1;
  
  head = ptr1;  
  fflush(stdin);
  printf("\nenter 'y' to push again: ") ;
  scanf("%c",&ch);
  printf("\n");
}
while(ch=='y'||ch=='Y');
} 
  
void printList(struct Node *head)
{
  struct Node *temp = head; 
  if(head != NULL)
  {
    printf("\n");
    do {
      printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != head);
  }
}
  
int main()
{
  int list_size, i; 
    
  struct Node *head1 = NULL;
  struct Node *head2 = NULL;  
  
  push() ;
  
  printf("Original Circular Linked List");
  printList(head);      
   
  splitList(head, &head1, &head2);
   
  printf("\nFirst Circular Linked List");
  printList(head1);  
  
  printf("\nSecond Circular Linked List");
  printList(head2);  
    
  getchar();
  return 0;
} 
