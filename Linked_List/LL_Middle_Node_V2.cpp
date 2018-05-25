// Find middle node of Linked List. 
// Here we are counting number of nodes in the list and then  traversing to the  middle node. 
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

int countListNodes(struct node *head)
{
	int count=0;
	while(head)
	{
		count++;
		head=head->next;
	}
	return count;
}

int findMiddleNode(struct node *head)
{
	int count=countListNodes(head);
	int midCount=count/2;
	for(int i=1;i<=midCount;i++)
		head=head->next;
	return head->data;
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





