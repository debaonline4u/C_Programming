#include<stdio.h>
#include<malloc.h>

/*

	Program to Add 3 Numbers and Dispay the Sum - Using Linked List

*/

struct node
{
	int data;
	struct node * next;
}; // Base of Linked List

int Add(struct node *n)
{
	// This module add the list values
	int sum=0;
	struct node *start=n;
	printf("Enter 3 Numbers: ");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&(n->data));
		n=n->next;
	}
	n=start;
	while(n)
	{	
			sum+=n->data;
			n=n->next;
	}
	return  sum;
}
int main()
{
	//  Declare the LL
	struct node *first=(struct node *)malloc(sizeof(struct node *));
	struct node *second=(struct node *)malloc(sizeof(struct node *));
	struct node *third=(struct node *)malloc(sizeof(struct node *));
	
	first->next=second;
	second->next=third;
	third->next=NULL;
	
	int sum=Add(first);
	printf("Sum of 3 Numbers = %d\n",sum);
	
	return 0;
}
