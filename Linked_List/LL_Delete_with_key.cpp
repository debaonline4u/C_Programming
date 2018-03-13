#include<stdio.h>
#include<stdlib.h>

// Delete a node w.r.t. Key Value

struct node
{
	int data;
	struct node *next;
};

void printList(struct node *);
void insertNode(struct node **,int data);  // Insert node only at begining of List.
void deleteNode(struct node **,int data);


int main()
{
	struct node *head=NULL;
	
	struct node *first = NULL;	
	struct node *second = NULL;
	struct node *third = NULL;
	struct node *fourth = NULL;
	
	first=(struct node *)malloc(sizeof(struct node *));
	second=(struct node *)malloc(sizeof(struct node *));
	third=(struct node *)malloc(sizeof(struct node *));
	fourth=(struct node *)malloc(sizeof(struct node *));
	
	first->data=12;
	first->next=second;
	
	second->data=34;
	second->next=third;
	
	third->data=21;
	third->next=fourth;
	
	fourth->data=43;
	fourth->next=NULL;
	
	head=first;
	
	insertNode(&head,45);
	insertNode(&head,90);
	
	printList(head);
	
	// from here collect data to delete from List
	
	int delete_data;
	printf("Enter value to delete from List: ");
	scanf("%d",&delete_data);
	
	//struct node *p1=NULL;
	//deleteNode(&p1,10);
	
	deleteNode(&head,delete_data);
	
	printf("\nAfter Deletion List is: \n");
	printList(head);
	
	return 0;
}


void printList(struct node *head)
{
	while(head)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
}


void deleteNode(struct node **head,int num)
{
	struct node *p=NULL;
	struct node *prev=NULL;
	
	p=*head;
	if(p==NULL) {	
		printf("List is empty. "); 
		return; }
	
	if(p->data == num) // if we have to delete first / head -> data
	{
		*head=p->next;
		free(p);
		return;
	}
	
	while((p->data != num) && (p!=NULL)) // search for data to be deleted
	{
		if(p->next == NULL) {
			printf("Data Not Found..\n"); return;
		}
		prev=p;
		p=p->next;
	}
	
/*	if(prev->next == NULL) {
		printf("\nData Not Found.");
		return; 
	} */
	
	if(p->data == num) // if data found
	{
		printf("Data Found and Deleted. \n");
		prev->next=p->next;
		free(p);
		return;
	}
	
}// ends here



void insertNode(struct node **head,int data)
{
	// Create a node first
	struct node * new_node=(struct node *)malloc(sizeof(struct node *));
	new_node->data=data;
	new_node->next=(*head);
	(*head)=new_node;
}





























