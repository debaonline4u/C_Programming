// Linked List Reverse

#include<stdlib.h>
#include<stdio.h>

struct node
{
	int data;
	struct node *next;
};

void printList(struct node *head)		// Prints nodes in  List. 
{
	printf("\nData Present in Linked List: ");
	while(head)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}

void reverseList(struct node **head_addr)		// Reverse Linked List. 
{
	struct node *currPtr,*prevPtr,*nextPtr;
	currPtr=*head_addr;
	prevPtr=NULL;
	while(currPtr)
	{
		nextPtr=currPtr->next;
		currPtr->next=prevPtr;
		prevPtr=currPtr;
		currPtr=nextPtr;
	}
	*head_addr=prevPtr;
}

int main()
{
	struct node *head=NULL;
	struct node *first=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	
	head=(struct node *)malloc(sizeof(struct node *));		// assigning memory to Linked LIst. 
	first=(struct node *)malloc(sizeof(struct node *));
	second=(struct node *)malloc(sizeof(struct node *));
	third=(struct node *)malloc(sizeof(struct node *));
	
	head->data=1;
	head->next=first;
	
	first->data=2;
	first->next=second;
	
	second->data=3;
	second->next=third;
	
	third->data=4;
	third->next=NULL;
	
	printf("*************** PROGRAM TO REVERSE LINKED LIST ********************** \n");
	printf("Before Reverse: ");
	printList(head);
	reverseList(&head);
	printf("\nAfter Reverse: ");
	printList(head);
	
	return 0;
	
}









