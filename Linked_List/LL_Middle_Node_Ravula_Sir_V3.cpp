#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// program to find mid node of a linked list. it counts all nodes and then traverse to the mid node. 
struct node
{
	int data;
	struct node *next;
};

void insertAtBeginning(struct node **head, int data)
{
// allocate new node
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->data = data;
	temp->next = (*head);
	*head = temp;
}

void findMiddleNode(struct node *head)
{
	struct node *mid = head, *temp;
	int count = 0;
	for(temp = head; temp ; temp = temp->next)
	{
		if (count & 1)		// Here mid is calculated every alternate count, which leads to count the middle node very trickly. 
		mid = mid->next;	
		count += 1;
	}
	if (mid)
		printf("The middle node is = %d", mid->data);
}

int main() 
{
	struct node *head = NULL;
	insertAtBeginning(&head, 10);
	insertAtBeginning(&head, 20);
	insertAtBeginning(&head, 30);
	insertAtBeginning(&head, 40);
	insertAtBeginning(&head, 50);
	insertAtBeginning(&head, 60);
	insertAtBeginning(&head, 70);
	insertAtBeginning(&head, 80);
	insertAtBeginning(&head, 90);
	findMiddleNode(head);
	return 1;
}
