#include<stdio.h>
#include<stdlib.h>  

/* 
This program includes all options in Linked List
Option 1. Inserting New node to existing list.
Option 2. Deleting Node from list.
Option 3. Displaying values from linked list.

*/
struct node
{
  int data;
  struct node *next;
}; // Declaring the node

void PrintList(struct node *n);
void InsertNode(struct node **n,int data,int position);
int ListLength(struct node *n);
void DeleteNode(struct node **n);  // Position is asked at runtime

int main()
{
	int choice=0,data,position;
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	
	head=(struct node*)malloc(sizeof(struct node *)); // Allocating memory to node
	second=(struct node*)malloc(sizeof(struct node *));
	third=(struct node*)malloc(sizeof(struct node *));
	
	// Now Link all nodes
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	while(1)
	{
		printf("1. Insert Node ");
		printf("\n2. Delete Node ");
		printf("\n3. Display Node ");
		printf("\n4. Exit");
		
		printf("\n\nEnter Your Choice: ");
		scanf("%d",&choice);
		
		if(choice==4)
		exit(0);
		
		switch(choice)
		{
			case 1:
				printf("\n Enter data and Position: ");
				scanf("%d%d",&data,&position);
				InsertNode(&head,data,position);
				break;
			case 2:
				DeleteNode(&head);
				break;
			case 3:
				printf("\nData Present in List: ");
				PrintList(head);
				printf("\n\n");
				break;
			default:
				printf("\nWrong Choice Entered, Try Again !!!\n\n");
		} 
		
	}  

	return 0;
}  // End of Main()

void PrintList(struct node *n)  // Prints the entire list
{
	
	while(n)
	{
		printf("%d\n",n->data);
		n=n->next;
	}
}

int ListLength(struct node *n)  // Iterative program to count length of linked list
{
	int count=0;
	while(n)
	{
		count++;
		n=n->next;
	}
	return count;
}


void InsertNode(struct node **head,int data,int position)
{
	int k=1;
	struct node *newNode,*p,*q;
	newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	
	p=*head;
	if(position==1)
	{
		newNode->next=*head;
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
		q->next=newNode;
		newNode->next=p;
	}
}

void DeleteNode(struct node **n)
{
	printf("\n List of elemetns Before Deletion :\n");
	PrintList(*n); // 
	int position,k=1;
	
	struct node *p,*q;
	p=*n;
	
	if(*n==NULL)
	{
		printf("\nList is Empty\n\n");
		return;
	}
	
	printf("\nEnter position to be deleted: ");
	scanf("%d",&position);
	
	if(position==1)  // Deleting from start of the linked list
	{
		*n=(*n)->next;
		free(p);
		PrintList(*n);
		return;
	}
	else
	{
		while((k<position) && (p!=NULL)) 
		{
			q=p;
			p=p->next;
			k++;
		}
		
		if(p==NULL)
		{
			printf("\nPosition not Exist\n\n");
			return;
		}
		
		q->next=p->next;
		free(p);
		printf("\nNode Deleted\n\n");
		printf("List of Elemtnts After Deletion: \n");
		PrintList(*n);
	}
	
	
}








