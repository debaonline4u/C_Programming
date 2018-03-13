#include<stdio.h>
#include<stdlib.h>

// Program to delete node from Linked List according to given position

struct node
{
	int data;
	struct node * next;
};

void PrintList(struct node *);
void DeleteNode(struct node **head,int position);

int main()
{
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	struct node *fourth=NULL;
	
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	fourth=(struct node *)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=fourth;
	
	fourth->data=4;
	fourth->next=NULL;
	
	PrintList(head);
	DeleteNode(&head,3);	// We are deleting node 3 
	PrintList(head);
	
	return 0;
}


void PrintList(struct node *n)		// Printing list
{
	printf("\nHere is data from Linked List:\n");
	while(n)
	{
		printf("%d\n",n->data);
		n=n->next;
	}
}

void DeleteNode(struct node **head,int position)	// Deleting node according to position, but here only node 3 is deleted. 
{
	struct node *p,*q;
	int k=1;
	p=*head;
	if(p==NULL)
	return;
	if(position==1)
	{
		*head=p->next;
		free(p);
	}
	else
	{
		while((p!=NULL) && (k<position))
		{
			k++;
			q=p;
			p=p->next;
		}
		if(p==NULL) {printf("\nPosition does not exist."); return; }
		else
		{
		q->next=p->next;
		free(p);
		return;
	}
	}
}





























