// This program demonstrates - Searching a node in the linked list. 

#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node * next;
};

void insertNode(struct node **,int data);  	// Insert a node to list
void printList(struct node *);				// Print nodes in the list
int getCount(struct node *head); 			// Count Number of nodes by Recurssive method
bool searchNode(struct node *head,int data);			// Searching a node in the list


int main()
{
	struct node *head=NULL;		// List is empty now. 
	int num=0;
//	printf("\n\nNumber of Nodes: %d\n",getCount(head));
//	printList(head);

	insertNode(&head,10);
	insertNode(&head,20);
	insertNode(&head,30);
	insertNode(&head,40);
	insertNode(&head,50);
	
	printList(head); // Printing list data
	printf("\nNumber of Nodes: %d\n",getCount(head));
	
	printf("\nEnter element to search in the list: ");
	scanf("%d",&num);
	if(searchNode(head,num))
		printf("%d Present in List",num);
	else
		printf("%d Not Present in List",num);
	
	return 0;
}


void printList(struct node * head)
{
	if(head == NULL) {
		printf("List is Empty\n"); return;
	}
	printf("Data in List: \n");
	while(head)
	{
		printf("%d --> ",head->data);
		head=head->next;
	}
}



void insertNode(struct node **head,int data)  // each time new node added at first, whether it's null or anything else
{
	struct node * new_node=(struct node *)malloc(sizeof(struct node *));
	
		new_node->data=data;	
		new_node->next=(*head);
		(*head)=new_node;
		return;
	
	
}

int getCount(struct node *head) // this method returns number of nodes in a list.[Recurssive approach]
{
	if(head==NULL)
	 return 0;
	else
		return 1+getCount(head->next);
}



bool searchNode(struct node *head,int data)		// This method used to search required data in the list and return result as boolean value. 
{
	if(head==NULL)
		return false;
		
	while(head)
	{
		if(head->data==data)
			return true;
		head=head->next;

	}
}































