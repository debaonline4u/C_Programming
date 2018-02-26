// Find Pairs whose sum is X
// This is Naive approach
// Time complexity: O(n), if we apply sorting then it'll be O(n logn)
//Space complexity: O(1)
#include<stdio.h>
#include<stdlib.h> 
int findPair(int arr[],int size,int sum)
{
	int left=0,right=size-1;
	while(left<right)
	{
		if(arr[left]+arr[right]==sum)
	{
		printf("Sum %d found, Numbers are: %d and %d",sum,arr[left],arr[right]);
		return 0;
	}
	else if(arr[left]+arr[right]<sum)
		left++;
	else 
		right--;	
	}
	return -1; // Failure case
}

int main()
{
	int *arr;
	int size,sum;
	printf("Enter number of elements you want to enter: ");
	scanf("%d",&size);
	arr=(int *)malloc(sizeof(int)*size); // Dynamic allocation of array. 
	printf("Enter %d Elements: ",size);
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
//	for(int i=0;i<size;i++)
//		printf("%d",arr[i]);
	printf("Enter Required sum: ");
	scanf("%d",&sum);
	
	int result=findPair(arr,size,sum);
	if(result==-1)
		printf("\nSum %d is not found.",sum);
	
	return 0;	
}














