// Program to create a new list and insert element to it. 

#include<stdio.h>
#include<stdlib.h>

/*  Creating the Linked List */
struct node
{
	int data;
	struct node * next;
};

/* Print the content of Linked List */
void printList(struct node *n)
{
	while(n)
	{
		printf("%d\n",n->data);
		n=n->next;
	}
}

void addNode(struct node **head_ref,int data)  // Insert new node at First
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}

void appendNode(struct node **head_ref,int data)  // Insert new node at Last
{
	struct node * new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL; // new node is last node
	// if LL is empty, then new node is head node
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	
	// else traverse till the end of the list
	
	struct node *last=*head_ref;
	while(last->next != NULL)
		last=last->next;
	last->next=new_node;
	return;
}

int main()
{
   struct node * first=NULL;
   struct node * second=NULL;
   struct node * third=NULL;
   
   first=(struct node *)malloc(sizeof(struct node));
   second=(struct node *)malloc(sizeof(struct node));
   third=(struct node *)malloc(sizeof(struct node));
   
	
   first->data=1;
   first->next=second;
   
   second->data=2;
   second->next=third;
   
   third->data=3;
   third->next=NULL;
   printf("\n");
   printList(first);
  
   addNode(&first,7);
  printf("\n"); 
   printList(first);
  
  appendNode(&first,10);
  appendNode(&first,12);
  printf("\n");
  printList(first);
   
   return 0;
}
