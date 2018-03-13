#include<stdio.h>
#include<stdlib.h>
// Program to Insert Node in to Linked list at various positions(Revised version)
struct node
{
	int data;
	struct node *next;
};

void PrintList(struct node *n);
int NodeCount(struct node *n);
void InsertNode(struct node **head,int data,int position);

int main()
{
	int data,position;
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	printf("Number of Nodes in Linked List: %d \n",NodeCount(head));
	PrintList(head);
	while(1)
	{
		printf("\nEnter Data and Position to Enter into Linked List:\n");
		printf("Data: ");
		scanf("%d",&data);
		printf("Position: ");
		scanf("%d",&position);
		if(position<=0) exit(0);
		if(NodeCount(head)>=position-1)
			InsertNode(&head,data,position);
		else
		{
			printf("\nUnable to Insert, Node Count=%d where as Position=%d\n",NodeCount(head),position);
			continue;
			
		}
	}
//	InsertNode(&head,77,3);
//	PrintList(head);
	
	return 0;
	
}

void PrintList(struct node *n) // Prints Nodes from Linked List
{
	printf("\nBelow data present in Linked List\n");
	while(n)
	{
		printf("%d->",n->data);
		n=n->next;
	}
}

int NodeCount(struct node *n)  // Returns Number of Nodes from Linked List
{
	int count=0;
	while(n)
	{
		count++;
		n=n->next;
	}
	return count;
}
void InsertNode(struct node **head,int data,int position) // Insert node based on position
{
	int k=1;
	struct node *p,*q;
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	p=*head;
	if(position==1)
	{
		newNode->next=p;
		*head=newNode;
	}
	else
	{
		while((p!=NULL) && (k<position))
		{
			k++;
			q=p;
			p=p->next;
		}
		newNode->next=p;
		q->next=newNode;
	}
	printf("\n\nAfter inserting %d at position %d",data,position);
	PrintList(*head);
}





