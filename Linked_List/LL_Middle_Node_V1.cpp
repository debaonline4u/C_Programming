// Find middle node of Linked List. 
// Here two pointers has been used. FastPointer and SlowPointer. FastPointer moves double the speed of slowPointer,
// by the time fastPointer has reached the end of list, slowPointer is in the middle of the list. That's it. 

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void printList(struct node *head)
{
	while(head)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}

int findMiddleNode(struct node *head)
{
	struct node *fastPtr,*slowPtr;
	for(fastPtr=head,slowPtr=head;fastPtr && fastPtr->next;fastPtr=fastPtr->next->next,slowPtr=slowPtr->next);
	
	return slowPtr->data;
}

void insertAtBegining(struct node **head,int data)
{
	// allocate new node and  insert it to the fist place
	struct node *temp=(struct node *)malloc(sizeof(struct node *));
	temp->data=data;
	temp->next=(*head);
	
	*head=temp;
}

int main()
{
	printf("********* PROGRAM TO FIND MIDDLE NODE OF  LINKED LIST **************\n");
	struct node *head=NULL;
	insertAtBegining(&head,10);
	insertAtBegining(&head,20);
	insertAtBegining(&head,30);
	insertAtBegining(&head,40);
	insertAtBegining(&head,50);
	insertAtBegining(&head,60);
	insertAtBegining(&head,70);
	insertAtBegining(&head,80);
	insertAtBegining(&head,90);
	printf("Data Present in Linked List: ");
	printList(head);
	printf("\nMiddle Node of Linked List: %d",findMiddleNode(head));

	return 0;			
}

//Time complexity: O(n)
//Space complexity: O(1)





