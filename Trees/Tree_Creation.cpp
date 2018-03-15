#include<stdio.h>
#include<stdlib.h>
// Creating a Tree
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node * newNode(int data)
{
	struct node *node=(struct node *)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
	return(node);
}

void printPreorder(struct node *node)
{
		if(node==NULL)			
			return;
		else
		{
			printf("%d\t",node->data);
			printPreorder(node->left);
			printPreorder(node->right);
		}
}

void printInorder(struct node *node)
{
	if(node==NULL)			
			return;
		else
		{
		
			printInorder(node->left);
				printf("%d\t",node->data);
			printInorder(node->right);
		}

}

void printPostOrder(struct node *node)
{
	if(node==NULL)			
			return;
		else
		{
		
			printPostOrder(node->left);
			printPostOrder(node->right);
				printf("%d\t",node->data);
		}

}

int main()
{
	struct node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	
	printf("Preorder Traversal: ");	printPreorder(root);
	printf("\n\nInorder Traversal: ");	printInorder(root);
	printf("\n\nPostorder Traversal: ");	printPostOrder(root);
	
	return 0;
}







